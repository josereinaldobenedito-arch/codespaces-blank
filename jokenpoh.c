#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Jogo Jokenpô\n");
    printf("Escolha a opção:\n");
    printf("1. Prdra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
    
    escolhaComputador = rand() % 3 +1;

    switch (escolhaJogador)
    {
        case 1:
        printf("Jogador : Pedra -\n");
        break;
         case 2:
        printf("Jogador : Papel -\n");
        break;
        
         case 3:
        printf("Jogador : Tesoura -\n");
        break;
        default:
        ("Empate\n");
    
    }
     switch (escolhaComputador)
    {
        case 1:
        printf("computador : Pedra -\n");
        break;
         case 2:
        printf("computador : Papel -\n");
        break;
        
         case 3:
        printf("computador : Tesoura -\n");
        break;

    }
    if (escolhaComputador == escolhaJogador)
    {
        printf("Empate\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
         (escolhaJogador == 2) && (escolhaComputador == 1) ||
         (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("Você ganhou\n");
    } else {
        printf("Você Perdeu!\n");
    } 
    return 0;

}