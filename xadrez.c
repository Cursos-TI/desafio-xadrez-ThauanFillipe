#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando "for"
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando "while"
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando "do-while"
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo: "L" (2 para baixo, 1 para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    
    // Primeiro loop for para mover duas casas para baixo
    for (int a = 0; a < 2; a++) {
        printf("Baixo\n");
    }

    // Segundo loop while para mover uma casa para a esquerda
    int b = 0;
    while (b < 1) {
        printf("Esquerda\n");
        b++;
    }

    return 0;
}