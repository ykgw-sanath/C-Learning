#include <stdio.h>

int sum(int *array, int size);

int main()
{
    int array[] = {1, 2, 3, 4};
    int arraySize = sizeof(array) / sizeof(array[0]);

    int result = sum(array, arraySize);

    printf("%d\n", result);
    return 0;
}

int sum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
