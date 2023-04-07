#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,-1}; // array
    int* arrayPtr = array; // pointer to array

    //print array using array
    for (int index = 0; array[index] >= 0; index++) {
        printf("Address %p Value %d\n", &array[index], array[index]);
    }
    
    printf("---------------------\n");

    //Print array using pointer
    for (int index = 0; *(arrayPtr + index) >= 0; index++) {
        printf("Address %p Value %d\n", arrayPtr + index, *(arrayPtr + index));
    }

    printf("---------------------\n");

    //Print array using incrementing pointer
    for (int* current = array; *current >= 0; current++) {
        printf("Address %p Value %d\n", current, *current);
    }


    return (0);
}