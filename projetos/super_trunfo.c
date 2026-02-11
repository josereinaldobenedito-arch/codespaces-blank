#include <stdio.h>

int main () {
    char estado[3] = "A";
    char cidade[20] = "Rio de Janeiro";
    int populacao = 3644;
    float area = 35.98;
    float pib = 989.66;
    int pontos = 152;

    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);

    return 0;
}