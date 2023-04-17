#include <stdio.h>

// function called from another function
void inner(void)
{
    int i = 5;
    int k = 3;

    i = i + k;
    printf("%d", i);
}

// outer level function
void outer(void)
{
    int i = 6;
    int j = 2;
    int i = i + j;
    printf("%d", i);
    inner();
}

int main()
{
    outer();

    return (0);
}
