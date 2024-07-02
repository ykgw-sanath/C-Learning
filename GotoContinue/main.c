#include <stdio.h>

void gotoExample(int num)
{
    if (num % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("%d is even\n", num);
    return;

odd:
    printf("%d is odd\n", num);
}
void continueExample()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
            continue;

        printf("%d\n", i);
    }
}

int main()
{
    int num = 26;
    gotoExample(num);
    continueExample();
    return 0;
}
