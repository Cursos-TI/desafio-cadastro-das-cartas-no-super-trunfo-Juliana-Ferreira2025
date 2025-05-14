#include <stdio.h>

int main() {

    char estado, estado1;
    char codigoletra[4], codigoletra1[4];
    char nomeCidade[20], nomeCidade1[20];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int pontosTuristicos, pontosTuristicos1;
    float densidadepopulacional, densidadepopulacional1;
    float pibpercapita, pibpercapita1;

    printf("Olá, bem-vindos ao jogo Super Trunfo!\n");

    // Entrada de dados da Carta 1
    printf("Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Código da Carta - Número (2 dígitos): ");
    scanf(" %2s", &codigoletra); 

    printf("Nome da Cidade: ");
    scanf(" %19s", &nomeCidade);  

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área (km²): ");
    scanf(" %f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos);

    // Entrada de dados da Carta 2
    printf("Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta - Número (2 dígitos): ");
    scanf(" %2s", &codigoletra1);

    printf("Nome da Cidade: ");
    scanf(" %19s", &nomeCidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidadepopulacional = populacao / area;
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita = (pib * 1000000000) / populacao;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    // Impressão dos dados da Carta 1
    printf("--- Carta 01 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigoletra);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    // Impressão dos dados da Carta 2
    printf("--- Carta 02 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoletra1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    return 0;
}
