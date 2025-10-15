#include <stdio.h>

int main() {

    // Torre: FOR = 5 casas para frente
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    printf("\n");
    
    // Bispo: While = 5 casas na diagonal
    int i1 = 0;

    while (i1 < 5)
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        i1++;
    }

    printf("\n");
    
    // Rainha: Do-While = 8 casas para esquerda
    int i2 = 0;

    do
    {
        printf("Esquerda\n"); // Imprime a direção do movimento
        i2++;

    } while (i2 < 8);

    printf("\n");

    // Cavalo: Loop Aninhado = 2 casas para baixo e 1 casa para a esquerda
    int i = 1;

    while (i--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
        }
        printf("Esquerda\n"); //Imprime "Esquerda" duas vezes    
    }
     
    return 0;
}
