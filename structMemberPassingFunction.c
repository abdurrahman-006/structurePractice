#include<stdio.h>

struct Rectangle{
    float length;
    float width;
};

int area(float length, float width){
    int area = length * width;
    return area;
}

int main(){
    struct Rectangle a;
    float result;

    printf("input length: ");
    scanf("%f", &a.length);

    printf("input width: ");
    scanf("%f", &a.width);

    result = area(a.length, a.width);

    printf("result is: %.2f", result);

    return 0;
}