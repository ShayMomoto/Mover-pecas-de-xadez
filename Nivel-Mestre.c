#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo na diagonal (Cima, Direita)
void moverBispo(int casas, int atual) {
    if (atual > casas) return;
    printf("Cima, Direita\n");
    moverBispo(casas, atual + 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("--- Movendo a Torre ---\n");
    moverTorre(5);
    printf("\n\n");
    
    printf("=== Movendo o Bispo ===\n");
    moverBispo(5, 1);
    printf("\n\n");
    
    printf("*** Movendo a Rainha ***\n");
    moverRainha(8);
    printf("\n\n");
    
    // Movendo o Cavalo duas casas para cima e uma para a direita
    printf("~~~ Movendo o Cavalo ~~~\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    
    for (int i = 0, j = 0; i < 1 && j < 1; i++, j++) {
        printf("Direita\n");
    }
    
    return 0;
}
