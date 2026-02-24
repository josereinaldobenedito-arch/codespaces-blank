#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int opcao, sim , nao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1- Iniciar Jogo\n");
    printf("2- Regras\n");
    printf("Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    srand(time (0));
    numeroSecreto = rand() % 10;
    printf("Digite um número de 0 a 9: ");
    scanf("%d", &palpite);
    if (numeroSecreto == palpite)
    {
        printf("Você acertou!\n");
        printf("numeroSecreto %d\n", numeroSecreto);
    } else {
        printf("Você errou\n");
        printf("numeroSecreto %d\n", numeroSecreto);
    }
        break;
    case 2:
    printf("Só vale 3 tentativas por vez, acertouz gamhou!!");
    break;
    case 3:
    printf("nos vemos mais tarde!");
    break;
    default:
        break;
    }

}