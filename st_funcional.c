#include <stdio.h>
#include <stdlib.h>

int main() {

    // menu de opções
    int opcao;
    int c1, c2;

    // propriedades da carta
    int c1_populacao = 3644;
    float c1_area = 367832;
    float c1_pib = 98959.65;
    int c1_pt = 230;

    int c2_populacao = 3656;
    float c2_area = 35984;
    float c2_pib = 311548.78;
    int c2_pt = 230;

    printf("****SUPER TRUNFO*****\n");
    printf("1- iniciar jogo\n");
    printf("2- regras do Jogo\n");
    printf("3- comparar PIB\n");
    printf("4- comparar Pontos Turisticos\n");
    printf("5- sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (c1_populacao > c2_populacao) {
                printf("Carta 1 contem mais populacao!\n");
            } else if (c2_populacao > c1_populacao) {
                printf("Carta 2 contem mais populacao!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            if (c1_area > c2_area) {
                printf("Carta 1 contem a maior Area!\n");
            } else if (c2_area > c1_area) {
                printf("Carta 2 contem a maior Area!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            if (c1_pib > c2_pib) {
                printf("Carta 1 possui o maior P.I.B.!\n");
            } else if (c2_pib > c1_pib) {
                printf("Carta 2 possui o maior P.I.B.!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            if (c1_pt > c2_pt) {
                printf("Carta 1 tem mais Pontos Turisticos!\n");
            } else if (c2_pt > c1_pt) {
                printf("Carta 2 tem mais Pontos Turisticos!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
