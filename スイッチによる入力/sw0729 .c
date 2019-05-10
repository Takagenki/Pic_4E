#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  int i=0b00000000;
  output_c(0b00000000);
  while(1) {
    if(input(PIN_B2) == 0){
	delay_ms(10);
    	i++;
    	while(input(PIN_B2) == 0){
    		delay_ms(10);
    	}
    }
    else if(input(PIN_B1) == 0){ 
    	delay_ms(10);
    	i--;
    	while(input(PIN_B1) == 0){
    		delay_ms(10);
    	}
    }
    else if(input(PIN_B0) == 0){
    	delay_ms(10);
    	i = 0;
    	while(input(PIN_B0) == 0){
		delay_ms(10);	
    	}
    }
    output_c(i); 
  }
}