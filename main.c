#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Tabuleiro 5x5 só pra exemplo

    // Navio vertical
    int xVertical = 1;  // coluna fixa
    int yVertical = 0;  // começa na linha 0
    int tamanhoVertical = 3;

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        tabuleiro[yVertical + i][xVertical] = 1;
        printf("(%d, %d)\n", yVertical + i, xVertical);
    }

    // Navio horizontal
    int xHorizontal = 3; // linha fixa
    int yHorizontal = 0; // começa na coluna 0
    int tamanhoHorizontal = 4;

    printf("\nCoordenadas do navio horizontal:\n");
    for (int j = 0; j < tamanhoHorizontal; j++) {
        tabuleiro[xHorizontal][yHorizontal + j] = 1;
        printf("(%d, %d)\n", xHorizontal, yHorizontal + j);
    }

    return 0;
}
