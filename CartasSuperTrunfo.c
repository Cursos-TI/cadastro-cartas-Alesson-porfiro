#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // ---------- CARTA 1 ----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // ---------- CARTA 2 ----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados

  printf("Seja bem-vindo ao Super Trunfo!\n\n");

  printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n------------------------------\n");

    printf("=== Cadastro da Carta 2 ===\n\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //-----------Calculo 1 carta-----------

  float densidade1 = populacao1 / area1;
  float captaPib1 = pib1 / populacao1;


  // -----------Calculo 2 carta-----------

  float densidade2 = populacao2 / area2;
  float captaPib2 = pib2 / populacao2;

    printf("\n==============================\n");

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", captaPib1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", captaPib2);
  
return 0;
} 
