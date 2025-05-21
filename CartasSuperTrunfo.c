#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar os dados de uma carta
typedef struct {
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Obtém os dados da primeira carta
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Obtém os dados da segunda carta
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Exibe os dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

    // Exibe os dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

    return 0;
}
