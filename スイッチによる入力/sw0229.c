#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);

  while(1) {
    while (input(PIN_B2) == 0);
    while (input(PIN_B2) == 1);
    output_c(0b00000001);
    delay_ms(10);
    while (input(PIN_B2) == 0);
    output_c(0b10000000);
  }
}
