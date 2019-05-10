#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
   int i;
  output_c(0b00000000);
  while(1) {
    for (i=1;i <=255; i+=1){
    while (input(PIN_B0) == 0); 
    delay_ms(10);
    while (input(PIN_B0) == 1);{
    	output_c(i); 
    	delay_ms(10);
	}
    }
  }
}