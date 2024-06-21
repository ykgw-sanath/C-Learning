#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    printf("%d\n", *ptr);
    printf("%d\n", &a);

    int b = 20;
    ptr = &b;
    printf("%d\n", *ptr);
    printf("%d\n", &b);
    return 0;
}
