#include "pwm.h"

void pwmInit()
{
    TIM1_DeInit();
    CLK_PeripheralClockConfig(CLK_PERIPHERAL_TIMER1, ENABLE);
    TIM1_TimeBaseInit(0, TIM1_COUNTERMODE_UP, 4095, 0);
    TIM1_OC3Init(TIM1_OCMODE_PWM2, TIM1_OUTPUTSTATE_ENABLE, TIM1_OUTPUTNSTATE_ENABLE,
               CCR3_Val, TIM1_OCPOLARITY_LOW, TIM1_OCNPOLARITY_HIGH, TIM1_OCIDLESTATE_SET,
               TIM1_OCNIDLESTATE_RESET);
    TIM1_Cmd(ENABLE);
    TIM1_CtrlPWMOutputs(ENABLE);
}