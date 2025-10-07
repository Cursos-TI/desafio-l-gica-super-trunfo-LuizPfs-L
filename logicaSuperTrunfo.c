#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[2],estado2[2];
    char codigo1[4],codigo2[4];
    char nome_cidade1[49],nome_cidade2[49];
    unsigned long int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
    float densidade_populacional1,densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;
    char cidade_vencedora1, cidadade_vencedora2;
    int opcao;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
   
    //Primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H):");
    scanf("%s", estado1);
    printf("Código da carta:\n");
    scanf("%s", codigo1);
    printf("Nome da cidade (digite sem espaços, use _ ou - para separar as palavras):\n");
    printf("Exemplo: Rio_de_Janeiro ou Belo-Horizonte\n");
    scanf("%s", nome_cidade1);
    printf("População:\n");
    scanf("%lu", &populacao1);
    printf("Área em KM²:\n");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais)\n");
    scanf("%f", &pib1);
    printf("Números de pontos turísticos\n");
    scanf("%d", &pontos_turisticos1);
    
    // (Repita para cada propriedade)

    //Segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("Estado (A-H):");
    scanf("%s", estado2);
    printf("Código da carta:\n");
    scanf("%s", codigo2);
    printf("Nome da cidade (digite sem espaços, use _ ou - para separar as palavras):\n");
    printf("Exemplo: Rio_de_Janeiro ou Belo-Horizonte\n");
    scanf("%s", nome_cidade2);
    printf("População:\n");
    scanf("%lu", &populacao2);
    printf("Área em KM²:\n");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais)\n");
    scanf("%f", &pib2);
    printf("Números de pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo de Densidade Populacional e PIB per Capita
    densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_capita1 = pib1 / (float) populacao1;

    densidade_populacional2 = (float) populacao2 / area2;
    PIB_per_capita2 = pib2 / (float) populacao2;
   
    //Exibir informações das cartas:
     printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.6f\n", PIB_per_capita1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.6f\n", PIB_per_capita2);
   
    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
   
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    switch (opcao) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("A cidade vencedora é: %s (maior população)\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("A cidade vencedora é: %s (maior população)\n", nome_cidade2);
            } else {
                printf("Empate em população!\n");
            }
            break;
        case 2: // Área
            if (area1 > area2) {
                printf("A cidade vencedora é: %s (maior área)\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("A cidade vencedora é: %s (maior área)\n", nome_cidade2);
            } else {
                printf("Empate em área!\n");
            }
            break;
        case 3: // PIB
            if (pib1 > pib2) {
                printf("A cidade vencedora é: %s (maior PIB)\n", nome_cidade1);
            } else if (pib2 > pib1) {
                printf("A cidade vencedora é: %s (maior PIB)\n", nome_cidade2);
            } else {
                printf("Empate em PIB!\n");
            }
            break;
        case 4: // Pontos turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("A cidade vencedora é: %s (mais pontos turísticos)\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("A cidade vencedora é: %s (mais pontos turísticos)\n", nome_cidade2);
            } else {
                printf("Empate em pontos turísticos!\n");
            }
            break;
        case 5: // Densidade populacional (menor vence)
            if (densidade_populacional1 < densidade_populacional2) {
                printf("A cidade vencedora é: %s (menor densidade populacional)\n", nome_cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A cidade vencedora é: %s (menor densidade populacional)\n", nome_cidade2);
            } else {
                printf("Empate em densidade populacional!\n");
            }
            break;
        case 6: // PIB per capita
            if (PIB_per_capita1 > PIB_per_capita2) {
                printf("A cidade vencedora é: %s (maior PIB per capita)\n", nome_cidade1);
            } else if (PIB_per_capita2 > PIB_per_capita1) {
                printf("A cidade vencedora é: %s (maior PIB per capita)\n", nome_cidade2);
            } else {
                printf("Empate em PIB per capita!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

   
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora)
  return 0;
}