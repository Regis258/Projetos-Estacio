#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero1 = 100, divisao, resultado;

    printf("Digite um número:\n");
    scanf("%d", &divisao);

    resultado = 58;
    printf("O resultado inicial é: %d\n", resultado);

    // resultado = resultado + 85;
    resultado += numero1;
    printf("O resultado após a atribuição com a soma é: %d\n", resultado);

    // resultado = resultado -50;
    resultado -= numero1;
    printf("O resultado após a atribuição com a subtração é : %d \n", resultado);

    // resultado = resultado *15;
    resultado *= numero1;
    printf("O resultado após a atribuição com a multiplcação é: %d\n", resultado);

    // resultado = resultado / divisao;
    resultado /= divisao;
    printf("O resultado após a atribuição com a divisão é: %d\n", resultado);

    return 0;
}

/*
    Operadores de Atribuição
    atribuição simples: (=)
    atribuição com soma (+=)
    atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    atribuição com divisão (/=)

*/