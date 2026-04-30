#include<stdio.h>

struct Point{
    int x;
    int y;
};

struct Point creatPoint(int a, int b){
    struct Point p;
    p.x = a;
    p.y = b;

    return p;
}

int main(){
    struct Point p;
    int  x, y;

    printf("input two numbers: ");
    scanf("%d %d", &x, &y);

    p = creatPoint(x, y);

    printf("Point: (%d, %d)", p.x, p.y);

    return 0;
}