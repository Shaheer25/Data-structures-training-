#include<stdio.h>
#include<string.h>
int main()
{
	char capstring[]="WELCOME";
	char smallstring[]="goodmorning";
	
	int i=0;
	//len1, len2;
	//len1=strlen(capstring);
	//printf("The length of the string is %d",len);
	
	if(capstring[i]>=65 && capstring[i]<=90)
	{	
		for(i=0;capstring[i]!='\0';i++)
			{
				capstring[i]=capstring[i]+32;
	    	}
   }
   
   if(smallstring[i]>=97 && smallstring[i]<=122)
	{	
		for(i=0;smallstring[i]!='\0';i++)
			{
				smallstring[i]=smallstring[i]-32;
	    	}
   }
   printf("The capstring in small letters is %s",capstring);
   printf("The smallstring in capital letters is %s",smallstring);
   
   
   return 0;	
}