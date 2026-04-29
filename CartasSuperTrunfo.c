#include <stdio.h>
#include <string.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da carta 1

    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da carta 2

    printf("Carta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calculo da densidade e do PIB per capita das cartas 
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibicao da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("Pib: Carta 1 venceu? (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", pontos1 > pontos2);

    /* Na densidade, vence a menor */
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", pibPerCapita1 > pibPerCapita2); 
    printf("Super Poder: Carta 1 venceu? (%d)\n", superPoder1 > superPoder2);

    return 0;
}
// A carta 1 venceu, como demonstra o resultado e as comparações, levando em conta que 1 é verdadeiro e 0 para falso.
// Exceção ao resultado da Densidade Populacional, pois a densidade da carta 2 é menor que o da carta 1.  