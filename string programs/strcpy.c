#include<stdio.h>
#include<string.h>
 
int main ()
{
    char str1[]="Computer";
    char str2[] = "C Programming";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";
     
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
    printf ("str1: %s\n",str1);
    printf ("str2: %s\n",str2);
    
	
	//str2: %s\n str3: %s\n str4:
      //            %s\n", str1, str2, str3, str4);
    return 0;
}

