#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    char nome_pais1[50], nome_pais2[50];
    printf("Digite o nome do primeiro país (digite sem espaços, use _ ou - para separar as palavras): ");
    scanf("%s", nome_pais1);
    printf("Digite o nome do segundo país (digite sem espaços, use _ ou - para separar as palavras): ");
    scanf("%s", nome_pais2);

    unsigned long int populacao1 = (rand() % 300000000) + 5000000;
    unsigned long int populacao2 = (rand() % 300000000) + 5000000;
    float area1 = (float)(rand() % 15000000) + 10000;
    float area2 = (float)(rand() % 15000000) + 10000;
    float pib1 = (float)(rand() % 20000) + 100;
    float pib2 = (float)(rand() % 20000) + 100;
    int pontos_turisticos1 = (rand() % 100) + 1;
    int pontos_turisticos2 = (rand() % 100) + 1;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;

    // Menu manual
    int op1 = 0, op2 = 0;
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &op1);

    // Validação sem for/while
    if (op1 < 1 || op1 > 6) {
        printf("Opção inválida! O programa será encerrado.\n");
        return 0;
    }

    // Menu dinâmico do segundo atributo (apenas if, sem for)
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    if (op1 != 1) printf("1 - População\n");
    if (op1 != 2) printf("2 - Área\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos turísticos\n");
    if (op1 != 5) printf("5 - Densidade populacional\n");
    if (op1 != 6) printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &op2);

    // Validação sem for/while
    if (op2 < 1 || op2 > 6 || op2 == op1) {
        printf("Opção inválida! O programa será encerrado.\n");
        return 0;
    }

    // Exibição dos atributos e valores
    printf("\n--- Carta 1: %s ---\n", nome_pais1);
    printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.6f\n",
        populacao1, area1, pib1, pontos_turisticos1, densidade1, pibpc1);
    printf("--- Carta 2: %s ---\n", nome_pais2);
    printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.6f\n",
        populacao2, area2, pib2, pontos_turisticos2, densidade2, pibpc2);

    // Determina nome dos atributos
    char atributo_nome1[40], atributo_nome2[40];
    float val1_1, val2_1, val1_2, val2_2;
    switch(op1) {
        case 1: sprintf(atributo_nome1, "População"); val1_1 = populacao1; val2_1 = populacao2; break;
        case 2: sprintf(atributo_nome1, "Área"); val1_1 = area1; val2_1 = area2; break;
        case 3: sprintf(atributo_nome1, "PIB"); val1_1 = pib1; val2_1 = pib2; break;
        case 4: sprintf(atributo_nome1, "Pontos turísticos"); val1_1 = pontos_turisticos1; val2_1 = pontos_turisticos2; break;
        case 5: sprintf(atributo_nome1, "Densidade populacional"); val1_1 = densidade1; val2_1 = densidade2; break;
        case 6: sprintf(atributo_nome1, "PIB per capita"); val1_1 = pibpc1; val2_1 = pibpc2; break;
    }
    switch(op2) {
        case 1: sprintf(atributo_nome2, "População"); val1_2 = populacao1; val2_2 = populacao2; break;
        case 2: sprintf(atributo_nome2, "Área"); val1_2 = area1; val2_2 = area2; break;
        case 3: sprintf(atributo_nome2, "PIB"); val1_2 = pib1; val2_2 = pib2; break;
        case 4: sprintf(atributo_nome2, "Pontos turísticos"); val1_2 = pontos_turisticos1; val2_2 = pontos_turisticos2; break;
        case 5: sprintf(atributo_nome2, "Densidade populacional"); val1_2 = densidade1; val2_2 = densidade2; break;
        case 6: sprintf(atributo_nome2, "PIB per capita"); val1_2 = pibpc1; val2_2 = pibpc2; break;
    }

    // Mostra os valores dos atributos escolhidos
    printf("\nAtributos escolhidos:\n");
    printf("%s: %.2f vs %.2f\n", atributo_nome1, val1_1, val2_1);
    printf("%s: %.2f vs %.2f\n", atributo_nome2, val1_2, val2_2);

    // Comparação dos atributos e soma
    int pontos_pais1 = 0, pontos_pais2 = 0;
    float soma1 = val1_1 + val1_2;
    float soma2 = val2_1 + val2_2;

    // Primeiro atributo
    if (op1 == 5) {
        pontos_pais1 += (val1_1 < val2_1) ? 1 : 0;
        pontos_pais2 += (val2_1 < val1_1) ? 1 : 0;
    } else {
        pontos_pais1 += (val1_1 > val2_1) ? 1 : 0;
        pontos_pais2 += (val2_1 > val1_1) ? 1 : 0;
    }

    // Segundo atributo
    if (op2 == 5) {
        pontos_pais1 += (val1_2 < val2_2) ? 1 : 0;
        pontos_pais2 += (val2_2 < val1_2) ? 1 : 0;
    } else {
        pontos_pais1 += (val1_2 > val2_2) ? 1 : 0;
        pontos_pais2 += (val2_2 > val1_2) ? 1 : 0;
    }

    printf("\nSoma dos atributos escolhidos:\n");
    printf("%s: %.2f\n", nome_pais1, soma1);
    printf("%s: %.2f\n", nome_pais2, soma2);

    printf("\nResultado da rodada:\n");
    if (soma1 > soma2)
        printf("Vencedor: %s\n", nome_pais1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", nome_pais2);
    else
        printf("Empate!\n");

    return 0;
}