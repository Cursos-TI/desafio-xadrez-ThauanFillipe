#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo (usando loops aninhados também)
void moverBispo(int casas, int direcao) {
    if (casas == 0) return;
    for (int i = 0; i < direcao; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casas - 1, direcao);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimentar o Cavalo usando loops aninhados complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {  // Movendo duas casas para cima
        printf("Cima\n");
    }
    
    int j = 0;
    while (j < 1) {  // Movendo uma casa para a direita
        if (j == 0) {
            printf("Direita\n");
        }
        j++;
    }
}

int main() {
    // Movimentos das peças com recursividade e loops aninhados
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento aprimorado do Cavalo
    moverCavalo();

    return 0;
}