#include <stdio.h>

int main() {
   char s[] = "TajMahal"; char s1[50];    // String Given
   int i = 0;
   int vowels = 0;            // Vowels counter
   int consonants = 0;   
   //printf("Enter the word to classify");
   //scanf("%s",&s1);
        // Consonants counter(s[i++] != '\0') {
   	
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
         consonants++;
   }

   printf("The word contains %d vowels and %d consonants.",vowels, consonants);

   return 0;
}
