#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao, resultado;
    float total;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero para ser somado:\n");
    scanf("%d", &numero2);

    // opera��o soma
    soma = numero1 + numero2;

    // opera��o subtra��o
    subtracao = numero1 - numero2;

    // opera��o multiplica��o
    multiplicacao = numero1 * numero2;

    // opera��o divis�o
    divisao = numero1 / numero2;

    //opera��o resultado que � a soma vezes subtra��o dividido pela divis�o multiplicado pela multiplica��o
    resultado = soma * subtracao / divisao * multiplicacao;

    printf("A soma dos numeros %d e %d �: %d\n", numero1, numero2, soma);
    printf("A subtra��o dos numeros %d e %d � : %d\n", numero1, numero2, subtracao);
    printf("A multiplica��o dos numeros %d e %d � : %d\n", numero1, numero2, multiplicacao);
    printf("A divis�o dos numeros %d e %d �: %d\n", numero1, numero2, divisao);

    printf("O resultado total �: %d\n", resultado);
    
    return 0;
}

/*
    soma (+)
    subtra��o (-)
    multiplica��o (*)
    divis�o (/)
*/