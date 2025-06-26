#include <stdio.h>

int main() {
    // Tabuleiro 5x5
    int tabuleiro[5][5] = {0};
    
    // Navio 1 - Vertical (posição fixa: coluna 1, linhas 1 a 3)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 3;
        printf("Navio Vertical - Parte em: (%d, %d)\n", i, 1);
    }
    
    // Navio 2 - Horizontal (posição fixa: linha 4, colunas 0 a 3)
    for (int j = 0; j <= 3; j++) {
        tabuleiro[4][j] = 3;
        printf("Navio Horizontal - Parte em: (%d, %d)\n", 4, j);
    }

    return 0;
}