#include<stdio.h>
struct book
{
char name[ 25 ] ;
char author[ 25 ] ;
int callno ;
} ;
void display ( struct book ) ;
int main( )
{
struct book b1 = { "Let us C", "YPK", 101 } ;
display ( b1 ) ; //passing the entire struct object as parameter
return 0 ;
}
void display ( struct book b )
{
printf ( "%s %s %d\n", b.name, b.author, b.callno ) ;
}