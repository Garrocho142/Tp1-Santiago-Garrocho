#include  <Arduino.h>
#include  <util/delay.h>
#include  "gpio.h"

#define  LED GPIO_PORTB,GPIO_PIN5  //!< Este es el pin del led
#define  BOTON GPIO_PORTD,GPIO_PIN2

/*int main (void)
{
  //! aca se escriben las inicializaciones
  GPIO_InitPin(LED, GPIO_OUTPUT);
  GPIO_InitPin(BOTON, GPIO_GPIO_INPUT_PU);
  bool pulsador = false;
  while(1)
  {
    pulsador = GPIO_ReadPin(BOTON, false);
    GPIO_WritePin(LED, pulsador);
    _delay_ms(1000);
   //! aca se escribe el programa principal
  }

  return 0;
}*/