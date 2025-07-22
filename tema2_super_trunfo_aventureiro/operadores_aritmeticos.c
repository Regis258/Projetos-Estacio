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

    printf("Digite um número:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo número para ser somado:\n");
    scanf("%d", &numero2);

    // operação soma
    soma = numero1 + numero2;

    // operação subtração
    subtracao = numero1 - numero2;

    // operação multiplicação
    multiplicacao = numero1 * numero2;

    // operação divisão
    divisao = numero1 / numero2;

    //operação resultado que é a soma vezes subtração dividido pela divisão multiplicado pela multiplicação
    resultado = soma * subtracao / divisao * multiplicacao;

    printf("A soma dos numeros %d e %d é: %d\n", numero1, numero2, soma);
    printf("A subtração dos numeros %d e %d é : %d\n", numero1, numero2, subtracao);
    printf("A multiplicação dos numeros %d e %d é : %d\n", numero1, numero2, multiplicacao);
    printf("A divisão dos numeros %d e %d é: %d\n", numero1, numero2, divisao);

    printf("O resultado total é: %d\n", resultado);
    
    return 0;
}

/*
    soma (+)
    subtração (-)
    multiplicação (*)
    divisão (/)
*/