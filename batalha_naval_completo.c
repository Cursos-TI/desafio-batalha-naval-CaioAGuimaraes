#include <stdio.h>
#include <stdlib.h>

void exibirTabuleiro(int linhas, int colunas, int matriz[10][10]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void exibirMatriz5x5(int matriz[5][5], const char *nome) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void nivelNovato() {
    printf("=== Nível Novato ===\n");
    int tabuleiro[5][5] = {0};

    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 3;
        printf("Navio Vertical - Parte em: (%d, %d)\n", i, 1);
    }

    for (int j = 0; j <= 3; j++) {
        tabuleiro[4][j] = 3;
        printf("Navio Horizontal - Parte em: (%d, %d)\n", 4, j);
    }
    printf("\n");
}

void nivelAventureiro() {
    printf("=== Nível Aventureiro ===\n");
    int tabuleiro[10][10] = {0};

    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 3;
    }

    for (int j = 3; j <= 7; j++) {
        tabuleiro[6][j] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    exibirTabuleiro(10, 10, tabuleiro);
    printf("\n");
}

void nivelMestre() {
    printf("=== Nível Mestre ===\n");

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;
        cruz[i][2] = 1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2) {
                octaedro[i][j] = 1;
            }
        }
    }

    exibirMatriz5x5(cone, "Cone");
    exibirMatriz5x5(cruz, "Cruz");
    exibirMatriz5x5(octaedro, "Octaedro");
}

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}