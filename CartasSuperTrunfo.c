#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    char codigo[20];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    Carta carta1, carta2;
    char atributo_comparado[] = "Número de Pontos Turísticos";
    Carta carta_vencedora;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta1.nome_cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // Calcula Densidade Populacional e PIB per capita para a primeira carta
    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao * 1e9; // Convertendo bilhões para unidade base

    // --- Cadastro da Segunda Carta ---
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta2.nome_cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // Calcula Densidade Populacional e PIB per capita para a segunda carta
    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao * 1e9; // Convertendo bilhões para unidade base

    // --- Exibe os dados das cartas ---
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais (%.2f)\n", carta1.pib, carta1.pib_per_capita);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais (%.2f)\n", carta2.pib, carta2.pib_per_capita);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);

    // --- Compara as cartas pelo atributo escolhido ---
    printf("\n--- Comparação por %s ---\n", atributo_comparado);
    printf("Carta 1 (%s): %d\n", carta1.nome_cidade, carta1.num_pontos_turisticos);
    printf("Carta 2 (%s): %d\n", carta2.nome_cidade, carta2.num_pontos_turisticos);

    if (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos) {
        carta_vencedora = carta1;
        printf("Carta vencedora: %s (%s) com %d %s\n", carta_vencedora.estado, carta_vencedora.nome_cidade, carta_vencedora.num_pontos_turisticos, atributo_comparado);
    } else if (carta2.num_pontos_turisticos > carta1.num_pontos_turisticos) {
        carta_vencedora = carta2;
        printf("Carta vencedora: %s (%s) com %d %s\n", carta_vencedora.estado, carta_vencedora.nome_cidade, carta_vencedora.num_pontos_turisticos, atributo_comparado);
    } else {
        printf("As cartas têm o mesmo número de pontos turísticos. Empate!\n");
    }

    return 0;
}