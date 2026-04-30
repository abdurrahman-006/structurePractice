#include<stdio.h>

struct Student{
    int id;
    float gpa;
};

int main()
{
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    printf("Enter id and gpa: ");
    scanf("%d %f", &ptr -> id, &ptr -> gpa);

    printf("ID = %d, GPA = %.2f", ptr -> id, ptr -> gpa);

    return 0;
}