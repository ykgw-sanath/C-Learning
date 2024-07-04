#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[50];
    struct Date dob;
    int rollno;
    int marks;
};

int main()
{
    struct Student student1;
    strcpy(student1.name, "sanathm");
    student1.dob.day = 27;
    student1.dob.month = 6;
    student1.dob.year = 1998;

    student1.rollno = 1;
    student1.marks = 99;

    printf("The student name is %s\n", student1.name);
    printf("The student rollno is %d\n", student1.rollno);
    printf("The student marks is %d\n", student1.marks);

    printf("The student name is %d\n", student1.dob.day);
    printf("The student name is %d\n", student1.dob.month);
    printf("The student name is %d\n", student1.dob.year);
    return 0;
}