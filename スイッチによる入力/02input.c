/***********************************************************

  4E �n���H�w����
	
  02input.c  - ����������G�b�W���o -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);  // �SLED����������

  while(1) {
    while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    //delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b11111111);
    delay_ms(10);

    while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    //delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00000000);
    //delay_ms(10);
  }
}
