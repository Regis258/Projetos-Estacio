#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int idade, matricula;
    float altura, nota;
    char nome[50], escola[50];

    printf("Digite a sua idade. \n");
    scanf("%d", &idade);

    printf("Digite o número da sua matricula: \n");
    scanf("%d", &matricula);

    printf("Qual é a sua altura? \n");
    scanf("%f", &altura);

    printf("Qual é a sua última nota que você tirou? \n");
    scanf("%f", &nota);

    getchar(); // limpar o buffer antes de usar fgets, limpar o \n deixado pelo scanf anterior
    printf("Digite o seu Nome \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite o nome da escola em que você estuda: \n");
    fgets(escola, sizeof(escola), stdin);
    escola[strcspn(escola, "\n")] = 0;

    printf("A sua idade é: %d\n", idade);
    printf("O seu nome é: %s\n", nome);
    printf("A escola em qual você estuda é: %s\n", escola);
    printf("A sua matricula da escola %s é: %d \n", escola, matricula);
    printf("A sua altura é: %.2f \n", altura);
    printf("A última nota que você tirou na escola %s, é: %.2f \n", escola, nota);

    return 0;
}