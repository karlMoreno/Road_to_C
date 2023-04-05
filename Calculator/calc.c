#include <stdio.h>
#include <stdint.h>

int main() {
	char input[100];
	int num1, num2, result;
	char operator;

	printf("Enter an expression (e.g 1 + 2 ): \n");
	fgets(input,100,stdin);

	sscanf(input, "%d %c %d", &num1, &operator, &num2);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if(num2 != 0){
			result = num1 / num2;
		} else printf("Error you are dividing by 0 dipshit");
		break;
	case '%':
		result = num1 % num2;
		break;
	
	default:
		break;

	}

	printf("The result is %d\n", result);





}


// Now the result is 0. Why? 
// Because our calculation returned 
// 0b1111 1111 + 0b000 0001 = 0b1 *0000 0000*. 
// Only the starred portion was stored due to the limited 
// space in which to store the variable.