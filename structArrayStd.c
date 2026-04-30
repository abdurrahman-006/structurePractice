#include<stdio.h>

struct Student
{
	int id;
	float gpa; 
	char grade;
};

int main()
{
	struct Student s[3];
	int i;

	for(i = 0; i < 3; i++)
	{
		printf("input id, gpa and grade: ");
		scanf("%d %f %c", &s[i].id, &s[i].gpa, &s[i].grade);
	}

	for(i = 0; i < 3; i++)
	{
		printf("Id = %d, gpa = %.2f, grade = %c\n", s[i].id, s[i].gpa, s[i].grade);
	}
	return 0;
}