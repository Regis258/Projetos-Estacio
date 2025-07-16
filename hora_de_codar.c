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

    printf("Digite o n�mero da sua matricula: \n");
    scanf("%d", &matricula);

    printf("Qual � a sua altura? \n");
    scanf("%f", &altura);

    printf("Qual � a sua �ltima nota que voc� tirou? \n");
    scanf("%f", &nota);

    getchar(); // limpar o buffer antes de usar fgets, limpar o \n deixado pelo scanf anterior
    printf("Digite o seu Nome \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite o nome da escola em que voc� estuda: \n");
    fgets(escola, sizeof(escola), stdin);
    escola[strcspn(escola, "\n")] = 0;

    printf("A sua idade �: %d\n", idade);
    printf("O seu nome �: %s\n", nome);
    printf("A escola em qual voc� estuda �: %s\n", escola);
    printf("A sua matricula da escola %s �: %d \n", escola, matricula);
    printf("A sua altura �: %.2f \n", altura);
    printf("A �ltima nota que voc� tirou na escola %s, �: %.2f \n", escola, nota);

    return 0;
}