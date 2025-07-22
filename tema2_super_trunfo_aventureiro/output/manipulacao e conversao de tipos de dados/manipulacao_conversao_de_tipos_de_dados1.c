#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portugueses_Brazil");
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; 

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    return 0;
}