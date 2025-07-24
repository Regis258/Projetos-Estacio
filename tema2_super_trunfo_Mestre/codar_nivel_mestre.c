#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    char palito[30] = "Palito";
    char bala[30] = "Bala";

    unsigned int estoquePalito = 1000;
    unsigned int estoqueBala = 2000;

    float valorPalito = 10.50;
    float valorBala = 20.40;

    unsigned int estoqueMinimoPalito = 500;
    unsigned int estoqueMinimoBala = 2500;

    double valorTotalPalito;
    double valorTotalBala;

    int resultadoPalito, resultadoBala;

    // Exibir as informa��es dos produtos
    printf("Produto %s tem estoque de %u unidades e o valor unit�rio �: %.2fR$ \n", palito, estoquePalito, valorPalito);
    printf("Produto %s tem estoque de %u unidades e o valor unit�rio �: %.2fR$ \n", bala, estoqueBala, valorBala);

    // Compara��es com o valor m�nimo de estoque

    resultadoPalito = estoquePalito > estoqueMinimoPalito;
    resultadoBala = estoqueBala > estoqueMinimoBala;

    printf("O Produto %s tem estoque minimo? %d \n", palito, resultadoPalito);
    printf("O Produto %s tem estoque minimo? %d \n", bala, resultadoBala);

    // Compara��es entre os valores totals dos produtos

    /*
    valorTotalPalito = estoquePalito * valorPalito;
    valorTotalBala = estoqueBala * valorBala;
    */

    printf("O valor total do produto (%s = %.2fR$) � maior que o valor do produto (%s = %.2fR$)? = %d \n", palito, estoquePalito * valorPalito, bala, estoqueBala * valorBala,
           (estoquePalito * valorPalito) > (estoqueBala * valorBala));

    printf("\n***************** O resultado = ( 1 ) � verdadeiro e o resultado = ( 0 ) � falso *****************\n ");

    return 0;
}