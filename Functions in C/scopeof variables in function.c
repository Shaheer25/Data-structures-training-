#include<stdio.h>

int main()
{
	int mainvalue=10;
	display(mainvalue);
	return 0;	
}

int display(int x)
	{
		int funvalue =5;
		printf("The funvalue inside function is %d",funvalue);
		printf("\nThe mainvalue inside function is %d", x);
		
	}