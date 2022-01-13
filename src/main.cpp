#include <Arduino.h>

#ifdef __cplusplus
extern "C"
{
#endif

#include "luos.h"
#include "gate.h"
#include "pipe.h"
#include "button.h"
#include "fingerprint.h"
#include "lcd.h"
#include "led.h"
#include "servo_motor.h"
#include "biometric_security.h"

#ifdef __cplusplus
}
#endif

void setup() {
  // put your setup code here, to run once:
  Luos_Init();
  Gate_Init();
  Pipe_Init();
  Lcd_Init(); 
  Servo_Init();
  BiometricSecurity_Init();
  
  /* Fingerprint_Init();
  Led_Init();
  Button_Init(); */
}

void loop() {
  // put your main code here, to run repeatedly:
  Luos_Loop();
  Gate_Loop();
  Pipe_Loop();
  Lcd_Loop(); 
  Servo_Loop();
  BiometricSecurity_Loop();

  /* Fingerprint_Loop();
  Led_Loop();
  Button_Loop(); */
}