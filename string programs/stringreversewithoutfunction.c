#include <stdio.h>

int main() {
   char s1[] = "Programming";    // String Given
   char s2[11];                // Variable to store reverse string
   int i = 0;
   int j = 0;
   while(s1[i] != '\0') {
      i++;
   }

   printf("\nPrinting in reverse - ");
   for(j = --i; j>=0; j--)
      printf("%c", s1[j]);
   j = 0;
   printf("\nStoring in reverse  - ");

   while(i >= 0) {
      s2[i] = s1[j];
      i--;
      j++;
   }

   s1[j] = '\0';           // Terminates the string

   printf("\n%s", s2);

   return 0;
}
