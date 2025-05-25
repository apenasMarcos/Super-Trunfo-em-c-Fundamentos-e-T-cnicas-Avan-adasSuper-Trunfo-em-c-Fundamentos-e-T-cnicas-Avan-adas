#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[100];
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];

    // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Digite a população da cidade: ");
    fgets(buffer, sizeof(buffer), stdin); // Limpa o buffer do scanf anterior
    unsigned long int populacao1 = strtoul(buffer, NULL, 10);

    printf("Digite a área da cidade (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    float area1 = strtof(buffer, NULL);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    float pib1 = strtof(buffer, NULL);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    int pontosTuristicos1 = (int) strtol(buffer, NULL, 10);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a população da cidade: ");
    fgets(buffer, sizeof(buffer), stdin); // Limpa o buffer do scanf anterior
    unsigned long int populacao2 = strtoul(buffer, NULL, 10);

    printf("Digite a área da cidade (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    float area2 = strtof(buffer, NULL);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    float pib2 = strtof(buffer, NULL);

    printf("Digite o número de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    int pontosTuristicos2 = (int) strtol(buffer, NULL, 10);

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB de bilhões para reais
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2 ? 1 : 0));

    return 0;
}