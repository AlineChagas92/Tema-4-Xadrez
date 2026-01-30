#include <stdio.h>
/*
DESAFIO XADREZ - NÍVEL MESTRE
- Usar recursividade para Torre, Bispo e Rainha
- Usar Loops Complexos para o Cavalo
- Combinar recursividade + loops aninhados no Bispo
*/

// Função Recursiva - Torre
// Movimento: para a direita

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
}

// RAINHA - FUNÇÃO RECURSIVA
// Movimento: Esquerda

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// BISPO - RECURSIVIDADE + LOOPS ANINHADOS
// Movimento: Cima + Direita

void moverBispo(int casas)
{
    if (casas > 0)
    {
        // Loop externo - movimento vertical
        for (int i = 0; i < 1; i++)
        {

            // Loop interno - movimento horizontal
            for (int j = 0; j < 1; j++)
            {
                printf("Cima Direita\n");
            }
        }

        moverBispo(casas - 1); // Chamada recursiva
    }
}

// CAVALO - LOOPS COMPLEXOS
// Movimento em L:
// 2 casas para cima e 1 casa para a direita

void moverCavalo()
{

    int cima;
    int direita;

    // Movimento Vertical
    for (cima = 0; cima < 2; cima++)
    {
        printf("Cima\n");
    }

    // Movimento Horizontal
    for (direita = 0; direita < 1; direita++)
    {
        printf("Direita\n");
    }
}

// FUNÇÃO PRINCIPAL

int main()
{
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("\n Movimento da Torre: \n");
    moverTorre(casasTorre);

    printf("\n Movimento do Bispo: \n");
    moverBispo(casasBispo);

    printf("\n Movimento da Rainha: \n");
    moverRainha(casasRainha);

    printf("\n Movimento do Cavalo: \n");
    moverCavalo();

    return 0;