#include <stdio.h>

int main () {
    char estado[] = "B";
    char cidade[] = "Rondonia";
    int populacao = 3656;
    float area = 35.984;
    float pib = 989.661,14;
    int pontos = 37;

    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos: %d\n", pontos);

    return 0;
}