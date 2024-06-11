#include <stdio.h>

int sumArray(int array[], int size);
int main()
{
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = sumArray(array, size);
    printf("%d", sum);
    return 0;
}

int sumArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}