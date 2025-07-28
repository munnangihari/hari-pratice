#include <stdio.h>

int main() {
	 int num1, num2;
	 int sum, diff, prod, mod;
	 float quotient;
	 printf("Enter first number: ");
         scanf("%d", &num1);
	 printf("Enter second number: ");
	 scanf("%d", &num2);
	 sum = num1 + num2;
         diff = num1 - num2;
	 prod = num1 * num2;
	 if (num2 != 0) {
	 quotient = (float)num1 / num2; 
	 mod = num1 % num2;
	 }
	 else {
		 printf("\n division and modulus not possibe (divisor is zero.\n)");
	 }
	 printf("\nResults:\n");
	 printf("sum = %d\n", sum);
	 printf("diff = %d\n", diff);
	 printf("prod = %d\n", prod);
	 printf("quotient = %.2f\n", quotient);
	 printf("mod = %d\n", mod);
                   
	return 0; 
}

