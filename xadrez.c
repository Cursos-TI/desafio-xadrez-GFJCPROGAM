#include <stdio.h>

#define MAX_MOVEMENT 8

// Função para movimentar a Torre
void moverTorre() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MAX_MOVEMENT; i++) {
        printf("Torre se move 1 casa para a direita (Casa %d)\n", i + 1);
    }
}

// Função para movimentar o Bispo
void moverBispo() {
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < MAX_MOVEMENT; i++) {
        printf("Bispo se move 1 casa: Cima Direita (Casa %d)\n", i + 1);
    }
}

// Função para movimentar a Rainha
void moverRainha() {
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < MAX_MOVEMENT; i++) {
        // A Rainha se move tanto em linha reta quanto em diagonal
        if (i < MAX_MOVEMENT / 2) {
            printf("Rainha se move 1 casa para a esquerda (Casa %d)\n", i + 1);
        } else {
            printf("Rainha se move 1 casa: Cima Esquerda (Casa %d)\n", i + 1);
        }
    }
}

int main() {
    moverTorre();
    moverBispo();
    moverRainha();

    return 0;
}

