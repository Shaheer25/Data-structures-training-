#include<stdio.h>
#include<string.h>

int main()
{
	char a[]="WELCOME";
	char b[]="welcome";
	char c[]=" ";
	char d[]=" ";
	char s1[10],s2[10];
	char s3[] = "Good";
	char s4[]= "morning";
	signed int x,y,z;
	
	strcpy(s1,a);
	strcpy(s2,"Great");
	printf("%s   %s",s1,s2);
	
	
	x=strcmp(a,s1);
	if(x==0)
	printf("\nThe strings a and s1 are equal");
	else
	printf("The strings a and s1 are not equal");
	
	y=strcmp(a,s2);
	if(y==0)
	printf("\nSTRCMP: The strings a and s2 are equal");
	
	else
	{
	printf("\nSTRCMP: The strings a and s2 are not equal");
	printf("\nSTRCMP: The diff is %d",y);
	}
	
	z=strncmp(b,d,4);
	if(x==0)
	printf("\nSTRNCMP:The characters are equal");
	else
	printf("\nSTRNCMP:The value returned by strncmp function is %d",y);
	
	strcat(s3,s4);
	printf("\nSTRING CONCATENATION: The concatenated string is %s", s3);
	
	z=strlen(a);
	printf("\nString length of z is %d",z);
	
	//strrev(a);
	printf("\nThe reverse of a is %s",strrev(a));
	printf("\nThe reverse of b is %s", strrev(b));
	
	//printf("The lowercase of WELCOME is %s",tolower(a));
	//printf("The uppercase of welcome is %s",toupper(b));
	
	return 0;
	}