#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //'a' � convertido implicitamente para float

    printf("O resultado da soma �: %.2f\n", resultado);

    return 0;
}