#include <stdio.h>

int main() {
   char s[] = "apple";
   char ch;     // String Given
   //char ch = 'a';             // Character to count
	printf("Enter the char to be counted:");
	scanf("%c",&ch);
	
	   int i = 0;
  int count = 0;             // Counter
      
   while(s[i] != '\0') {
      if(s[i] == ch)
        count++;

      i++;}

     printf("The character a occurs %d times\n", count);
     return 0;
   }