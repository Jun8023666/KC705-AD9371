/* AD9528 data structure initialization file */

/**
* \page Disclaimer Legal Disclaimer
* Copyright 2015-2017 Analog Devices Inc.
* Released under the AD9371 API license, for more information see the "LICENSE.txt" file in this zip file.
*
*/


#include <stdint.h>
#include "common.h"
#include "t_ad9528.h"

static spiSettings_t clockSpiSettings =
{
     1,
     0,
     1,
     1,
     0,
     0,
     0,
     1,
     1,
     25000000   
};

ad9528pll1Settings_t clockPll1Settings =
{
    30720000,
    1,
    3,
    0,
    1,
    0,
    122880000,
    2,
    4,
    0
};

ad9528pll2Settings_t clockPll2Settings =
{
    5, //M
    6, //N2
    30
};

ad9528outputSettings_t clockOutputSettings =
{
    53237,                         //ͨ��ʹ��
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //ʱ����Դ
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //�����ƽѡ��
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //ģ����ʱ
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //������ʱ
    {0,6,0,192,0,0,0,0,0,0,0,0,192,6}, //ͨ����Ƶ
    {0,122880000,0,3840000,0,0,0,0,0,0,0,0,3840000,122880000} //���ʱ��
};

ad9528sysrefSettings_t clockSysrefSettings =
{
   0,
   2,
   0,
   0,
   0,
   0,
   512
};

ad9528Device_t clockAD9528_ =
{
    &clockSpiSettings,
    &clockPll1Settings,
    &clockPll2Settings,
    &clockOutputSettings,
    &clockSysrefSettings
};
