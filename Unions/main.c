#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    data.i = 10;
    printf("value of data.i : %d\n", data.i);

    data.f = 3.14;
    printf("value of data.f : %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("data.str : %s\n", data.str);

    printf("value of data.i : %d\n", data.i);

    return 0;
}
