#include<stdio.h>

struct Student
{
	int id; 
	float gpa; 
	char grade;
};

int main()
{
	struct Student s;

	printf("input student id: ");
	scanf("%d", &s.id);

	printf("input gpa: ");
	scanf("%f", &s.gpa);

	printf("input grade: ");
	scanf(" %c", &s.grade); // taking a space in scanf before %c

	printf("student id is: %d\n", s.id);
	printf("gpa: %.2f\n", s.gpa);
	printf("grade: %c\n", s.grade);

	return 0;
}