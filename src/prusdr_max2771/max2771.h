/**
 * @file    max2771.h
 * @breif   MAX2771 Multiband Universal GNSS Receiver
 */

#ifndef _MAX2771_
#define _MAX2771_

/**
 * @name    MAX2771 Register Addresses
 * @{
 */
#define MAX2771_AD_CONFIG1            0x0
#define MAX2771_AD_CONFIG2            0x1
#define MAX2771_AD_CONFIG3            0x2
#define MAX2771_AD_PLL_CONFIG         0x3
#define MAX2771_AD_PLL_INT_DIV_RATIO  0x4
#define MAX2771_AD_PLL_FRAC_DIV_RATIO 0x5
#define MAX2771_AD_DSP_INTERFACE      0x6
#define MAX2771_AD_CLOCK_CONFIG1      0x7
#define MAX2771_AD_TEST_MODE1         0x8
#define MAX2771_AD_TEST_MODE2         0x9
#define MAX2771_AD_CLOCK_CONFIG2      0xA
/** @} */

/**
 * @name    MAX2771 Configuration 1 register (0x0) fields
 * @{
 */
#define MAX2771_AD_CONFIG1_PermMsk    (0x3FFC0000U)
#define MAX2771_AD_CONFIG1_PermSet    (0x3E800000U)
#define MAX2771_CONFIG1_FGAIN_Pos     (0U)
#define MAX2771_CONFIG1_FGAIN_Msk     (0x1U << MAX2771_CONFIG1_FGAIN_Pos)
#define MAX2771_CONFIG1_FGAIN         MAX2771_CONFIG1_FGAIN_Msk
#define MAX2771_CONFIG1_FCENX_Pos     (1U)
#define MAX2771_CONFIG1_FCENX_Msk     (0x1U << MAX2771_CONFIG1_FCENX_Pos)
#define MAX2771_CONFIG1_FCENX         MAX2771_CONFIG1_FCENX_Msk
#define MAX2771_CONFIG1_F3OR5_Pos     (2U)
#define MAX2771_CONFIG1_F3OR5_Msk     (0x1U << MAX2771_CONFIG1_F3OR5_Pos)
#define MAX2771_CONFIG1_F3OR5         MAX2771_CONFIG1_F3OR5_Msk
#define MAX2771_CONFIG1_FBW_Pos       (3U)
#define MAX2771_CONFIG1_FBW_Msk       (0x7U << MAX2771_CONFIG1_FBW_Pos)
#define MAX2771_CONFIG1_FBW           MAX2771_CONFIG1_FBW_Msk
#define MAX2771_CONFIG1_FCEN_Pos      (6U)
#define MAX2771_CONFIG1_FCEN_Msk      (0x3FU << MAX2771_CONFIG1_FCEN_Pos)
#define MAX2771_CONFIG1_FCEN          MAX2771_CONFIG1_FCEN_Msk
#define MAX2771_CONFIG1_MIXERMODE_Pos (13U)
#define MAX2771_CONFIG1_MIXERMODE_Msk (0x3U << MAX2771_CONFIG1_MIXERMODE_Pos)
#define MAX2771_CONFIG1_MIXERMODE     MAX2771_CONFIG1_MIXERMODE_Msk
#define MAX2771_CONFIG1_LNAMODE_Pos   (15U)
#define MAX2771_CONFIG1_LNAMODE_Msk   (0x3U << MAX2771_CONFIG1_LNAMODE_Pos)
#define MAX2771_CONFIG1_LNAMODE       MAX2771_CONFIG1_LNAMODE_Msk
#define MAX2771_CONFIG1_MIXPOLE_Pos   (17U)
#define MAX2771_CONFIG1_MIXPOLE_Msk   (0x1U << MAX2771_CONFIG1_MIXPOLE_Pos)
#define MAX2771_CONFIG1_MIXPOLE       MAX2771_CONFIG1_MIXPOLE_Msk
#define MAX2771_CONFIG1_IDLE_Pos      (30U)
#define MAX2771_CONFIG1_IDLE_Msk      (0x1U << MAX2771_CONFIG1_IDLE_Pos)
#define MAX2771_CONFIG1_IDLE          MAX2771_CONFIG1_IDLE_Msk
#define MAX2771_CONFIG1_CHIPEN_Pos    (31U)
#define MAX2771_CONFIG1_CHIPEN_Msk    (0x1U << MAX2771_CONFIG1_CHIPEN_Pos)
#define MAX2771_CONFIG1_CHIPEN        MAX2771_CONFIG1_CHIPEN_Msk
/** @} */

