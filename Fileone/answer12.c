#include <stdio.h>
/* clear bit number*/
typedef unsigned short uint16;

uint16 clear_bit(uint16 num, uint16 bit_number);
int main() {
	uint16 num,bit, new_num;
	scanf("%hi",&num);
	scanf("%hi",&bit);
	uint16 clear_single_bit = clear_bit(num, bit);
	printf("value after clear 0x%x\n",clear_single_bit);
}
uint16 clear_bit(uint16 num, uint16 bit_number){
	uint16 x = num & (~ (1<<bit_number));
	return x;
}
