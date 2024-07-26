#include <stdio.h>

int main()
{
    float a = 10;
    float *ptr;
    ptr = &a;

    printf("%f\n", *ptr);
    printf("%d\n", &a);

    printf("%d\n", sizeof(ptr));
    printf("%d\n", sizeof(a));

    // int b = 20;
    // ptr = &b;
    printf("%d\n", *ptr);
    // printf("%d\n", &b);
    return 0;
}
