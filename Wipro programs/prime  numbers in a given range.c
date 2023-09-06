#include<stdio.h>
int main()
{
	int low,high,i,j,sum=0,flag;
	printf("Enter the low range:");
	scanf("%d",&low);
	printf("Enter the high range:");
	scanf("%d",&high);
	
	for(i=low;i<=high;i++)
	{
	flag=0;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}	
	}

		if(flag==0)
		sum=sum+i;
	}
		printf("The sum of prime numbers is %d",sum);
	return 0;
}