#include<stdio.h>

struct Student{
    float gpa;
};

void update(struct Student *s){
    s -> gpa += 0.3;
}

int main(){
    struct Student s;

    printf("input your gpa: ");
    scanf("%f", &s.gpa);

    update(&s);

    printf("updated gpa: %.2f", s.gpa);

    return 0;
}