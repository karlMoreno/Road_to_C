#include <stdio.h>

int main() {
    char a = 'a';
    char b = 'b';
    printf("Here is the value of a: %c\n", a);

    char *const constant_ptr = &a;
    printf("Here is the constant pointer of a: %p\n", constant_ptr);

    char const *pointer_to_constant = &a;
    printf("Here is the pointer to the constant of a: %p\n", pointer_to_constant);

    printf("\nIn a constant pointer you can change the value of the constant pointer variable\n");
    printf("which points to the original variable but not its pointer\n");
    
    *constant_ptr = 'z';
    printf("\nNow the value of a: %c\n", a);

    printf("-------------------------------\n");
    printf("Now lets handle pointers to constants\n");
    printf("\nHere is our pointer to the character a again: %p\n", pointer_to_constant);
    printf("Here is its value: %c\n", *pointer_to_constant);

    pointer_to_constant = &b;
    //*pointer_to_constant = 'c';           //this is illegal
    printf("\nNow we will change its pointer or memory address to that of the variable b: %p\n", pointer_to_constant);
    printf("Here is its changed value now when we call *pointer_to_constant: %c\n", *pointer_to_constant);

    printf("\nWe can change the pointer but we cannot outright change its value directly\n");
    printf("Trying to do *pointer_to_constant = 'x' will give you an error\n");
    printf("But like we did before we can change the value by changing it to the address of a different variable that has a different value");

    return (0);
}