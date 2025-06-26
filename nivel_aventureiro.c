#include <stdio.h>

void exibirTabuleiro(int linhas, int colunas, int matriz[10][10]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10] = {0};
    
    // Navio 1 - Vertical (coluna 2, linhas 1 a 4)
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 3;
    }
    
    // Navio 2 - Horizontal (linha 6, colunas 3 a 7)
    for (int j = 3; j <= 7; j++) {
        tabuleiro[6][j] = 3;
    }

    // Navio 3 - Diagonal principal (começa em (0,0))
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }
    
    // Navio 4 - Diagonal secundária (começa em (0,9))
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibe tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    exibirTabuleiro(10, 10, tabuleiro);

    return 0;
}