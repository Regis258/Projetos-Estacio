#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeroNormal = 2147483647; // Valor maximo de int
    long int numeroGrande = 2147483647;

    printf("N�mero relogar (int): %d\n", numeroNormal);
    printf("N�mero grande (long int): %ld\n", numeroGrande); // o %ld � (long int) tem que ser usado assim para chamar
    // a variavel do tipo long int

    numeroGrande = 2147483648; // Valor maior que o m�ximo de int (Acrescentei 1 valor a mais de 2147483647 para 2147483648)
    printf("O n�mero grande atualizado (long int) �: %ld\n", numeroGrande);

    return 0;
}