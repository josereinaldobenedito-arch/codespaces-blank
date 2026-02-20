#include <stdio.h>

int main() {

    int idade = 30;
    float altura = 1.69;

    if(idade >= 12 && idade <= 30 && altura > 1.70) {
        printf("Você está apto\n");
    } else {
        printf("você não está apto\n");
    }
}

// && = e (uma coisa E outra )
// || = ou ( uma coisa OU outra)
// ! = not ( inverte o valor lógico de uma expressão ( 1 - 0 | 0 -1) 