#include <stdio.h>

int main() {

    int opcao;
    float saldo = 27.00;

    printf("Escolha uma opção\n");
    printf("1. Saldo\n");
    printf("2. Fazer Depósito\n");
    printf("3. Fazer Saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
        printf("O seu saldo é: R$ %f\n", saldo);
        break;
        case 2:
        printf("Qual banco deseja realizar o depósito?\n");
        break;
        case 3:
        printf("Digite o valor a ser sacado:\n");
        break;
        default:
        printf("Opção inválida!\n");

    }


}