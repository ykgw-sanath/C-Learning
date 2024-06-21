#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
