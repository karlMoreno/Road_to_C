#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t smallNumber = 0x12; 

	printf("0x12 is %u decimal\n", smallNumber);
	printf("0x12 is %o octal\n", smallNumber);
	printf("0x12 is %x hex\n", smallNumber);

}