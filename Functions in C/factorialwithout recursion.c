#include<stdio.h>
int factorial(x);
int main()
{
	int x,fact;
	printf("Enter the value for factorial:\t");
	scanf("%d",&x);
	
	fact = factorial(x);
	printf("Factorial value is %d",fact);	
}

int factorial(x)
{
	int f=1, i;
	for(i=x;i>=1;i--)
	f=f*i;
	return(f);
	}