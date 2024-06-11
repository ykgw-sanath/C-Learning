#include <stdio.h>

void modifyValue(int *ptr);

int main()
{
    int number = 10;

    printf("Before modification: %d\n", number);

    modifyValue(&number);

    printf("After modification: %d\n", number);

    return 0;
}

void modifyValue(int *ptr)
{
    *ptr = 20;
}
