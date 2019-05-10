#include <16f877a.h>


#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);
  
  while(1) {
    if (input(PIN_B1) == 1) {
      output_c(0b11000011);
    }
    else {
      output_c(0b00111100);
    }
  }
}