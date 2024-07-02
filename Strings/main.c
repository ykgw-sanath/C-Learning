#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "sanath";
    char name1[50];
    printf("%s\n", name);
    printf("The length is %d\n", strlen(name));

    printf("Enter the name1");
    scanf("%s", name1);

    printf("%s\n", name1);

    char string1[] = "sanathM";
    char string2[20];
    strcpy(string2, string1);

    strcat(name, string1);

    printf("%s\n", string2);

    printf("%s\n", name);
}
