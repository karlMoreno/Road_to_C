#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t smallNumber;
	uint8_t result;

	smallNumber = 255;
	result = smallNumber + 1;

	printf("255+1 is %d\n", result);

	return (0);
}


// Now the result is 0. Why? 
// Because our calculation returned 
// 0b1111 1111 + 0b000 0001 = 0b1 *0000 0000*. 
// Only the starred portion was stored due to the limited 
// space in which to store the variable.