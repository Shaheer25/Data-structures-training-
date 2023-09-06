#include<stdio.h>
int calsum();
int x,y,z;

int main()
{
	int sum;
	printf("Enter values for x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	sum = calsum();
	printf("The sum is %d", sum);
	return 0;
}

int calsum()
{
	return x+y+z;
}
	
