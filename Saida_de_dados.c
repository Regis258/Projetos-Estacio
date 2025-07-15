#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int idade = 28;
    float altura = 1.63;
    char opcao = 'S';
    char nome[20] = "Regis";

    printf("O nome do usuário é: %s\n", nome);
    printf("A idade do usuário é: %d\n", idade);
    printf("A altura do usuário é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

    return 0;

    /*
    printf ("%formato1 %fomarto2 %fomarto 3", variavel1, variavel2, variavel3);

    %d: imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere;
    %s: Imprime uma cadeia (string) de caracteres.
    */
}