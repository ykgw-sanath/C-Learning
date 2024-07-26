#include <stdio.h>

int main()
{
    char arr[] = {-1, 20000000, 3, 4, 5};
    // int[] arr = [ 1, 2, 3 ];
    int length = sizeof(arr) / sizeof(arr[0]);

    int i = 0;

    while (i < length)
    {
        printf("%u\n", arr[i]);
        i++;
    }

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));

    return 0;
}
