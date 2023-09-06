#include<stdio.h>
int x,y,z;
int calsum(int,int,int);

int main()
{
	int a,b,c, sum;
	printf("Enter values for a,b,c");
	scanf("%d%d%d", &a,&b,&c);
	sum = calsum(a,b,c);
	printf("The sum is %d", sum);
	return 0;
}

int calsum(int x,int y, int z)
{
	int d;
	d = x+y+z;
	return d;
}