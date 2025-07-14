#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    // Define a localização para português do Brasil
    setlocale(LC_ALL, "Portuguese");

    int idade = 28;      // variáveis de numeros inteiros por exemplo: 10, 20, 30, 40, 50 etc.
    int quantidade = 1;  // variáveis de numeros inteiros por exemplo: 10, 20, 30, 40, 50 etc.
    float altura = 1.63; // variáveis de números Reais (Com casas decimais) exemplo: 1,70. 1,85. 3,895487. etc.
    double peso = 66.5;  // Variavel de numeros reais que serve para trabalhar com mais casas decimais que a variavel float.
    char letra = 'A';
    char nome[10] = "Regis"; // Variavel que é usada pra Arrays com o numero de quantidade de caracteres qeu será utilizada.

    printf("Ola Mundo! \n");
}