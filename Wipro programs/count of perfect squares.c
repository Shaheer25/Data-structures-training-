#include<stdio.h>
int main()
{
	int low, high,count,i,j;
	printf("Enter the value of the low and high ranges");
	scanf("%d %d",&low,&high);
	count =0;
	for(i=low;i<=high;i++)
	{
		for(j=1;j*j<=i;j++)
		{
			if(j*j==i)
			count++;
		}
	}
	printf("The number of perfect squares is %d",count);
}