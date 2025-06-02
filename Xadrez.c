#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre - FOR
    printf("A TORRE SE MOVIMENTARÁ 5X PARA A DIREITA\n");
    for (int t = 1; t <= casasTorre; t++) {
        printf("DIREITA\n");
    }

    // Movimento do Bispo - WHILE
    printf("\nO BISPO SE MOVIMENTARÁ 5X PARA CIMA-DIREITA\n");
    int b = 1;
    while (b <= casasBispo) {
        printf("CIMA DIREITA\n");
        b++;
    }

    // Movimento da Rainha - DO-WHILE
    printf("\nA RAINHA SE MOVIMENTARÁ 8X PARA A ESQUERDA\n");
    int r = 1;
    do {
        printf("ESQUERDA\n");
        r++;
    } while (r <= casasRainha);

    return 0;
}
