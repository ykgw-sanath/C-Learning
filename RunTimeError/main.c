#include <stdio.h>

// void printhello(int count)
// {
//     printf("Hello %d\n", count);
//     printhello(count + 1);
// }
void bufferOverflow()
{
    char buffer[10];
    char input[] = "buffer overflow by sanath";
    strcpy(buffer, input);
    printf("Buffer content: %s\n", buffer);
    printf("Next statement after buffer overflow.\n");
}
void indexOutOfBoundsError()
{
    int array[1];
    array[10] = 42;
    printf("%d\n", array[10]);
}
// void floatPointError()
// {
//     int a = 5, b = 0;
//     int result = a / b;
//     printf("%d\n", result);
// }
int main()
{

    // printhello(1);
    bufferOverflow();
    indexOutOfBoundsError();
    // floatPointError();
    return 0;
}