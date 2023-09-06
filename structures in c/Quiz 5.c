# include <stdio.h>
int main( )
{
struct
{
char bookname[ 25 ] ;
float price ;
} ;
struct book b = { "Go Embedded!", 240.00 } ;
printf ( "%s %f\n", b.bookname, b.price ) ;
return 0 ;
}