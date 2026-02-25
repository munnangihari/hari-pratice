#include<stdio.h>
int main()
{
	int n,i,j,k,num=2;
	printf("enter row size:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			int count=0;
			for(k=2;k<=(num/2);k++)
			{
				if((num%k)==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				printf("%4d ",num);
			}
			else
			{
				j--;
			}
			num++;
		}
		printf("\n");
	}
}