/**
 * @name    MAX2771 Configuration 2 register (0x1) fields
 * @{
 */
#define MAX2771_CONFIG2_DIEID_Pos           (0U)
#define MAX2771_CONFIG2_DIEID_Msk           (0x3U << MAX2771_CONFIG2_DIEID_Pos)
#define MAX2771_CONFIG2_DIEID               MAX2771_CONFIG2_DIEID_Msk
#define MAX2771_CONFIG2_DRVCFG_Pos          (4U)
#define MAX2771_CONFIG2_DRVCFG_Msk          (0x3U << MAX2771_CONFIG2_DRVCFG_Pos)
#define MAX2771_CONFIG2_DRVCFG              MAX2771_CONFIG2_DRVCFG_Msk
#define MAX2771_CONFIG2_BITS_Pos            (6U)
#define MAX2771_CONFIG2_BITS_Msk            (0x7U << MAX2771_CONFIG2_BITS_Pos)
#define MAX2771_CONFIG2_BITS                MAX2771_CONFIG2_BITS_Msk
#define MAX2771_CONFIG2_FORMAT_Pos          (9U)
#define MAX2771_CONFIG2_FORMAT_Msk          (0x3U << MAX2771_CONFIG2_FORMAT_Pos)
#define MAX2771_CONFIG2_FORMAT              MAX2771_CONFIG2_FORMAT_Msk
#define MAX2771_CONFIG2_AGCMODE_Pos         (11U)
#define MAX2771_CONFIG2_AGCMODE_Msk         (0x3U << MAX2771_CONFIG2_AGCMODE_Pos)
#define MAX2771_CONFIG2_AGCMODE             MAX2771_CONFIG2_AGCMODE_Msk
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_Pos (13U)
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_Msk                                    \
    (0x3U << MAX2771_CONFIG2_SPI_SDIO_CONFIG_Pos)
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG MAX2771_CONFIG2_SPI_SDIO_CONFIG_Msk
#define MAX2771_CONFIG2_GAINREF_Pos     (15U)
#define MAX2771_CONFIG2_GAINREF_Msk     (0xFFFU << MAX2771_CONFIG2_GAINREF_Pos)
#define MAX2771_CONFIG2_GAINREF         MAX2771_CONFIG2_GAINREF_Msk
#define MAX2771_CONFIG2_IQEN_Pos        (27U)
#define MAX2771_CONFIG2_IQEN_Msk        (0x1U << MAX2771_CONFIG2_IQEN_Pos)
#define MAX2771_CONFIG2_IQEN            MAX2771_CONFIG2_IQEN_Msk
#define MAX2771_CONFIG2_ANAIMON_Pos     (28U)
#define MAX2771_CONFIG2_ANAIMON_Msk     (0x1U << MAX2771_CONFIG2_ANAIMON_Pos)
#define MAX2771_CONFIG2_ANAIMON         MAX2771_CONFIG2_ANAIMON_Msk
/** @} */

/**
 * @name    MAX2771 Configuration 3 register (0x2) fields
 * @{
 */
