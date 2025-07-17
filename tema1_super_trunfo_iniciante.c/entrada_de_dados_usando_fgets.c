#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");
    int idade;
    float altura, salario;
    char cidade[20], estado[5], empresa[21], cargo[16];
    // sintaxe scanf
    // scanf("formato1","formato2", &variavel1, &variavel2, ....);

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Qual é a sua altura\n");
    scanf("%f", &altura);

    // limpar o buffer antes de usar fgets
    getchar();
    printf("Qual cidade você mora?\n");
    fgets(cidade, sizeof(cidade), stdin); // usando fgets para usar nomes compostos
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Qual estado você mora?\n");
    fgets(estado, sizeof(estado), stdin); // usando fgets para usar nomes compostos
    estado[strcspn(estado, "\n")] = 0;

    printf("Qual empresa que você trabalha?\n"); // usando fgets para usar nomes compostos
    fgets(empresa, sizeof(empresa), stdin);
    empresa[strcspn(empresa, "\n")] = 0;

    printf("qual é o cargo que você exerce nesse empresa?\n"); // usando fgets para usar nomes compostos
    fgets(cargo, sizeof(cargo), stdin);
    cargo[strcspn(cargo, "\n")] = 0;

    printf("Qual é o Salário que você recebe?\n");
    getchar();
    sscanf("%f", &salario);

    printf("a sua idade é %d\n", idade);
    printf("a sua altura é %.2f\n", altura);
    printf("A cidade em que você mora é: %s\n", cidade);
    printf("O estado em que você mora é: %s\n", estado);
    printf("A empresa que você trabalha é: %s\n", empresa);
    printf("o cargo que você exerce na empresa %s é: %s\n", empresa, cargo);
    printf("o Salário que você recebe na empresa %s é: %.2f", empresa, salario);
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