#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float nota1, nota2, nota3;
    float media;

    printf("****************** PROGRAMA DE C�LCULO DE M�DIA ******************\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3; /*o (float) converte todas as variaveis posteriores para variavel flutuante;
    pra poder exibir as notas com casas decimais
*/

    printf("A m�dia da 1� nota (%.1f), 2� nota (%.1f), 3� nota (%.1f) �: %.1f", nota1, nota2, nota3, media);

    return 0;
}