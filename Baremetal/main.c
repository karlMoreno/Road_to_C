/**
* @brief Program to demonstrate procedures and local
variables */

#include <stdio.h>

// function that is called from another function
void inner(void){
    int i = 5;
    int k = 3;

    i = i + k;
    printf("%d\n", i);
}

//Outer level function
void outer(void){
    int i = 6;
    int j = 4;
    i = j + i;
    inner();
    printf("%d\n", i);
}

int main() {
    outer();

    return (0);
}