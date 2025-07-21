#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //'a' é convertido implicitamente para float

    printf("O resultado da soma é: %.2f\n", resultado);

    return 0;
}