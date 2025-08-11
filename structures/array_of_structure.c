#include<stdio.h>

struct student
{
	int rollno;
	char name[50];
	float marks;
}s[3];
int main()
{
	int i;
	for(i = 0; i < 3; i++)
	{
		scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
	}
	printf("\n student details:\n");
	for (i = 0;  i < 3; i++)
	{
		printf("%d %s %.2f\n",s[i].rollno, s[i].name, s[i].marks);
	}
	return 0;
}
