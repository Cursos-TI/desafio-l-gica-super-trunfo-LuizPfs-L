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

    // Calculando cidade vencedora
    cidade_vencedora1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1.0f / densidade_populacional1);
    cidadade_vencedora2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + PIB_per_capita2+ (1.0f / densidade_populacional2);
     
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


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
     
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao1 > populacao2) {
         printf("Cidade 1 tem maior população.\n");
      } else {
         printf("Cidade 2 tem maior população.\n");
     }
     if (area1 > area2) {
         printf("Cidade 1 tem uma área maior.\n");
      } else {
         printf("Cidade 2 tem uma área maior.\n");
     }
     if (pib1 > pib2) {
         printf("Cidade 1 tem o PIB maior.\n");
      } else {
         printf("Cidade 2 tem o PIB maior.\n");
     }
     if (pontos_turisticos1 > pontos_turisticos2) {
         printf("Cidade 1 tem mais pontos turísticos.\n");
      } else {
         printf("Cidade 2 tem mais pontos turísticos.\n");
     }
      if (densidade_populacional1 < densidade_populacional2) {
         printf("Cidade 1 tem menor densidade populacional.\n");
      } else {
         printf("Cidade 2 tem menor densidade populacional.\n");
     }
      if (PIB_per_capita1 > PIB_per_capita2) {
         printf("Cidade 1 tem o maior PIB per Capita.\n");
      } else {
         printf("Cidade 2 tem o maior PIB per Capita.\n");
     }
     if (cidade_vencedora1 > cidadade_vencedora2)
     {
      printf("Carta 1 venceu.\n");
     }
     else{
        printf ("Carta 2 venceu.\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
