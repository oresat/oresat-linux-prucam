#include "max2771.h"
#include <linux/module.h>
#include <linux/spi/spi.h>

static int max2771_probe(struct spi_device *spi)
{
    return 0;
}

static int max2771_remove(struct spi_device *spi)
{
    return 0;
}

static struct spi_driver max2771_driver = {
    .driver =
        {
            .name = "max2771",
            .owner = THIS_MODULE,
        },
    .probe = max2771_probe,
    .remove = max2771_remove,
};
module_spi_driver(max2771_driver);

MODULE_AUTHOR("PSAS <oresat@pdx.edu>");
MODULE_DESCRIPTION("MAX2771 GNSS receiver driver");
MODULE_LICENSE("GPL v2");
