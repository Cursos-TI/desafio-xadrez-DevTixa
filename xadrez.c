#include <stdio.h>

// Movimento da Torre
void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}

// Movimento do Bispo
void moverBispo(int casas, int passoVertical, int passoHorizontal){
    if (casas > 0)
    {
        for (int i = 0; i < passoVertical; i++)
        {
            printf("Cima\n");
        }
        
        for (int j = 0; j < passoHorizontal; j++)
        {
            printf("Direita\n");
        }

        moverBispo(casas - 1, passoVertical, passoHorizontal);
    }
}

// Movimento da Rainha
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}

// Movimento do Cavalo
void moverCavalo(int movimentos){
    for (int m = 0; m < movimentos; m++) // Loop externo: cada "L"
    {
        // Loop interno para mover vertical (2 casas para cima)
        for (int v = 0; v < 2; v++)
        {
            printf("Cima\n");
        }

        // Loop interno para mover horizontal (1 casa para direita)
        for (int h = 0; h < 1; h++)
        {
            printf("Direita\n");
        }
    }
}

int main() {

    moverTorre(5);
    printf("\n");
    moverBispo(5, 1, 1);
    printf("\n");
    moverRainha(8);
    printf("\n");
    moverCavalo(1);

    return 0;
}
