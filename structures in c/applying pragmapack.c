# include <stdio.h>
# pragma pack(1)
struct emp
{
int a ;
char ch ;
float s ;
} ;
# pragma pack( )
int main( )
{
struct emp e ;
printf ( "%u %u %u\n", &e.a, &e.ch, &e.s ) ;
return 0 ;
}