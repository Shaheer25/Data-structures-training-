#include<stdio.h>
int factorial(int x);
int main()
{
	int a,fact;
	
	printf("Enter the value for factorial:\t");
	scanf("%d",&a);
	fact=factorial(a);
	printf("The factorial of %d is %d",a,fact);
	return 0;
}

int factorial(int x)
{
	int f;
	
	if(x==1)
	return 1;
	else
	f=x * factorial(x-1);
	
	return f;
}