#include<stdio.h>
char caplet();
char smallet(char a);

int main()
{
	char c,d;
	c = caplet();
	printf("The character is %c", c);
	//d=smallet();
	//printf("The character is %c", d);
	return 0;
}

char caplet()
{
	char chc;
	printf("Enter the character");
	scanf("%c",&chc);
	
	if(chc>=65 && chc<=90)
	return chc;
	else
	smallet(chc);
}

char smallet(char a)
{
	char chs;
	chs=a;
	//printf("Enter the character");
	//scanf("%c",&chs);
	
	if(chs>=97 && chs<=122)
	return chs;
}