#define MAX2771_CONFIG3_STRMRST_Pos    (0U)
#define MAX2771_CONFIG3_STRMRST_Msk    (0x1U << MAX2771_CONFIG3_STRMRST_Pos)
#define MAX2771_CONFIG3_STRMRST        MAX2771_CONFIG3_STRMRST_Msk
#define MAX2771_CONFIG3_DATASYNCEN_Pos (1U)
#define MAX2771_CONFIG3_DATASYNCEN_Msk (0x1U << MAX2771_CONFIG3_DATASYNCEN_Pos)
#define MAX2771_CONFIG3_DATASYNCEN     MAX2771_CONFIG3_DATASYNCEN_Msk
#define MAX2771_CONFIG3_TIMESYNCEN_Pos (2U)
#define MAX2771_CONFIG3_TIMESYNCEN_Msk (0x1U << MAX2771_CONFIG3_TIMESYNCEN_Pos)
#define MAX2771_CONFIG3_TIMESYNCEN     MAX2771_CONFIG3_TIMESYNCEN_Msk
#define MAX2771_CONFIG3_STAMPEN_Pos    (3U)
#define MAX2771_CONFIG3_STAMPEN_Msk    (0x1U << MAX2771_CONFIG3_STAMPEN_Pos)
#define MAX2771_CONFIG3_STAMPEN        MAX2771_CONFIG3_STAMPEN_Msk
#define MAX2771_CONFIG3_STRMBITS_Pos   (4U)
#define MAX2771_CONFIG3_STRMBITS_Msk   (0x3U << MAX2771_CONFIG3_STRMBITS_Pos)
#define MAX2771_CONFIG3_STRMBITS       MAX2771_CONFIG3_STRMBITS_Msk
#define MAX2771_CONFIG3_STRMSTOP_Pos   (9U)
#define MAX2771_CONFIG3_STRMSTOP_Msk   (0x1U << MAX2771_CONFIG3_STRMSTOP_Pos)
#define MAX2771_CONFIG3_STRMSTOP       MAX2771_CONFIG3_STRMSTOP_Msk
#define MAX2771_CONFIG3_STRMSTART_Pos  (10U)
#define MAX2771_CONFIG3_STRMSTART_Msk  (0x1U << MAX2771_CONFIG3_STRMSTART_Pos)
#define MAX2771_CONFIG3_STRMSTART      MAX2771_CONFIG3_STRMSTART_Msk
#define MAX2771_CONFIG3_STRMEN_Pos     (11U)
#define MAX2771_CONFIG3_STRMEN_Msk     (0x1U << MAX2771_CONFIG3_STRMEN_Pos)
#define MAX2771_CONFIG3_STRMEN         MAX2771_CONFIG3_STRMEN_Msk
#define MAX2771_CONFIG3_PGQQEN_Pos     (12U)
#define MAX2771_CONFIG3_PGQQEN_Msk     (0x1U << MAX2771_CONFIG3_PGQQEN_Pos)
#define MAX2771_CONFIG3_PGQQEN         MAX2771_CONFIG3_PGQQEN_Msk
#define MAX2771_CONFIG3_PGAIEN_Pos     (13U)
#define MAX2771_CONFIG3_PGAIEN_Msk     (0x1U << MAX2771_CONFIG3_PGAIEN_Pos)
#define MAX2771_CONFIG3_PGAIEN         MAX2771_CONFIG3_PGAIEN_Msk
#define MAX2771_CONFIG3_FHIPEN_Pos     (15U)
#define MAX2771_CONFIG3_FHIPEN_Msk     (0x1U << MAX2771_CONFIG3_FHIPEN_Pos)
#define MAX2771_CONFIG3_FHIPEN         MAX2771_CONFIG3_FHIPEN_Msk
#define MAX2771_CONFIG3_HILOADEN_Pos   (19U)
#define MAX2771_CONFIG3_HILOADEN_Msk   (0x1U << MAX2771_CONFIG3_HILOADEN_Pos)
#define MAX2771_CONFIG3_HILOADEN       MAX2771_CONFIG3_HILOADEN_Msk
#define MAX2771_CONFIG3_GAININ_Pos     (22U)
#define MAX2771_CONFIG3_GAININ_Msk     (0x3FU << MAX2771_CONFIG3_GAININ_Pos)
#define MAX2771_CONFIG3_GAININ         MAX2771_CONFIG3_GAININ_Msk
/** @} */

/**
 * @name    MAX2771 PLL Configuration register (0x3) fields
 * @{
 */
