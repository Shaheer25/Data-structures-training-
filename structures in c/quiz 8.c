#include <stdio.h>
int main()
{
    struct sample{
        int a;
        int b;
        sample *s;
    }t;
 
    printf("%d,%d",sizeof(sample),sizeof(t.s));
    return 0;
}
