#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    // Define a localização para português do Brasil
    setlocale(LC_ALL, "Portuguese");

    printf("Olá Mundo! \n");
}