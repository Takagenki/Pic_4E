/***********************************************************

  4E �n���H�w����
	
  01buzz.c  - SW4�������ƃu�U�[���� -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);   // PORTC���N���A
  output_bit(PIN_B4,0);   // �u�U�[���~�߂�B

  while(1) {
    if (input(PIN_B2) == 1) {  // RB2(SW4)�̏�Ԃ𒲂ׂ�
      output_bit(PIN_B4,0);    // �������ꍇ�u�U�[���~�߂�
    }
    else {
      output_bit(PIN_B4,1);    // �������ꍇ�u�U�[��炷
    }
  }
}
