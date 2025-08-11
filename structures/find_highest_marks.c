#include<stdio.h>

struct student
{
	int rollno;
	char name[50];
	float marks;
}s[3];
int main()
{
	int i,topindex = 0;
	for(i = 0; i < 3; i++)
	{
	scanf("%d %s %f",&s[i].rollno, s[i].name,&s[i].marks);
	if(s[i].marks > s[topindex].marks)
	{
		topindex = i;
	}
	}
		printf("\n");
		printf("%d %s %f",s[topindex].rollno, s[topindex].name,s[topindex].marks);
	      return 0;
}
