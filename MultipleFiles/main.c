
#include <stdio.h>
#include "helper.h"

int main()
{
    int addition = sum(10, 20);
    printf("Sum: %d\n", addition);

    int difference = diff(20, 10);
    printf("Differnce: %d\n", difference);

    int multiplication = mul(20, 10);
    printf("Multiply: %d\n", multiplication);
    return 0;
}