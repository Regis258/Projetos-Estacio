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
        pr�-Incremento: (++varivavel)
        p�s-Incremento: (variavel++)
        Operadores de decremento: (--)
        pr�-Decremento: (--variavel)
        p�s-Decremento: (variavel--)
        Operadores relacionais: (==, !=, >, <, >=, <=)
    */

    int numero1 = 1, resultado;
    printf("O valor antes da variavel do incremento �: %d\n", numero1);
    // o valor de atribui��o de variavel++ � igual a variavel = variavel + 1 (x = x + 1)
    // numero1 = numero1 + 1;
    // numero1 += 1;
    resultado = numero1++; // p�s-incremento
    // printf("O valor da variavel numero1 (1)  ap�s o incremento de 1 (numero1++) �: %d\n", numero1);
    printf("Apos p�s-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);
    resultado = ++numero1; // pr�-incremento
    printf("Apos o pr�-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    // o valor de atribui��o de variavel-- � igual a variavel = variavel - 1 (x = x - 1)
    // numero1 = numero1 - 1;
    // numero1 -= 1;
    // numero1--; // p�s-decremento
    // printf("O valor da variavel numero1 (1)  ap�s o decremento de 1 (numero1--) �: %d\n", numero1);

    resultado = numero1--; // p�s-decremento
    printf("\nApos p�s-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1; // pr�-decremento
    printf("Apos pr�-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    return 0;
}