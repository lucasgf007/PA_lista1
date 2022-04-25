#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    
    printf("p==&i = %d\n", p == &i); // resp = 1 (operação verdadeira)
    printf("*p - *q = %d\n", *p - *q); // resp = -2
    printf("**&p = %d\n", **&p); // resp = 3
    printf("**&p = %d\n", **&p); // resp = 3
    printf("3 - *p/(*q) + 7 = %d\n", 3 - *p/(*q) + 7); // resp = 10
    
    return 0;
}