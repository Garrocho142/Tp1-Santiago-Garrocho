#include <Arduino.h>
#include <stdio.h>
#include <util/delay.h>
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
uint8_t display[] = {0x3f, 0x06, 0x5B, 0x4f, 0x66, 0x6D, 0x7C, 0x07, 0x7f, 0x67};

// static uint8_t Tabla_Digitos_BCD_7seg[ ] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //si utiliza decodificador.

/*void config_TIMER0(void)
{
  TCCR0A = (1 << WGM01);  // Activa el bit CTC (clear timer on compare match)                        // del TCCR0A (timer counter/control register)
  OCR0A = 62;             // valor de comparacion de int cada 1ms
  TCCR0B = (1 << CS02);   // divido por 256 y generar interrupciones cada 10 ms
  TIMSK0 = (1 << OCIE0A); // Habilita las interrupciones entimer compare
}*/

void config(void)
{
    // SALIDAS DISPLAY
  DDRB |= (1 << PB0);
  DDRB |= (1 << PB1);
  DDRB |= (1 << PB2);
  DDRB |= (1 << PB3);
  DDRD |= (1 << PD4);
  DDRD |= (1 << PD5);
  DDRD |= (1 << PD6);
    // SALIDAS ACTIVADORAS DE LOS DISPLAYS
  DDRC |= (1 << PC0);
  DDRC |= (1 << PC1);
  DDRC |= (1 << PC2);
  DDRC |= (1 << PC3);
    // ENTRADAS
  DDRC &= ~(1 << PC4);
  DDRC &= ~(1 << PC5);
  DDRD &= ~(1 << PD2);
    //PULL-UP
  PORTC |= (1 << PC4);
  PORTC |= (1 << PC5);
  PORTD |= (1 << PD2);
}


int main()
{ PORTB &= 0xf0;
  PORTD &= 0x8f;
  PORTC &= 0xf0;
    while(1)
    { 

      PORTB &= ~(0x0f & 0xff);        //1
      PORTD &= ~(0x70 & 0xff);
      PORTC |= (1<<0);
      PORTB |= (0x0f & display[1]);
      PORTD |= (0x70 & display[1]);
      _delay_ms(1000);
      PORTC &= ~(1<<0);

      PORTB &= ~(0x0f & 0xff);      //2
      PORTD &= ~(0x70 & 0xff);
      PORTC |= (1<<1);
      PORTB |= (0x0f & display[2]);
      PORTD |= (0x70 & display[2]);
      _delay_ms(1000);
      PORTC &= ~(1<<1);

      PORTB &= ~(0x0f & 0xff);      //3
      PORTD &= ~(0x70 & 0xff);
      PORTC |= (1<<2);
      PORTB |= (0x0f & display[3]);
      PORTD |= (0x70 & display[3]);
      _delay_ms(1000);
      PORTC &= ~(1<<2);

      PORTB &= ~(0x0f & 0xff);      //4
      PORTD &= ~(0x70 & 0xff);
      PORTC |= (1<<3);
      PORTB |= (0x0f & display[4]);
      PORTD |= (0x70 & display[4]);
      _delay_ms(1000);
      PORTC &= ~(1<<3);
      
    }

return 0;
}

