#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollno;
    int marks;
};
void printStruct(struct Student s);

int main()
{
    struct Student student1;

    strcpy(student1.name, "sanath");
    student1.rollno = 1;
    student1.marks = 98;
    printStruct(student1);
    return 0;
}

void printStruct(struct Student student)
{

    printf("The student name is %s\n", student.name);
    printf("The student rollno is %d\n", student.rollno);
    printf("The student marks is %d\n", student.marks);
}