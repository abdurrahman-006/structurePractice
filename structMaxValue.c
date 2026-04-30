#include<stdio.h>

struct Student{
    int id;
    float gpa; 
};

int main(){
    int i, num;
    float max;

    printf("Input students number: ");
    scanf("%d", &num);

    struct Student s[num];

    for(i = 0; i < num; i++){
        printf("input id and gpa: ");
        scanf("%d %f", &s[i].id , &s[i].gpa);
    }
    max = s[0].gpa;

    for(i = 0; i < num; i++){
        if(max < s[i].gpa){
            max = s[i].gpa;
        }
    }
    printf("maximum gpa: %.2f\n", max);
    return 0;
}