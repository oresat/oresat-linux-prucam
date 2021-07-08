#include "max2771.h"
#include <linux/module.h>
#include <linux/init.h>
#include <linux/spi/spi.h>

#define SPI_TRANSFER_BUF_LEN 6
#define MAX_SPI_FREQ_HZ 44000000
#define BUS_NUM 0

static struct spi_device *max2771_dev;

static u32 max2771_read_reg(struct spi_device *spi, u8 reg, u32 *val)
{
    u8 buf[2];

    reg <<= 4;
    reg |= 0x08; // instruction read bit

    buf[0] = 0;
    buf[1] = reg;

    return spi_write_then_read(spi, buf, 2, val, 4);
}

static int max2771_write_reg(struct spi_device *spi, u8 reg, u32 val)
{
    u8 buf[6];
    int ret;

    reg <<= 4;

    buf[0] = 0;
    buf[1] = reg;
    buf[2] = (u8)(val >> 24);
    buf[3] = (u8)(val >> 16);
    buf[4] = (u8)(val >> 8);
    buf[5] = (u8)val;

    ret = spi_write(spi, buf, 6);
    if (ret)
        dev_err(&spi->dev, "spi write failed: ret = %d\n", ret);

    return ret;
}

static int __init prusdr_init(void)
{
    struct spi_master *master;
    u32 val;

    struct spi_board_info spi_device_info = {
        .modalias = "max2771",
        .max_speed_hz = SPI_TRANSFER_BUF_LEN,
        .bus_num = BUS_NUM,
        .chip_select = 0,
        .mode = SPI_MODE_1 | SPI_3WIRE,
    };

    master = spi_busnum_to_master(BUS_NUM);
    if (!master) {
        printk("spi bus %d error\n", BUS_NUM);
        return -1;
    }

    max2771_dev = spi_new_device(master, &spi_device_info);
    if (!max2771_dev) {
        printk("create spi device failed\n");
        return -1;
    }

    max2771_dev -> bits_per_word = 8;

    if (spi_setup(max2771_dev) != 0){
        printk("setup spi failed\n");
        spi_unregister_device(max2771_dev);
        return -1;
    }

    printk("max2771 init\n");

    if (max2771_read_reg(max2771_dev, 0, &val) != 0) {
        printk("spi read failed\n");
    }
    printk("register read value: 0x%x\n", val);

    return 0;
}

static void __exit prusdr_exit(void)
{
    if (max2771_dev)
        spi_unregister_device(max2771_dev);

    printk("max2771 exit\n");
}

module_init(prusdr_init);
module_exit(prusdr_exit);

MODULE_AUTHOR("PSAS <oresat@pdx.edu>");
MODULE_DESCRIPTION("MAX2771 GNSS receiver driver");
MODULE_LICENSE("GPL v2");