#define MAX2771_PLL_CONFIG_PWDSAV_Pos   (2U)
#define MAX2771_PLL_CONFIG_PWDSAV_Msk   (0x1U << MAX2771_PLL_CONFIG_PWDSAV_Pos)
#define MAX2771_PLL_CONFIG_PWDSAV       MAX2771_PLL_CONFIG_PWDSAV_Msk
#define MAX2771_PLL_CONFIG_INT_PLL_Pos  (3U)
#define MAX2771_PLL_CONFIG_INT_PLL_Msk  (0x1U << MAX2771_PLL_CONFIG_INT_PLL_Pos)
#define MAX2771_PLL_CONFIG_INT_PLL      MAX2771_PLL_CONFIG_INT_PLL_Msk
#define MAX2771_PLL_CONFIG_ICP_Pos      (9U)
#define MAX2771_PLL_CONFIG_ICP_Msk      (0x1U << MAX2771_PLL_CONFIG_ICP_Pos)
#define MAX2771_PLL_CONFIG_ICP          MAX2771_PLL_CONFIG_ICP_Msk
#define MAX2771_PLL_CONFIG_IXTAL_Pos    (19U)
#define MAX2771_PLL_CONFIG_IXTAL_Msk    (0x3U << MAX2771_PLL_CONFIG_IXTAL_Pos)
#define MAX2771_PLL_CONFIG_IXTAL        MAX2771_PLL_CONFIG_IXTAL_Msk
#define MAX2771_PLL_CONFIG_REFOUTEN_Pos (24U)
#define MAX2771_PLL_CONFIG_REFOUTEN_Msk                                        \
    (0x1U << MAX2771_PLL_CONFIG_REFOUTEN_Pos)
#define MAX2771_PLL_CONFIG_REFOUTEN   MAX2771_PLL_CONFIG_REFOUTEN_Msk
#define MAX2771_PLL_CONFIG_LOBAND_Pos (28U)
#define MAX2771_PLL_CONFIG_LOBAND_Msk (0x1U << MAX2771_PLL_CONFIG_LOBAND_Pos)
#define MAX2771_PLL_CONFIG_LOBAND     MAX2771_PLL_CONFIG_LOBAND_Msk
#define MAX2771_PLL_CONFIG_REFDIV_Pos (29U)
#define MAX2771_PLL_CONFIG_REFDIV_Msk (0x7U << MAX2771_PLL_CONFIG_REFDIV_Pos)
#define MAX2771_PLL_CONFIG_REFDIV     MAX2771_PLL_CONFIG_REFDIV_Msk
/** @} */

/**
 * @name    MAX2771 PLL Integer Division Ratio register (0x4) fields
 * @{
 */
#define MAX2771_PLL_INT_DIV_RATIO_RDIV_Pos (3U)
#define MAX2771_PLL_INT_DIV_RATIO_RDIV_Msk                                     \
    (0xFFFU << MAX2771_PLL_INT_DIV_RATIO_RDIV_Pos)
#define MAX2771_PLL_INT_DIV_RATIO_RDIV     MAX2771_PLL_INT_DIV_RATIO_RDIV_Msk
#define MAX2771_PLL_INT_DIV_RATIO_NDIV_Pos (13U)
#define MAX2771_PLL_INT_DIV_RATIO_NDIV_Msk                                     \
    (0x7FFFU << MAX2771_PLL_INT_DIV_RATIO_NDIV_Pos)
#define MAX2771_PLL_INT_DIV_RATIO_NDIV MAX2771_PLL_INT_DIV_RATIO_NDIV_Msk
/** @} */

/**
 * @name    MAX2771 PLL Fractional Division Ratio register (0x5) fields
 * @{
 */
#define MAX2771_PLL_FRAC_DIV_RATIO_FDIV_Pos (8U)
#define MAX2771_PLL_FRAC_DIV_RATIO_FDIV_Msk                                    \
    (0xFFFFFU << MAX2771_PLL_FRAC_DIV_RATIO_FDIV_Pos)
#define MAX2771_PLL_FRAC_DIV_RATIO_FDIV MAX2771_PLL_FRAC_DIV_RATIO_FDIV_Msk
/** @} */

/**
 * @name    MAX2771 DSP Interface register (0x6) fields
 *
 * @note    All bits in register are reserved
 */

/**
 * @name    MAX2771 Clock Configuration 1 register (0x7) fields
 * @{
 */
