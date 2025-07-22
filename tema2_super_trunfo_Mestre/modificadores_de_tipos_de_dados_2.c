#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeroNormal = 2147483647; // Valor maximo de int
    long int numeroGrande = 2147483647;

    printf("Número relogar (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande); // o %ld é (long int) tem que ser usado assim para chamar
    // a variavel do tipo long int

    numeroGrande = 2147483648; // Valor maior que o máximo de int (Acrescentei 1 valor a mais de 2147483647 para 2147483648)
    printf("O número grande atualizado (long int) é: %ld\n", numeroGrande);

    return 0;
}