#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //Decaração do navio que será representado pelo número '3'
    int navio[3] = {3,3,3};
    
    // Declaração do tabuleiro do jogo, sendo a aguá representada pelo número '0'
    int tabuleiro [LINHAS][COLUNAS] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    
    // Posicionando Navio 1 Horizontal
    tabuleiro[2][3] = navio[0];
    tabuleiro[2][4] = navio[1];
    tabuleiro[2][5] = navio[2];

    // Posicionando Navio 2 Vertical
    tabuleiro[5][7] = navio[0];
    tabuleiro[6][7] = navio[1];
    tabuleiro[7][7] = navio[2];

    // Posicionamento Navio 3 naDiagonal
    tabuleiro[0][9] = navio[0];
    tabuleiro[1][8] = navio[1];
    tabuleiro[2][7] = navio[2];

    // Posicionamento Navio 4 naDiagonal
    tabuleiro[9][0] = navio[0];
    tabuleiro[8][1] = navio[1];
    tabuleiro[7][2] = navio[2];

    // Imprimindo o tabuleiro
    printf(" TABULEIRO BATALHA NAVAL\n");
    for ( int i = 0; i < LINHAS; i++ ) {
        for ( int j = 0; j < COLUNAS; j++ ) {
            printf("%d ", tabuleiro [i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