#define MAX2771_CLOCK_CONFIG1_MODE_Pos   (0U)
#define MAX2771_CLOCK_CONFIG1_MODE_Msk   (0x1U << MAX2771_CLOCK_CONFIG1_MODE_Pos)
#define MAX2771_CLOCK_CONFIG1_MODE       MAX2771_CLOCK_CONFIG1_MODE_Msk
#define MAX2771_CLOCK_CONFIG1_ADCCLK_Pos (2U)
#define MAX2771_CLOCK_CONFIG1_ADCCLK_Msk                                       \
    (0x1U << MAX2771_CLOCK_CONFIG1_ADCCLK_Pos)
#define MAX2771_CLOCK_CONFIG1_ADCCLK     MAX2771_CLOCK_CONFIG1_ADCCLK_Msk
#define MAX2771_CLOCK_CONFIG1_FCLKIN_Pos (3U)
#define MAX2771_CLOCK_CONFIG1_FCLKIN_Msk                                       \
    (0x1U << MAX2771_CLOCK_CONFIG1_FCLKIN_Pos)
#define MAX2771_CLOCK_CONFIG1_FCLKIN           MAX2771_CLOCK_CONFIG1_FCLKIN_Msk
#define MAX2771_CLOCK_CONFIG1_REFCLK_M_CNT_Pos (4U)
#define MAX2771_CLOCK_CONFIG1_REFCLK_M_CNT_Msk                                 \
    (0xFFFU << MAX2771_CLOCK_CONFIG1_REFCLK_M_CNT_Pos)
#define MAX2771_CLOCK_CONFIG1_REFCLK_M_CNT                                     \
    MAX2771_CLOCK_CONFIG1_REFCLK_M_CNT_Msk
#define MAX2771_CLOCK_CONFIG1_REFCLK_L_CNT_Pos (16U)
#define MAX2771_CLOCK_CONFIG1_REFCLK_L_CNT_Msk                                 \
    (0xFFFU << MAX2771_CLOCK_CONFIG1_REFCLK_L_CNT_Pos)
#define MAX2771_CLOCK_CONFIG1_REFCLK_L_CNT                                     \
    MAX2771_CLOCK_CONFIG1_REFCLK_L_CNT_Msk
#define MAX2771_CLOCK_CONFIG1_EXTADCCLK_Pos (28U)
#define MAX2771_CLOCK_CONFIG1_EXTADCCLK_Msk                                    \
    (0x1U << MAX2771_CLOCK_CONFIG1_EXTADCCLK_Pos)
#define MAX2771_CLOCK_CONFIG1_EXTADCCLK MAX2771_CLOCK_CONFIG1_EXTADCCLK_Msk
/** @} */

/**
 * @name    MAX2771 Test Mode 1 register (0x8) fields
 *
 * @note    All bits in register are reserved
 */

/**
 * @name    MAX2771 Test Mode 2 register (0x9) fields
 *
 * @note    All bits in register are reserved
 * @{
 */
#define MAX2771_AD_TEST_MODE2_PermMsk (0x01C00000U)
#define MAX2771_AD_TEST_MODE2_PermSet (0x00C00000U)
/** @} */

/**
 * @name    MAX2771 Clock Configuration 2 register (0xA) fields
 * @{
 */
#define MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_Pos (2U)
#define MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_Msk                                   \
    (0x1U << MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_Pos)
#define MAX2771_CLOCK_CONFIG2_CLKOUT_SEL         MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_Msk
#define MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_Pos (3U)
#define MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_Msk                               \
    (0x1U << MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_Pos)
#define MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL                                   \
    MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_Msk
#define MAX2771_CLOCK_CONFIG2_ADCCLK_M_CNT_Pos (4U)
#define MAX2771_CLOCK_CONFIG2_ADCCLK_M_CNT_Msk                                 \
    (0xFFFU << MAX2771_CLOCK_CONFIG2_ADCCLK_M_CNT_Pos)
#define MAX2771_CLOCK_CONFIG2_ADCCLK_M_CNT                                     \
    MAX2771_CLOCK_CONFIG2_ADCCLK_M_CNT_Msk
#define MAX2771_CLOCK_CONFIG2_ADCCLK_L_CNT_Pos (16U)
#define MAX2771_CLOCK_CONFIG2_ADCCLK_L_CNT_Msk                                 \
    (0xFFFU << MAX2771_CLOCK_CONFIG2_ADCCLK_L_CNT_Pos)
