#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]; char check;
	int len,i,flag=0,count=0;
	printf("Enter the string:    ");
	scanf("%s",&a);
	printf("The input string i %s",a);
	printf("\nEnter the char to be checked:   ");
	scanf("%s",&check);
	len=strlen(a);
	
	printf("\nThe length of the string is %d",len);
	for(i=0;i<len;i++)
	{
		if(a[i]==check)	
		{
		//	count++;
			flag=1;
			count++;
		}
		else
			flag=0;	
	}
	if(flag==0)
	{
		printf("Char  is not found");
		printf("The count is %d",count);
	}
	else
		printf("Char is found");
		
	return 0;
}









