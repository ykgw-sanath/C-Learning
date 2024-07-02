#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = 0;

    while (arr[length])
    {
        length++;
    }

    printf("Number of elements in array: %d\n", length);
    return 0;
}
