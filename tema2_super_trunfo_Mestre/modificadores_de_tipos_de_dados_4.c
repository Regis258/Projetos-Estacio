#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    short int numeroPequeno = 32767; // Valor maximo de short int
    printf("Número pequeno (Short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o máximo de short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variaveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu B - Double: (%lu) B - long double: (%lu) B\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}