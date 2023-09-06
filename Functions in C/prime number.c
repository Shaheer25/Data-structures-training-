#include<stdio.h>
int main()
{
	int n,i, flag=0;
	
	printf("enter the integer to find prime or not");
	scanf("%d",&n);
	
	if(n==0||n==1)
	flag = 1;
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		flag =1;
		break;
	}
	if(flag==1)
		printf("The number is not prime");
	else
		printf("The number is prime");
		
	return 0;
}
		
	
	
	
	

