#include<stdio.h>
int main()
{
	int n,i,j,rem[10];
	printf("enter the number to find the binary");
	scanf("%d", &n);
	while(n>0)
	{
		rem[i]=n%2;
		n=n/2;
		i++;		
	}
	printf("The binary value is:");
	
	for(j=i-1;j>=0;j--)
	{
		printf("%d",rem[j]);
		}	
	return 0;	
}