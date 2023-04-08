#include <stdio.h>

int main()
{
    int numbers1[5] = {11, 12, 13, 14, 15}; // some numbers
    int numbers2[5] = {21, 22, 23, 24, 25}; // variables to be overwritten

    printf("numbers2[0] %d\n", numbers2[0]);

    numbers1[6] = 99; //illegal

    // illegal -- loops past end

    for(int i = 0; i < 9; i++) {
        printf("numbers1[%d] %p\n", i, &numbers1[i]);
    }

    printf("numbers2[%d] %p\n", 0, &numbers2[0]);
    printf("numbers2[0] %d\n", numbers2[0]);

    printf("numbers1[8] is %d\n", numbers1[8]);

    printf("-----------------test----------\n");
    printf("numbers1[%d] %p\n", 8, &numbers1[8]);
    printf("numbers2[%d] %p\n", 0, &numbers2[0]);

    return (0);
}