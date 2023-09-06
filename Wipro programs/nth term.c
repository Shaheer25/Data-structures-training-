#include<stdio.h>
int main()
{
	int a,n,d,t;
	printf("Enter the values for a,n and d respectively:");
	scanf("%d%d%d",&a,&n,&d);
	t=a+((n-1)*d);
	printf("%d",t);
	return 0;
}