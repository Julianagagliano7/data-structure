#include <stdio.h>

void sum(float a, float b) // Passagem por valor, faz uma cópia do valor das variáveis passadas (num1 e num2), também chamada de passagem por argumento.
{
    float c = a + b;
    printf("c = %f\n", c);
}

int main()
{
    float num1 = 10;
    float num2 = 20;

    sum(num1, num2);
}