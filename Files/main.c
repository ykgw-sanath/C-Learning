#include <stdio.h>

int main()
{
    FILE *fileptr;

    fileptr = fopen("sanath.txt", "w");

    char buffer[100];

    while (fgets(buffer, 100, fileptr))
    {
        printf("%s", buffer);
    }

    return 0;
}