#define MAX2771_CLOCK_CONFIG2_ADCCLK_L_CNT                                     \
    MAX2771_CLOCK_CONFIG2_ADCCLK_L_CNT_Msk
/** @} */

/**
 * @name    MAX2771 Configuration 1 (0x0) bitfeild values
 * @{
 */
#define MAX2771_CONFIG1_MIXPOLE_13MHZ       0x0 /* Mixer pole at 13Mhz */
#define MAX2771_CONFIG1_MIXPOLE_36MHZ       0x1 /* Mixer pole at 36Mhz */
#define MAX2771_CONFIG1_LNAMODE_HIGH_BAND   0x0 /* High band LNA is acive */
#define MAX2771_CONFIG1_LNAMODE_LOW_BAND    0x1 /* Low band LNA is active */
#define MAX2771_CONFIG1_LNAMODE_DISABLED    0x2 /* Both LNAs diabled */
#define MAX2771_CONFIG1_MIXERMODE_HIGH_BAND 0x0 /* High band mixer enabled */
#define MAX2771_CONFIG1_MIXERMODE_LOW_BAND  0x1 /* Low band mixer enabled */
#define MAX2771_CONFIG1_MIXERMODE_DISABLED  0x2 /* Both mixers diabled */
#define MAX2771_CONFIG1_FBW_2_5MHZ          0x0 /* 2.5 MHz */
#define MAX2771_CONFIG1_FBW_8_7MHZ          0x1 /* 8.7 MHz */
#define MAX2771_CONFIG1_FBW_4_2MHZ          0x2 /* 4.2 MHz */
#define MAX2771_CONFIG1_FBW_23_4MHZ         0x3 /* 23.4 MHz (lowpass mode only) */
#define MAX2771_CONFIG1_FBW_36_0MHZ         0x4 /* 36.0 MHz (lowpass mode only) */
#define MAX2771_CONFIG1_FBW_16_4MHZ         0x7 /* 16.4 MHz (lowpass mode only) */
#define MAX2771_CONFIG1_F3OR5_5             0x0 /* 5th order filter */
#define MAX2771_CONFIG1_F3OR5_3             0x1 /* 3rd order filter */
#define MAX2771_CONFIG1_FCENX_LOWPASS       0x0 /* Lowpass filter */
#define MAX2771_CONFIG1_FCENX_COMPLEX       0x1 /* Complex bandpass filter */
#define MAX2771_CONFIG1_FGAIN_6DB           0x0 /* Filter gain reduced 6db */
#define MAX2771_CONFIG1_FGAIN_NORMAL        0x1 /* Normal filter gain */
/** @} */

/**
 * @name    MAX2771 Configuration 2 (0x1) bitfeild values
 * @{
 */
#define MAX2771_CONFIG2_IQEN_I               0x0 /* I channel only enabled */
#define MAX2771_CONFIG2_IQEN_IQ              0x1 /* I and Q channels enabled */
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_NONE 0x0 /* Nothing applied */
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_PULL_DOWN                              \
    0x1 /* Pull-down resistor applied */
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_PULL_UP                                \
    0x2 /* Pull-up resistor applied */
#define MAX2771_CONFIG2_SPI_SDIO_CONFIG_BUS_HOLD 0x3 /* Bus-hold applied */
#define MAX2771_CONFIG2_AGCMODE_INDEPENDENT      0x0 /* Independent I and Q */
#define MAX2771_CONFIG2_AGCMODE_SET_BITS                                       \
    0x2 /* Gain set by programming of GAININ bits */
#define MAX2771_CONFIG2_FORMAT_US_BI    0x0 /* Unsigned binary */
#define MAX2771_CONFIG2_FORMAT_SIGN_MAG 0x1 /* Signed and magnitude */
#define MAX2771_CONFIG2_FORMAT_2_COMP1  0x2 /* Two's complement binary */
#define MAX2771_CONFIG2_FORMAT_2_COMP2  0x3 /* Two's complement binary */
#define MAX2771_CONFIG2_BITS_1_BIT      0x0 /* 1 bit */
#define MAX2771_CONFIG2_BITS_2_BITS     0x2 /* 2 bits */
#define MAX2771_CONFIG2_BITS_3_BITS     0x4 /* 3 bits */
#define MAX2771_CONFIG2_DRVCFG_CMOS     0x0 /* CMOS logic */
#define MAX2771_CONFIG2_DRVCFG_ANALOG_OUT1                                     \
    0x2 /* Analog outputs (ADC bypass mode) */
