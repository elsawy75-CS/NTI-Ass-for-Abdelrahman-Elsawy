#include "Common/Definition.h"
#include "Common/BitMath.h"

#include "Mcal/DIO/DIO_Interface.h"
#include "Mcal/Timer0/T0_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"

#include "Hal/LED/Led_Interface.h"
#include "Hal/Buzzer/Buzzer_Interface.h"
#include "Hal/Segment/Segment_Interface.h"
#include "Hal/Button/Button_Interface.h"

#define LED_GROUP           DIO_GroupA
#define LED_PIN             DIO_Pin0

#define BUZZER_GROUP        DIO_GroupA
#define BUZZER_PIN          DIO_Pin1

#define BTN1_GROUP          DIO_GroupA
#define BTN1_PIN            DIO_Pin2

#define BTN2_GROUP          DIO_GroupA
#define BTN2_PIN            DIO_Pin3

#define SEGMENT_GROUP       DIO_GroupC

#define LED_TOGGLE_PERIOD_MS      500U
#define BUZZER_TOGGLE_PERIOD_MS   150U
#define SEGMENT_COUNT_PERIOD_MS   1000U
#define BTN1_CHECK_PERIOD_MS      200U
#define BTN2_CHECK_PERIOD_MS      200U

#define PWM_STEPS                 20U
#define PWM_STEP_DEFAULT          10U

static volatile uint32_t g_MsTicks = 0U;

static void Tick_1ms_CallBack(void)
{
    g_MsTicks++;
}

void main(void)
{
    uint32_t LastLed     = 0U;
    uint32_t LastBuzzer  = 0U;
    uint32_t LastSeg     = 0U;
    uint32_t LastBtn1    = 0U;
    uint32_t LastBtn2    = 0U;
    uint32_t LastPwmTick = 0xFFFFFFFFU;

    uint8_t  SegCount      = 0U;
    uint8_t  LedBlinkOn     = 1U;
    uint8_t  BrightnessStep = PWM_STEP_DEFAULT;
    uint8_t  PwmCounter     = 0U;

    Led_Init(LED_GROUP, LED_PIN);
    Buzzer_Init(BUZZER_GROUP, BUZZER_PIN);
    Btn_Init(BTN1_GROUP, BTN1_PIN, Button_InternalPullUp);
    Btn_Init(BTN2_GROUP, BTN2_PIN, Button_InternalPullUp);
    SSD_Init(SEGMENT_GROUP);
    SSD_DisplayNumber(SEGMENT_GROUP, SSD_Cathode, SegCount);

    T0_Config_t Tick_Cfg =
    {
        .Prescaler     = T0_Prescaler64,
        .Mode          = T0_CTC,
        .OC0Mode       = T0_OC0_Disconnected,
        .OVFInterrupt  = T0_InterruptDisable,
        .CompInterrupt = T0_InterruptEnable,
        .CompareValue  = 124U,
    };

    T0_SetCompareCallBack(Tick_1ms_CallBack);
    T0_Init(&Tick_Cfg);

    GIE_Enable();

    while (1)
    {
        if (g_MsTicks != LastPwmTick)
        {
            LastPwmTick = g_MsTicks;

            PwmCounter++;
            if (PwmCounter >= PWM_STEPS)
            {
                PwmCounter = 0U;
            }

            if (LedBlinkOn && (PwmCounter < BrightnessStep))
            {
                Led_On(LED_GROUP, LED_PIN, LED_SOURCE_CONNECTION);
            }
            else
            {
                Led_Off(LED_GROUP, LED_PIN, LED_SOURCE_CONNECTION);
            }

            if ((g_MsTicks - LastLed) >= LED_TOGGLE_PERIOD_MS)
            {
                LastLed = g_MsTicks;
                LedBlinkOn = (uint8_t)(!LedBlinkOn);
            }

            if ((g_MsTicks - LastBuzzer) >= BUZZER_TOGGLE_PERIOD_MS)
            {
                LastBuzzer = g_MsTicks;
                DIO_TogglePin(BUZZER_GROUP, BUZZER_PIN);
            }

            if ((g_MsTicks - LastSeg) >= SEGMENT_COUNT_PERIOD_MS)
            {
                LastSeg = g_MsTicks;
                SegCount++;
                if (SegCount > 9U)
                {
                    SegCount = 0U;
                }
                SSD_DisplayNumber(SEGMENT_GROUP, SSD_Cathode, SegCount);
            }

            if ((g_MsTicks - LastBtn1) >= BTN1_CHECK_PERIOD_MS)
            {
                LastBtn1 = g_MsTicks;
                if (Btn_ReadState(BTN1_GROUP, BTN1_PIN, Button_InternalPullUp) == PullUp_Pressed)
                {
                    if (BrightnessStep < PWM_STEPS)
                    {
                        BrightnessStep++;
                    }
                }
            }

            if ((g_MsTicks - LastBtn2) >= BTN2_CHECK_PERIOD_MS)
            {
                LastBtn2 = g_MsTicks;
                if (Btn_ReadState(BTN2_GROUP, BTN2_PIN, Button_InternalPullUp) == PullUp_Pressed)
                {
                    if (BrightnessStep > 0U)
                    {
                        BrightnessStep--;
                    }
                }
            }
        }
        else
        {
        }
    }
}
