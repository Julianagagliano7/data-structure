#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x; // p guarda o endereço de x

    printf("x = %d\n", x);   // 5
    printf("*p = %d\n", *p); // 5

    *p = 20; // muda o valor de x

    printf("x = %d\n", x); // 20
    return 0;
}