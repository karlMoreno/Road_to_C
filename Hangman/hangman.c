#include <stdio.h>

int main() {
    char a = 'a';
    printf("Here is the value of a: %c\n", a);

    char *const constant_ptr = &a;
    printf("Here is the constant pointer of a: %p\n", constant_ptr);

    char const *pointer_to_constant = &a;
    printf("Here is the pointer to the constant of a: %p\n", pointer_to_constant);

    printf("\nIn a constant pointer you can change the value of the constant pointer variable\n");
    printf("which points to the original variable but not its pointer\n");
    
    *constant_ptr = 'z';
    printf("\nNow the value of a: %c\n", a);

    return (0);
}