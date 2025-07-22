#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a = 10;
    int b = 3;

    float quociente = (float) a / b; // conversão explícita de 'a' para float
    printf("Quociente: %.2f\n", quociente);

    return 0;
}