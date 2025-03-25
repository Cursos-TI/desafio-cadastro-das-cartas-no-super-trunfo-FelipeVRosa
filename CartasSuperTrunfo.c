#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int no nível mestre
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;  // Alterado para unsigned long int no nível mestre
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada de dados para a Carta 1 (Nível Novato)
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1);  // Lê string com espaços
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a Carta 2 (Nível Novato)
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2);  // Lê string com espaços
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos do Nível Aventureiro
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em bilhões convertido para reais por habitante
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em bilhões convertido para reais por habitante

    // Cálculo do Super Poder (Nível Mestre)
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição dos dados da Carta 1 (Nível Novato + Aventureiro)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2 (Nível Novato + Aventureiro)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação de Cartas (Nível Mestre)
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}
