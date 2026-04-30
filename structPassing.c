#include<stdio.h>

struct Student{
    int id;
    int marks;
};

void info(struct Student s){
    printf("Id = %d, Marks = %d\n", s.id, s.marks);
}

int main(){
    struct Student s;

    printf("input id and marks: ");
    scanf("%d %d", &s.id, &s.marks);

    info(s);

    return 0;
}