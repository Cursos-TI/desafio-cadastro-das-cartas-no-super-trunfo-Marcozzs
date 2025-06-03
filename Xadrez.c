#include <stdio.h>

int main()
{

    int torre = 1;  // DIREITA
    int bispo = 1;  // CIMA DIREITA
    int rainha = 1; // ESQUERDA

    // FOR
    printf("\nA torre andará 5x para a direita\n");
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }
    // WHILE
    printf("\nO bispo andará 5x para a cima direita - diagonal\n");
    while (bispo <= 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }
    // DO WHILE
    printf("\nA rainha andará 8x para a esquerda\n");
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    // CAVALO 
    int passos = 0;

    printf("\nO cavalo andará\n");
    for (int i = 0; i < 1; i++){
        while ( passos < 2){
            printf("Baixo\n");
            passos++;
        }
        printf("Esquerda\n");

    }
    return 0;
}
