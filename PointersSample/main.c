#include <stdio.h>

int main()
{

    int x = 10;
    int *ptr1 = &x;     // ptr1 points to x
    int **ptr2 = &ptr1; // ptr2 points to ptr1

    printf("Value of x: %d\n", **ptr2);

    **ptr2 = 20;

    printf("Updated value of x: %d\n", x); // Pointer to pointer example

    int value = 10;
    int *const ptr = &value; // Constant pointer to a integefer

    *ptr = 20;
    printf("Value through pointer: %d\n", *ptr);

    int value1 = 10;
    const int *ptr1 = &value1; // Pointer to constant value
    // pointer ptr1 which points to an integer that is const, meaning the integer it points to cannot be modified through this pointer
    value1 = 20;

    // *ptr=20 cant be done

    printf("Value through pointer: %d\n", *ptr1);

    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    void *ptr4 = &num;
    void *ptr5 = &pi;
    void *ptr6 = &letter;

    printf("Value of num: %d\n", *(int *)ptr4);
    printf("Value of pi: %.2f\n", *(float *)ptr5);
    printf("Value of letter: %c\n", *(char *)ptr6);

    return 0;
}