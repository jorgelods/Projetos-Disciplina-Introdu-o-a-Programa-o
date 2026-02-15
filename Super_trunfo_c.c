#include <stdio.h>
#include <string.h>

int main() {

    /* ===============================
       Cartas pré-definidas
       =============================== */

    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0; // em bilhões
    int pontos1 = 25;

    char pais2[50] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 640.0; // em bilhões
    int pontos2 = 18;

    /* Cálculo da densidade demográfica */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    /* ===============================
       Menu Interativo
       =============================== */

    printf("===== SUPER TRUNFO - BATALHA =====\n\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n-----------------------------------\n");

    /* ===============================
       Switch para escolha do atributo
       =============================== */

    switch(opcao) {

        case 1:  // População
            printf("Comparacao por Populacao:\n\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:  // Área
            printf("Comparacao por Area:\n\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:  // PIB
            printf("Comparacao por PIB:\n\n");
            printf("%s: %.2f bilhoes\n", pais1, pib1);
            printf("%s: %.2f bilhoes\n\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:  // Pontos turísticos
            printf("Comparacao por Pontos Turisticos:\n\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:  // Densidade (regra invertida)
            printf("Comparacao por Densidade Demografica:\n\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n\n", pais2, densidade2);

            if (densidade1 < densidade2) {  // menor vence
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
