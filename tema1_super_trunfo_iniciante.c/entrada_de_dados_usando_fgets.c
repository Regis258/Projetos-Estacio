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

    printf("Qual � a sua altura\n");
    scanf("%f", &altura);

    // limpar o buffer antes de usar fgets
    getchar();
    printf("Qual cidade voc� mora?\n");
    fgets(cidade, sizeof(cidade), stdin); // usando fgets para usar nomes compostos
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Qual estado voc� mora?\n");
    fgets(estado, sizeof(estado), stdin); // usando fgets para usar nomes compostos
    estado[strcspn(estado, "\n")] = 0;

    printf("Qual empresa que voc� trabalha?\n"); // usando fgets para usar nomes compostos
    fgets(empresa, sizeof(empresa), stdin);
    empresa[strcspn(empresa, "\n")] = 0;

    printf("qual � o cargo que voc� exerce nesse empresa?\n"); // usando fgets para usar nomes compostos
    fgets(cargo, sizeof(cargo), stdin);
    cargo[strcspn(cargo, "\n")] = 0;

    printf("Qual � o Sal�rio que voc� recebe?\n");
    getchar();
    sscanf("%f", &salario);

    printf("a sua idade � %d\n", idade);
    printf("a sua altura � %.2f\n", altura);
    printf("A cidade em que voc� mora �: %s\n", cidade);
    printf("O estado em que voc� mora �: %s\n", estado);
    printf("A empresa que voc� trabalha �: %s\n", empresa);
    printf("o cargo que voc� exerce na empresa %s �: %s\n", empresa, cargo);
    printf("o Sal�rio que voc� recebe na empresa %s �: %.2f", empresa, salario);
    return 0;

    /*
   printf ("%formato1 %fomarto2 %fomarto 3", variavel1, variavel2, variavel3);

   %d: imprime um inteiro no formato decimal.
   %i: Equivalente a %d.
   %f: Imprime um n�mero de ponto flutuante no formato padr�o.
   %e: Imprime um n�mero de ponto flutuante na nota��o cient�fica.
   %c: Imprime um �nico caractere;
   %s: Imprime uma cadeia (string) de caracteres.
   */
}