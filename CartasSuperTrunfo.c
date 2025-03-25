#include <stdio.h>

int main() {
    // Variáveis para a primeira carta: Campinas (A01)
    char codigo1[4];  // Código: "A01"
    int populacao1;   // 1139000
    float area1;      // 794.95
    float pib1;       // 40000000000
    int pontos_turisticos1;  // 10

    // Variáveis para a segunda carta: São Carlos (B02)
    char codigo2[4];  // Código: "B02"
    int populacao2;   // 254000
    float area2;      // 1136.91
    float pib2;       // 14500000000
    int pontos_turisticos2;  // 6

    // Variáveis para a terceira carta: Moscou (C03)
    char codigo3[4];  // Código: "C03"
    int populacao3;   // 13258000
    float area3;      // 2511.00
    float pib3;       // 1000000000000
    int pontos_turisticos3;  // 15

    // Variáveis para a quarta carta: Kazan (D04)
    char codigo4[4];  // Código: "D04"
    int populacao4;   // 1308000
    float area4;      // 425.00
    float pib4;       // 870000000000
    int pontos_turisticos4;  // 8

    // Cadastro da primeira carta: Campinas
    printf("Digite o código da carta de Campinas (A01): ");
    scanf("%s", codigo1);
    printf("Digite a população de Campinas (1139000): ");
    scanf("%d", &populacao1);
    printf("Digite a área de Campinas em km² (794.95): ");
    scanf("%f", &area1);
    printf("Digite o PIB de Campinas em reais (40000000000): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos de Campinas (10): ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta: São Carlos
    printf("Digite o código da carta de São Carlos (B02): ");
    scanf("%s", codigo2);
    printf("Digite a população de São Carlos (254000): ");
    scanf("%d", &populacao2);
    printf("Digite a área de São Carlos em km² (1136.91): ");
    scanf("%f", &area2);
    printf("Digite o PIB de São Carlos em reais (14500000000): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos de São Carlos (6): ");
    scanf("%d", &pontos_turisticos2);

    // Cadastro da terceira carta: Moscou
    printf("Digite o código da carta de Moscou (C03): ");
    scanf("%s", codigo3);
    printf("Digite a população de Moscou (13258000): ");
    scanf("%d", &populacao3);
    printf("Digite a área de Moscou em km² (2511.00): ");
    scanf("%f", &area3);
    printf("Digite o PIB de Moscou em dólares (1000000000000): ");
    scanf("%f", &pib3);
    printf("Digite o número de pontos turísticos de Moscou (15): ");
    scanf("%d", &pontos_turisticos3);

    // Cadastro da quarta carta: Kazan
    printf("Digite o código da carta de Kazan (D04): ");
    scanf("%s", codigo4);
    printf("Digite a população de Kazan (1308000): ");
    scanf("%d", &populacao4);
    printf("Digite a área de Kazan em km² (425.00): ");
    scanf("%f", &area4);
    printf("Digite o PIB de Kazan em rublos (870000000000): ");
    scanf("%f", &pib4);
    printf("Digite o número de pontos turísticos de Kazan (8): ");
    scanf("%d", &pontos_turisticos4);

    // Exibição dos dados da primeira carta: Campinas
    printf("\nDados da carta de Campinas (%s):\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta: São Carlos
    printf("\nDados da carta de São Carlos (%s):\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    // Exibição dos dados da terceira carta: Moscou
    printf("\nDados da carta de Moscou (%s):\n", codigo3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f\n", area3);
    printf("PIB: %.2f\n", pib3);
    printf("Pontos turísticos: %d\n", pontos_turisticos3);

    // Exibição dos dados da quarta carta: Kazan
    printf("\nDados da carta de Kazan (%s):\n", codigo4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f\n", area4);
    printf("PIB: %.2f\n", pib4);
    printf("Pontos turísticos: %d\n", pontos_turisticos4);

    return 0;
}
