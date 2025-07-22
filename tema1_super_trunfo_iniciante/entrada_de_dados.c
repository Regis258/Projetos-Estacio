#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");
    int idade;
    float altura, salario;
    char cidade[20], estado[5], nomeEmprego[21], cargo[16];
    // sintaxe scanf
    // scanf("formato1","formato2", &variavel1, &variavel2, ....);

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Qual é a sua altura\n");
    scanf("%f", &altura);

    printf("Qual cidade você mora?\n");
    scanf("%s", cidade);

    printf("Qual estado você mora?\n");
    scanf(" %s", estado);

    printf("Qual empresa que você trabalha?\n");
    scanf(" %s", nomeEmprego);

    printf("qual é o cargo que você exerce nesse empresa?\n");
    scanf(" %s", cargo);

    printf("Qual é o Salário que você recebe?\n");
    scanf("%f", &salario);

    printf("a sua idade é %d\n", idade);
    printf("a sua altura é %.2f\n", altura);
    printf("A cidade em que você mora é: %s\n", cidade);
    printf("O estado em que você mora é: %s\n", estado);
    printf("A empresa que você trabalha é: %s\n", nomeEmprego);
    printf("o cargo que você exerce na empresa %s é: %s\n", nomeEmprego, cargo);
    printf("o Salário que você recebe na empresa %s é: %.2f", nomeEmprego, salario);
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