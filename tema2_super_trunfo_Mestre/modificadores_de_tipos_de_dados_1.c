#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeroSinal = 3000000000; // este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("O numero com Sinal: %d\n", numeroSinal);
    printf("O numero sem Sinal: %u\n", numeroSemSinal);

    return 0;
}