#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portugueses_Brazil");
    float x = 10.5;
    float y = 3.0;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // divisão de ponto flutuante

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;
}