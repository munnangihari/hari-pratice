#include <stdio.h>

int add(int a, int b)
{
	while (b != 0)
	{
		//addition 
		 	 int carry = a & b;   
			  a = a ^ b;           
			  b = carry << 1; 
	}
	return a;	
}

int sub(int a, int b)
{
        while (b != 0)
        {
                //subtraction
                         int carry = a & b;
                          a = a ^ b;
                          b = carry >> 1;
        }
        return a;
}


int mul(int a, int b)
{
        while (b != 0)
        {

		//mutlipication
		int carry = a & b;
		a = a << 1;
		b = carry;

	}
	return a;
}


int div(int a, int b)
{
        while (b != 0)
        {

                //division
                int carry = a & b;
                a = a >> 1;
                b = carry;

        }
        return a;
}


int main()
{
	int x = 5, y = 2;
	printf("Sum = %d\n", add(x, y));
        printf("Mul = %d\n", mul(x, y));
        printf("Div = %d\n", div(x, y));
        printf("sub = %d\n", sub(x, y));
	
	return 0;
}

