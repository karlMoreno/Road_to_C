#include <stdio.h>
#include <stdlib.h>

int main() {
	short int aShortInt; // oh I can make comments like this thats cool
	int aInteger;
	long int aLongInt;
	long long int aLongLongInt;

	printf("Size of (short Int) = %ld (bytes) %ld bits\n", 
	sizeof(aShortInt), sizeof(aShortInt)* 8);

	printf("Size of a (int) = %ld (bytes) %ld bits\n",
	 sizeof(aInteger), sizeof(aInteger)*8);

	printf("Size of (long int) = %ld (bytes) %ld (bits)\n",
	sizeof(aLongInt), sizeof(aLongInt)*8);

	printf("Size of (long long int) = %ld (bytes) %ld (bits)\n",
	 sizeof(aLongLongInt), sizeof(aLongLongInt)*8);
	 
	return (0);
}
