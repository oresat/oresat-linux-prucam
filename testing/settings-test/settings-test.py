#!/usr/bin/python3

import requests
import time

pixclk = 45675000 # 45.675MHz
pixclk_period = 1 / pixclk
line_length_pck = 1650
line_time_ms = 1000 * (line_length_pck * pixclk_period)

# gain ranges, default sensor gain is 32
gain_min = 15
gain_max = 254
gain_step = 2

# exposure range in ms
exp_min = 1
exp_max = 200
exp_step = 10

cam_path = "http://192.168.6.2:5000"


def ms_to_coarse_time(ms):
    coarse_time = int(round(ms / line_time_ms))
    return coarse_time


for gain in range(gain_max, gain_min, -1 * gain_step):
    for exp_ms in range(exp_max, exp_min, -1 * exp_step):

        coarse_time = ms_to_coarse_time(exp_ms)

        ts = int(time.time())

        # write the settings to the camera and wait for them to be applied
        requests.put(cam_path + "/settings?coarse_time=" + str(coarse_time) + "&fine_time=0&global_gain=" + str(gain))
        time.sleep(0.2)

        # get the image as a PNG!
        resp = requests.get(cam_path + "/image.bmp")

        image_name = "img_" + str(exp_ms) + "ms_" + str(gain) + "_g" + str(ts) + ".bmp"
        print("writing file ", image_name)


        # write the png to a file
        with open(image_name, 'wb') as f:
            f.write(resp.content)



