#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int roll_number;
	int age;
	char name[100];
	double total_marks;
}students[2];
int main()
{
//  	int n = sizeof(students)/sizeof(struct Student);
	printf("%d\n", n);
	students[0].roll_number = 1;
//	students[0].name = "hari";
       	strcpy(students[0].name,"hari");
	students[0].age = 22;
    	students[0].total_marks = 78.50;

	students[1].roll_number = 2;
//      students[1].name = "vardhan";
	strcpy(students[1].name,"vardhan");
        students[1].age = 22;
        students[1].total_marks = 88.50;

	for (int i = 0; i < 2; i++) 
	{
        	printf("\nStudent %d:\n", i + 1);
        	printf("  Name        : %s\n", students[i].name);
      		printf("  Roll Number : %d\n", students[i].roll_number);
        	printf("  Age         : %d\n", students[i].age);
       		printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
	return 0;
}
