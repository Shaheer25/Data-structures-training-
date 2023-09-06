#include<stdio.h>
int ap(int r,float *x,float *y);
int main()
{
	int r;
	float a;
	float p;
	
	printf("Enter radius of the circle\t");
	scanf("%f",&r);
	ap(r,&a,&p);
	
	printf("The area is %0.2f",a);
	printf("The perimeter is %0.2f",p);
}

int ap(int r,float *x,float *y)
{
	*x = 3.14*r*r;
	*y= 2*3.14*r;
}
	