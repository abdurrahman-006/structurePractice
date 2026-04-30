#include<stdio.h>

struct Rectangle
{
	float length;
	float width;

};

int main()
{
	float area;
	struct Rectangle a;

	printf("input length: ");
	scanf("%f", &a.length);

	printf("input width: ");
	scanf("%f", &a.width);

	area = a.length * a.width;

	printf("Area is %.2f\n", area);

	return 0;
}