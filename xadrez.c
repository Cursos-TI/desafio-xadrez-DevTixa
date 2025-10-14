#include <stdio.h>

int main() {

    // Torre: FOR = 5 casas para frente
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    
    // Bispo: While = 5 casas na diagonal
    int i1 = 0;

    while (i1 < 5)
    {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        i1++;
    }
    
    // Rainha: Do-While = 8 casas para esquerda
    int i2 = 0;

    do
    {
        printf("Esquerda\n"); // Imprime a direção do movimento
        i2++;

    } while (i2 < 8);
    
    return 0;
}

