#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero1 = 100, divisao, resultado;

    printf("Digite um n�mero:\n");
    scanf("%d", &divisao);

    resultado = 58;
    printf("O resultado inicial �: %d\n", resultado);

    // resultado = resultado + 85;
    resultado += numero1;
    printf("O resultado ap�s a atribui��o com a soma �: %d\n", resultado);

    // resultado = resultado -50;
    resultado -= numero1;
    printf("O resultado ap�s a atribui��o com a subtra��o � : %d \n", resultado);

    // resultado = resultado *15;
    resultado *= numero1;
    printf("O resultado ap�s a atribui��o com a multiplca��o �: %d\n", resultado);

    // resultado = resultado / divisao;
    resultado /= divisao;
    printf("O resultado ap�s a atribui��o com a divis�o �: %d\n", resultado);

    return 0;
}

/*
    Operadores de Atribui��o
    atribui��o simples: (=)
    atribui��o com soma (+=)
    atribui��o com subtra��o (-=)
    Atribui��o com multiplica��o (*=)
    atribui��o com divis�o (/=)

*/