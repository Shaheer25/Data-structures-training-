# include <stdio.h>
# include <string.h>
int main( )
{
struct employee
{
char name[ 25 ] ;
int age ;
float salary ;
} ;
struct employee e ;
strcpy ( e.name, "Shailesh" ) ;
e.age = 25 ;
e.salary = 15500.00 ;
printf ( "%s %d %f\n", e.name, e.age, e.salary ) ;
return 0 ;
}