#include <stdio.h>

int factor (const int x)
{
    if (x == 1)
    {
        return (1);
    }
    return(x * factor(x-1));
}

int main ()
{
int result = factor(5);
printf("5! is %d\n", result);
    
return (0);
}