#define MAX2771_CONFIG2_DRVCFG_ANALOG_OUT2                                     \
    0x3 /* Analog outputs (ADC bypass mode) */
/** @} */

/**
 * @name    MAX2771 Configuration 3 (0x2) bitfeild values
 * @{
 */
#define MAX2771_CONFIG3_STRMBITS_I  0x1 /* I MSB, I LSB */
#define MAX2771_CONFIG3_STRMBITS_IQ 0x3 /* I MSB, I LSB, Q MSB, Q LSB */
/** @} */

/**
 * @name    MAX2771 PLL Configuration (0x3) bitfeild values
 * @{
 */
#define MAX2771_PLL_CONFIG_REFDIV_X2    0x0 /* XTAL frequency x2 */
#define MAX2771_PLL_CONFIG_REFDIV_DIV_4 0x1 /* XTAL frequency /4 */
#define MAX2771_PLL_CONFIG_REFDIV_DIV_2 0x2 /* XTAL frequency /2 */
#define MAX2771_PLL_CONFIG_REFDIV_X1    0x3 /* XTAL frequency */
#define MAX2771_PLL_CONFIG_REFDIV_X4    0x4 /* XTAL frequency x4 */
#define MAX2771_PLL_CONFIG_LOBAND_L1    0x0 /* L1 band */
#define MAX2771_PLL_CONFIG_LOBAND_L2_L5 0x1 /* L2/L5 band */
#define MAX2771_PLL_CONFIG_IXTAL_NORMAL 0x1 /* Normal current */
#define MAX2771_PLL_CONFIG_IXTA_HIGH    0x3 /* High current */
#define MAX2771_PLL_CONFIG_ICP_0_5MA    0x0 /* 0.5 mA */
#define MAX2771_PLL_CONFIG_ICP_1MA      0x1 /* 1 mA */
#define MAX2771_PLL_CONFIG_INT_PLL_FRAC 0x0 /* Fractional-N PLL */
#define MAX2771_PLL_CONFIG_INT_PLL_INT  0x1 /* Integer-N PLL */
/** @} */

/**
 * @name    MAX2771 Clock Configuration 1 (0x7) bitfeild values
 * @{
 */
#define MAX2771_CLOCK_CONFIG1_EXTADCCLK_INTERNAL                               \
    0x0 /* Use internally generate clock */
#define MAX2771_CLOCK_CONFIG1_EXTADCCLK_EXTERNAL                               \
    0x1 /* Use clock provided on ADC_CLKIN */
#define MAX2771_CLOCK_CONFIG1_FCLKIN_BYPASS 0x0 /* Bypass clock divider */
#define MAX2771_CLOCK_CONFIG1_FCLKIN_USE                                       \
    0x1 /* Take ADC clock from fractional divider */
#define MAX2771_CLOCK_CONFIG1_ADCCLK_USE                                       \
    0x0 /* Use output of reference clock divider/multiplier */
#define MAX2771_CLOCK_CONFIG1_ADCCLK_BYPASS                                    \
    0x1 /* Bypass reference clock divider/multiplier */
/** @} */

/**
 * @name    MAX2771 Clock Configuration 2 (0xA) bitfeild values
 * @{
 */
#define MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_BYPASS                            \
    0x0 /* Bypass fractional clock divider */
#define MAX2771_CLOCK_CONFIG2_PREFRACDIV_SEL_ENABLE                            \
    0x1 /* Enable fractional divider */
#define MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_OUT                                   \
    0x0 /* Integer divider/multiplier output */
#define MAX2771_CLOCK_CONFIG2_CLKOUT_SEL_ADC 0x1 /* ADC clock */
/** @} */

#endif /* _MAX2771_ */
