#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*
        OPERADORES DE INCREMENTO, DECREMENTO E RELACIONAIS
        Operadores de incremento: (++)
        pré-Incremento: (++varivavel)
        pós-Incremento: (variavel++)
        Operadores de decremento: (--)
        pré-Decremento: (--variavel)
        pós-Decremento: (variavel--)
        Operadores relacionais: (==, !=, >, <, >=, <=)
    */

    int numero1 = 1, resultado;
    printf("O valor antes da variavel do incremento é: %d\n", numero1);
    // o valor de atribuição de variavel++ é igual a variavel = variavel + 1 (x = x + 1)
    // numero1 = numero1 + 1;
    // numero1 += 1;
    resultado = numero1++; // pós-incremento
    // printf("O valor da variavel numero1 (1)  após o incremento de 1 (numero1++) é: %d\n", numero1);
    printf("Apos pós-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);
    resultado = ++numero1; // pré-incremento
    printf("Apos o pré-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    // o valor de atribuição de variavel-- é igual a variavel = variavel - 1 (x = x - 1)
    // numero1 = numero1 - 1;
    // numero1 -= 1;
    // numero1--; // pós-decremento
    // printf("O valor da variavel numero1 (1)  após o decremento de 1 (numero1--) é: %d\n", numero1);

    resultado = numero1--; // pós-decremento
    printf("\nApos pós-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1; // pré-decremento
    printf("Apos pré-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    return 0;
}