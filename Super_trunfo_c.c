#include <stdio.h>

int main() {

    /* ===============================
       CARTAS PRÉ-CADASTRADAS
       =============================== */

    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0; // bilhões
    int pontos1 = 25;

    char pais2[] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 640.0; // bilhões
    int pontos2 = 18;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    /* ===============================
       MENU PRIMEIRO ATRIBUTO
       =============================== */

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida!\n");
        return 0;
    }

    /* ===============================
       MENU SEGUNDO ATRIBUTO (DINÂMICO)
       =============================== */

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opcao invalida ou atributo repetido!\n");
        return 0;
    }

    /* ===============================
       CAPTURANDO VALORES ATRIBUTO 1
       =============================== */

    switch (atributo1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Erro inesperado.\n");
            return 0;
    }

    /* ===============================
       CAPTURANDO VALORES ATRIBUTO 2
       =============================== */

    switch (atributo2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Erro inesperado.\n");
            return 0;
    }

    /* ===============================
       COMPARAÇÃO INDIVIDUAL
       =============================== */

    printf("\n=========== COMPARACAO INDIVIDUAL ===========\n");

    /* Regra especial: densidade (menor vence) */

    int vencedor_attr1 = (atributo1 == 5) ?
                         (valor1_c1 < valor1_c2) :
                         (valor1_c1 > valor1_c2);

    int vencedor_attr2 = (atributo2 == 5) ?
                         (valor2_c1 < valor2_c2) :
                         (valor2_c1 > valor2_c2);

    printf("Atributo 1: %.2f x %.2f\n", valor1_c1, valor1_c2);
    printf("Resultado Atributo 1: %s\n",
           vencedor_attr1 ? pais1 : (valor1_c1 == valor1_c2 ? "Empate" : pais2));

    printf("\nAtributo 2: %.2f x %.2f\n", valor2_c1, valor2_c2);
    printf("Resultado Atributo 2: %s\n",
           vencedor_attr2 ? pais1 : (valor2_c1 == valor2_c2 ? "Empate" : pais2));

    /* ===============================
       SOMA FINAL (DENSIDADE INVERTIDA)
       =============================== */

    soma1 += (atributo1 == 5) ? (1 / valor1_c1) : valor1_c1;
    soma2 += (atributo1 == 5) ? (1 / valor1_c2) : valor1_c2;

    soma1 += (atributo2 == 5) ? (1 / valor2_c1) : valor2_c1;
    soma2 += (atributo2 == 5) ? (1 / valor2_c2) : valor2_c2;

    /* ===============================
       RESULTADO FINAL
       =============================== */

    printf("\n=========== RESULTADO FINAL ===========\n");
    printf("%s - Soma: %.2f\n", pais1, soma1);
    printf("%s - Soma: %.2f\n\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("VENCEDOR: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s!\n", pais2);
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}
