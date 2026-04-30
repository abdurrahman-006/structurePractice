#include<stdio.h>

struct Book{
	char title[50];
	float price;
};

int main()
{
	struct Book b1, b2;

	printf("enter title: ");

	// %[^\n] after c is not necessary. don't necessary to declare "&" sign before string.
	scanf(" %[^\n]", b1. title);

	printf("enter price: ");
	scanf("%f", &b1.price);

	b2 = b1;

	printf("Book 1: %s %.2f price.\n",b1.title, b1.price);
	printf("Book 2: %s %.2f price.\n", b2.title, b2.price);

	return 0;
}