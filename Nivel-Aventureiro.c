#include <stdio.h>

int main() {
    int i, j;
    
    printf("~~~Movimentação do Cavalo~~~\n");
    
    
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }
    
    return 0;
}
