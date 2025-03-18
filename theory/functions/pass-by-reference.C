#include <stdio.h>

void test(float *a, float *b) // Por referência eu passo o endereço da memória da variável, assim eu consigo alterar o valor da variável original. Variável vai ter o tamanho do barramento da memória do hardware. Evita cópias descenessárias.
{
    *a += *b;
}

int main()
{
    float num1 = 10;
    float num2 = 20;

    test(&num1, &num2);

    printf("num1 = %f\n", num1); // num1 foi alterado na função
    printf("num2 = %f\n", num2); // num2 não foi alterado na função
}