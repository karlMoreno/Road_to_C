#include <stdio.h>
#include <stdint.h>
int main() {
	int8_t has8bits = 0x12;		// 8 bits
	int16_t has16bits = 0x1234;
	int32_t has32bits = 0x12345678; // 32 bits
	int64_t has64bits = 0x123456789abcdef0; //64 bits

	printf("8 bits %x\n", has8bits);
	printf("16 bits %x\n", has16bits);
	printf("32 bits %x\n", has32bits);
	printf("64 bits %lx\n", has64bits);
	 
	return (0);
}