#include <stdio.h>
int main() 
{
	float weight, height, BMI;
	printf("Enter weight in kilograms: ");
	scanf("%f", &weight);
	printf("Enter height in meters: ");
	scanf("%f", &height);
	BMI = weight / (height * height);      
	printf("Your BMI is: %.2f\n", BMI);
	return 0;
}
