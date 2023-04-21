#include <Arduino.h>

/**Tabla de conversion bcd a 7 segmentos cátodo común
    Codigo bcd       a    b    c    d    e    f    g   dp
    0                1    1    1    1    1    1    0   0
    1                0    1    1    0    0    0    0
    2                1    1    0    1    1    0    1
    3                1    1    1    1    0    0    1
    4                0    1    1    0    0    1    1
    5                1    0    1    1    0    1    1
    6                0    0    1    1    1    1    1
    7                1    1    1    0    0    0    0
    8                1    1    1    1    1    1    1
    9                1    1    1    0    0    1    1
*/
/*uint8_t display[] = {0x3f, 0x06, 0x5B, 0x4f, 0x66, 0x6D, 0x7C, 0x07, 0x7f, 0x67};*/

// static uint8_t Tabla_Digitos_BCD_7seg[ ] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //si utiliza decodificador.

/*void config_TIMER0(void)
{
  TCCR0A = (1 << WGM01);  // Activa el bit CTC (clear timer on compare match)                        // del TCCR0A (timer counter/control register)
  OCR0A = 62;             // valor de comparacion de int cada 1ms
  TCCR0B = (1 << CS02);   // divido por 256 y generar interrupciones cada 10 ms
  TIMSK0 = (1 << OCIE0A); // Habilita las interrupciones entimer compare
}*/
/*void config(void)
{
  // SALIDAS
  DDRB |= (1 << PB0);
  DDRB |= (1 << PB1);
  DDRB |= (1 << PB2);
  DDRB |= (1 << PB3);
  DDRD |= (1 << PD4);
  DDRD |= (1 << PD5);
  DDRD |= (1 << PD6);
}
uint64_t T1, total_ms = 0;*/

/*int main(void)
{
  uint8_t cont = 0;
  boolean sentido = 0;
  T1 = total_ms;
  PORTB &= 0xf0;
  PORTD &= 0x8f;
  config_TIMER0();
  config();
  sei();
  while (1)
  {
    asm("nop");
    if ((total_ms - T1) > 1000)
    {
      PORTB &= ~(0x0f & 0xff);
      PORTD &= ~(0x70 & 0xff);

      PORTB |= (0x0f & display[cont]);
      PORTD |= (0x70 & display[cont]);
      T1 = total_ms;
      if ((cont < 10) && sentido == 0)
      {
        cont++;
        if (cont == 10)
        { cont=9;
          sentido = 1;
        }
      }
      if ((cont > 0) && sentido == 1)
      { 
        cont--;
        if (cont == 0)
        {
          sentido = 0;
        }
      } 
    }
  }

  return 0;
}
ISR(TIMER0_COMPA_vect)
{
  total_ms++;
}*/