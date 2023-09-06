#include <stdio.h>
int main() {
   char s1[] = "CProgramming";       // String Given
   char s2[20],s3[20];                  // Variable to hold value

   int i = 0;

	printf("Enter the string:   ");
	scanf("%s", &s3);
	while(s1[i] != '\0') {
      s2[i] = s3[i];
      i++;
   }
   s2[i] = '\0';           // Terminate the string

   printf("Value in s1 = %s \n", s1);
   printf("Value in s2 = %s \n", s2);
   printf("Value in s3 = %s \n", s3);
	printf("length in s1 = %d \n", strlen(s1));
    printf("length in s2 = %d \n", strlen(s2));
   printf("length in s3 = %d\n", strlen(s3));
   return 0;
}
