#!/usr/bin/python3

import requests
import time
import numpy as np

pixclk = 45675000 # 45.675MHz
pixclk_period = 1 / pixclk
line_length_pck = 1650
line_time_ms = 1000 * (line_length_pck * pixclk_period)

# gain ranges, default sensor gain is 32
gain_min = 0.5
gain_max = 8
gain_step = 0.25

exps = [5, 10, 20, 40, 50, 75, 100, 150, 200]

cam_path = "http://192.168.6.2:5000"


def ms_to_coarse_time(ms):
    coarse_time = int(round(ms / line_time_ms))
    return coarse_time

# set fine time to 0
requests.put(cam_path + "/settings?fine_time=0")

for gain in np.arange(gain_min, gain_max, gain_step):

    # gain is a fixed point byte in the format xxx.yyyyy, so shift the 
    # integer portion left by 5 bits and divide the decimal portion by the 
    # minimum decimal step for 5 bits of decimal (0.03125), the OR them 
    # together to get the final gain
    gain_int = int(gain)
    gain_decimal = gain - int(gain)
    gain_byte = (gain_int << 5 ) | int(gain_decimal / 0.03125)

    # set the gain
    settings_url = cam_path + "/settings?global_gain=" + str(gain_byte)
    resp = requests.put(settings_url)
    if resp.status_code != 204:
        raise Exception("setting gain returned %d" % resp.status_code)

    for exp_ms in exps:
        coarse_time = ms_to_coarse_time(exp_ms)

        # write the exposure setting
        settings_url = cam_path + "/settings?coarse_time=" + str(coarse_time)
        resp = requests.put(settings_url)
        if resp.status_code != 204:
            raise Exception("setting exposure returned %d" % resp.status_code)

        # wait 100ms plus the exposure time for setting to be applied
        time.sleep(0.1 + (exp_ms / 1000))

        # get the image as a PNG!
        resp = requests.get(cam_path + "/image.bmp")
        if resp.status_code != 200:
            raise Exception("image request returned %d" % resp.status_code)

        # encode exposure time, gain, and timestamp into filename
        image_name = "img_" + str(exp_ms) + "ms_" + str(gain).replace('.', 'p') + "x_" + str(int(time.time())) + ".bmp"
        print("writing file", image_name)

        # write the bmp to a file
        with open(image_name, 'wb') as f:
            f.write(resp.content)


