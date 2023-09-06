#include<stdio.h>
void swap();

int main()
{
	int a,b;
	printf("Enter the values for a and b:\t");
	scanf("%d%d", &a,&b);
	swap(a,b);
	return 0;
}

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("The swapped values are %d,%d ", x,y);
	
}