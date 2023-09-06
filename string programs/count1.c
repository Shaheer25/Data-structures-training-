#include <stdio.h>

int main() {
   char s[] = "apple";     // String Given
   char ch = 'a';             // Character to count
	
   int i = 0;
  // int count = 0;             // Counter
      
   while(s[i] != '\0') {
      if(s[i] == ch)
        // count++;

      i++;}

     printf(“The character %c occurs %d times\n”, ch, i);
     return 0;
   }
