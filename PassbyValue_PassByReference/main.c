#include <stdio.h>

int sumPassByValue(int A, int B);
int UpdateValue(int X);
int sumReference(int *a, int *b);
int updateReference(int *x);
int main()
{
    int a = 2;
    int b = 3;
    int x = 10;
    int sum = sumPassByValue(a, b);
    int updatedValue = UpdateValue(x);
    int sumReferenceValue = sumReference(&a, &b);
    int updateReferenceValue = updateReference(&x);
    printf("%d\n", sum);
    printf("%d\n", updatedValue);
    printf("%d\n", sumReferenceValue);
    printf("%d\n", updateReferenceValue);
}
int sumPassByValue(int A, int B)
{
    return A + B;
}
int UpdateValue(int X)
{
    return X = 100;
}
int sumReference(int *A, int *B)
{
    return *A + *B;
}
int updateReference(int *X)
{
    return *X = 100;
}
