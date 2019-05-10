/***********************************************************

  4E ‘n¬HŠwÀŒ±
	
  01input.c  - SW‚©‚ç‚Ì“ü—Í -

***********************************************************/

#include <16f877a.h>


#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);  // ‘SLED‚ğÁ“”‚·‚é
  
  while(1) {
    if (input(PIN_B1) == 1) {  // RB1(SW2)‚Ìó‘Ô‚ğ’²‚×‚é
      output_c(0b11110000);
    }
    else {
      output_c(0b00001111);
    }
  }
}
