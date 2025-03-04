#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado[3];  
    int codcarta, populacao, numturistico;
    char cidade[50]; 
    float area, pib;
};

int main() {
    struct Carta carta1, carta2;  // Criando duas cartas

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    
    printf("Digite um estado (sigla ex: SP): ");
    scanf(" %2s", carta1.estado);

    printf("O código da cidade é: ");
    scanf("%d", &carta1.codcarta);

    printf("O nome da cidade é: ");
    getchar(); // Limpa o buffer do Enter anterior
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = 0;

    printf("A população é: ");
    scanf("%d", &carta1.populacao);

    printf("A área total é: ");
    scanf("%f", &carta1.area);

    printf("O PIB é: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numturistico);


    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Digite um estado (sigla ex: SP): ");
    scanf(" %2s", carta2.estado);

    printf("O código da cidade é: ");
    scanf("%d", &carta2.codcarta);

    printf("O nome da cidade é: ");
    getchar(); 
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = 0;

    printf("A população é: ");
    scanf("%d", &carta2.populacao);

    printf("A área total é: ");
    scanf("%f", &carta2.area);

    printf("O PIB é: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numturistico);


    // Exibindo os dados cadastrados
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código da cidade: %d\n", carta1.codcarta);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.numturistico);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código da cidade: %d\n", carta2.codcarta);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.numturistico);

    return 0;
}
