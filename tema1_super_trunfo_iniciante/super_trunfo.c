#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char estado1[2], estado2[2];
    char cidade1[20], cidade2[20];
    float pib1, area1, pib2, area2, pibPerCapta1, pibPerCapta2, densidade1, densidade2;
    unsigned int densidadePibPerCapta1, densidadePibPerCapta2, superPoder1, superPoder2, resultadoPopulacao1, resultadoPopulacao2, resultadoarea1, resultadoarea2, resultadoPib1, resultadoPib2;
    unsigned int resultadoPontosTuristicos1, resultadoPontosTuristicos2, resultadoDensidadePopulacional1, resultadoDensidadePopulacional2;
    unsigned int resultadoPibPerCapta1, resultadoPibPerCapta2;
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    int carta1 = 1;
    int carta2 = 2;

    // estou utilizando fgets para ler nomes compostos pois com scanf ele n�o aceita espa�os

    // entrada de dados da Carta 1
    printf("***************  CARTA 1  ***************\n");

    printf("Digite o nome da cidade em que voc� mora:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a letra do seu Estado entre 'A' e 'H'\n");
    scanf("%s", estado1);

    printf("Digite o n�mero total de popula��o que existe na sua cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite o n�mero da �rea em Km� da cidade em que voc� mora:\n");
    scanf("%f", &area1);

    printf("Digite o PIB Anual da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o n�mero de pontos turisticos que existe em sua cidade:\n");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;  // converter a variavel (populacao1) que � int pra float
    pibPerCapta1 = (float)pib1 / populacao1; // converter a variavel (populacao1) que � int pra float

    superPoder1 = (float)(populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1) / densidade1;

    // entrada de dados da carta 2

    getchar(); // limpar o buffer deixado pelo �ltimo \n
    printf("***************  CARTA 2  ***************\n");

    printf("Digite o nome da cidade pra onde voc� quer viajar:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a letra do segundo estado entre 'A' e 'H' (N�o pode ser igual ao estado anterior)");
    scanf("%s", estado2);

    printf("Digite o n�mero total de popula��o que existe nessa cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite o n�mero da �rea total em Km� dessa cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB anual dessa cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que existem nessa cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapta2 = (float)pib2 / populacao2;
    resultadoDensidadePopulacional1 = (densidade1 + pibPerCapta1) > (densidade2 + pibPerCapta2);
    resultadoDensidadePopulacional2 = (densidade2 + pibPerCapta2) > (densidade1 + pibPerCapta1);

    resultadoPopulacao1 = (populacao1) > (populacao2);
    resultadoPopulacao2 = (populacao2) > (populacao1);
    resultadoarea1 = (area1) > (area2);
    resultadoarea2 = (area2) > (area1);
    resultadoPib1 = (pib1) > (pib2);
    resultadoPib2 = (pib2) > (pib1);
    resultadoPontosTuristicos1 = (pontosTuristicos1) > (pontosTuristicos2);
    resultadoPontosTuristicos2 = (pontosTuristicos2) > (pontosTuristicos1);
    densidadePibPerCapta1 = (float)(densidade1 + pibPerCapta1) > (densidade2 + pibPerCapta2);
    densidadePibPerCapta2 = (float)(densidade2 + pibPerCapta2) > (densidade1 + pibPerCapta1);
    resultadoPibPerCapta1 = (pibPerCapta1) > (pibPerCapta2);
    resultadoPibPerCapta2 = (pibPerCapta2) > (pibPerCapta1);
    superPoder1 = ((populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + densidadePibPerCapta1) / densidade1) > ((populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2) / densidade2);
    superPoder2 = ((populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + densidadePibPerCapta2) / densidade2) > ((populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1) / densidade1);
    /*
    char estado1[2], estado2[2];
    char cidade1[20], cidade2[20];
    float pib1, area1, pib2, area2, pibPerCapta1, pibPerCapta2, densidade1, densidade2;
    unsigned int densidadePibPerCapta1, densidadePibPerCapta2, superPoder1, superPoder2, resultadoPopulacao1, resultadoPopulacao2, resultadoarea1, resultadoarea2, resultadoPib1, resultadoPib1;
    unsigned int resultadoPontosTuristicos1, resultadoPontosTuristicos;
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    int carta1 = 1;
    int carta2 = 2;
    */
    // Leitura dos dados da carta 1

    printf("\n***************  SA�DA DE DADOS DA PRIMEIRA CIDADE  ***************\n");
    printf("Carta n� %d \n", carta1);
    printf("Estado: %s \n", estado1);
    printf("C�digo: %s01 \n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f Km�\n", area1);
    printf("PIB: %.2fR$ Bilh�es de Reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);
    printf("A Densidade populacional da cidade %s �: %.2f hab/km�\n", cidade1, densidade1);
    printf("O PIB Per Capta da cidade de %s �: %.2fR$\n", cidade1, pibPerCapta1);

    // Leitura dos dados da carta 2

    printf("\n***************  SA�DA DE DADOS DA SEGUNDA CIDADE  ***************\n");
    printf("Carta n� %d\n", carta2);
    printf("Estado: %s \n", estado2);
    printf("C�digo: %s02 \n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f Km�\n", area2);
    printf("PIB: %.2fR$ Bilh�es de Reais\n", pib2);
    printf("A Densidade populacional da cidade %s �: %.2f hab/km�\n", cidade2, densidade2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
    printf("O PIB Per Capta da cidade de %s �: %.2fR$\n", cidade2, pibPerCapta2);
    printf("\n");
    printf("***************  FIM DO JOGO DAS CARTAS SUPER TRUNFO  ***************\n ");

    printf("***************  COMPARA��O DAS CARTAS SUPER TRUNFO  ***************\n");
    printf("*************** ATEN��O (1) = SIM, (0) = N�O ***************");

    printf("Popula��o: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoPopulacao1);
    printf("Popula��o: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoPopulacao2);
    printf("�rea: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoarea1);
    printf("�rea: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoarea2);
    printf("PIB: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoPib1);
    printf("PIB: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoPib2);
    printf("Pontos Turisticos: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoPontosTuristicos1);
    printf("Pontos Turisticos: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoPontosTuristicos2);
    printf("Densidade Populacional: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoDensidadePopulacional1);
    printf("Densidade Populacional: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoDensidadePopulacional2);
    printf("PIB Per Capta: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, resultadoPibPerCapta1);
    printf("PIB Per Capta: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, resultadoPibPerCapta2);
    printf("Super Poder: Carta N� %d (%s) Venceu? (%d)\n", carta1, cidade1, superPoder1);
    printf("Super Poder: Carta N� %d (%s) Venceu? (%d)\n", carta2, cidade2, superPoder2);
    return 0;
}