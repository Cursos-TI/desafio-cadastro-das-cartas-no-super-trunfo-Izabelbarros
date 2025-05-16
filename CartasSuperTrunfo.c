#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
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
    Carta cartaA;
    Carta cartaB;

    // Dados da Carta A
    strcpy(cartaA.estado, "Estado A");
    strcpy(cartaA.codigo, "A01");
    strcpy(cartaA.nome_cidade, "Anchorage");
    cartaA.populacao = 260283;
    cartaA.area = 5041.89;
    cartaA.pib = 3080.4e9; // Convertendo para a unidade base (reais)
    cartaA.num_pontos_turisticos = 30;

    // Dados da Carta B
    strcpy(cartaB.estado, "Estado B");
    strcpy(cartaB.codigo, "B01");
    strcpy(cartaB.nome_cidade, "Nassau");
    cartaB.populacao = 400948;
    cartaB.area = 13939.0;
    cartaB.pib = 8147.56e9; // Convertendo para a unidade base (reais)
    cartaB.num_pontos_turisticos = 105;

    // Vamos calcular a Densidade Populacional e o PIB per capita para ambas as cartas
    cartaA.densidade_populacional = (float)cartaA.populacao / cartaA.area;
    cartaA.pib_per_capita = cartaA.pib / cartaA.populacao;

    cartaB.densidade_populacional = (float)cartaB.populacao / cartaB.area;
    cartaB.pib_per_capita = cartaB.pib / cartaB.populacao;

    // Agora precisamos escolher um atributo para comparar.
    // Por exemplo, vamos escolher comparar o número de pontos turísticos.
    char atributo_comparado[] = "Número de Pontos Turísticos";
    Carta carta_vencedora;

    if (cartaA.num_pontos_turisticos > cartaB.num_pontos_turisticos) {
        carta_vencedora = cartaA;
    } else {
        carta_vencedora = cartaB;
    }

    printf("Comparação por: %s\n", atributo_comparado);
    printf("Carta A (%s): %d\n", cartaA.nome_cidade, cartaA.num_pontos_turisticos);
    printf("Carta B (%s): %d\n", cartaB.nome_cidade, cartaB.num_pontos_turisticos);
    printf("Carta vencedora: %s (%s) com %d %s\n", carta_vencedora.estado, carta_vencedora.nome_cidade, carta_vencedora.num_pontos_turisticos, atributo_comparado);

    return 0;
}