#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

   unsigned long int numeroGrandePositivo = 4000000000;
   unsigned int numeroPositivo = 4000000000;
   long int numeroGrande = 4000000000;
   int numero = 4000000000;

   printf("N�mero positivo grande: %lu\n", numeroGrandePositivo);
   printf("N�mero positivo: %u\n", numeroPositivo);
   printf("N�mero grande: %ld\n", numeroGrande);
   printf("N�mero: %d\n", numero);

    return 0;
}