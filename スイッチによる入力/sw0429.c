#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);

  while(1) {
    while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00000001);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00000010);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00000100);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00001000);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00010000);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00100000);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b01000000);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b10000000);
    delay_ms(10);
  	while (input(PIN_B2) == 0); // SW4�𗣂��܂ő҂�
    delay_ms(10);
    while (input(PIN_B2) == 1); // SW4�������܂ő҂�
    output_c(0b00000000);
    delay_ms(10);
  }
}