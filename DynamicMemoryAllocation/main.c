#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr1, *arr2;
    int n = 5;
    int new_size = 10;

    arr1 = (int *)malloc(n * sizeof(int)); // malloc fills with garbage values

    // Initialize array with some values
    for (int i = 0; i < n; ++i)
    {
        arr1[i] = i * 10;
    }

    // Print original array contents
    printf("Original array contents (arr1):\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Allocate memory for 5 integers using calloc
    arr2 = (int *)calloc(n, sizeof(int));

    // calloc initializes array with 0 s
    for (int i = 0; i < n; ++i)
    {
        arr2[i] = (i + 1) * 5;
    }

    // Print original array contents (arr2)
    printf("Original array contents (arr2):\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Reallocate memory for arr1 to accommodate 10 integers
    arr1 = (int *)realloc(arr1, new_size * sizeof(int));

    // Initialize additional elements after reallocation
    for (int i = n; i < new_size; ++i)
    {
        arr1[i] = i * 10;
    }

    // Print updated array contents (arr1)
    printf("Updated array contents after reallocation (arr1):\n");
    for (int i = 0; i < new_size; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Free allocated memory for arr1 and arr2
    free(arr1);
    free(arr2);

    return 0;
}
