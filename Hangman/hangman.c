#include <stdio.h>

int main() {
    const int numOfInts = 5;
    int nums[numOfInts];
    int sum;
    int current;

    sum = 0;

    nums[0] = 12;
    nums[1] = 48;
    nums[2] = -42;
    nums[3] = 20;
    nums[4] = 40;

    for(current = 0; current < numOfInts; current++) {
        sum += nums[current];
    }

    printf("The sum of numbers is %d\n", sum);

    return (0);






}

