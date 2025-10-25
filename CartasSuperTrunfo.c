#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // ---------- CARTA 1 ----------
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // ---------- CARTA 2 ----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //-----------Calculo 1 carta-----------

  float densidade1 = populacao1 / area1;
  float captaPib1 = pib1 / populacao1;
  float inversoDensidade1 = 1.0f / densidade1;

  // -----------Calculo 2 carta-----------

  float densidade2 = populacao2 / area2;
  float captaPib2 = pib2 / populacao2;
  float inversoDensidade2 = 1.0f / densidade2;

  // -----------Super Poder-----------
  float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + captaPib1 + inversoDensidade1;
  float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + captaPib2 + inversoDensidade2;
  
  

    printf("\n==============================\n");

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", captaPib1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", captaPib2);

  // -----------Comparações-----------

  printf("Comparacao de Cartas:\n");

  int venceu;

  // População
  if (populacao1 > populacao2)
  {
    venceu = 1;

    printf("Populacao: Carta 1 venceu (1)\n");
  }
  else
  {
    venceu = 0;
    printf("Populacao: Carta 2 venceu (0)\n");
  }

  // Area
  if (area1 > area2)
  {
    printf("Area: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("Area: Carta 2 venceu (0)\n");
  }

  // PIB
  if (pib1 > pib2)
  {
    printf("PIB: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("PIB: Carta 2 venceu (0)\n");
  }

  // Pontos Turisticos
  if (pontosTuristicos1 > pontosTuristicos2)
  {
    printf("Pontos Turisticos: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("Pontos Turisticos: Carta 2 venceu (0)\n");
  }

  // Densidade (menor vence!)
  if (densidade1 < densidade2)
  {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
  }

  // PIB per Capita
  if (captaPib1 > captaPib2)
  {
    printf("PIB per Capita: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("PIB per Capita: Carta 2 venceu (0)\n");
  }

  // Super Poder
  if (superPoder1 > superPoder2)
  {
    printf("Super Poder: Carta 1 venceu (1)\n");
  }
  else
  {
    printf("Super Poder: Carta 2 venceu (0)\n");
  }

  
return 0;
} 
