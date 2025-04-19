#include <stdio.h>

int main () {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Letras representando as colunas do tabuleiro

    int tabuleiro[10][10] = {0}; // Matriz do tabuleiro

    printf("\n");
    printf(" JOGO DE BATALHA NAVAL\n");
    printf("\n");

    printf("  "); // Espaçamento para ordenar letras nas colunas

    for (int i = 0; i < 10; i++) 
    { 
        printf(" %c", linha[i]); // Imprime as letras
    }
    printf("\n");

    // Navio 1
    int linha_navio1 = 4; // Linha 5
    int coluna_navio1 = 1; // Coluna B
    for (int i = coluna_navio1; i < coluna_navio1 + 3; i++) {
        tabuleiro[linha_navio1][i] = 3;
    }

    // Navio 2
    int linha_navio2 = 1; // Linha 2
    int coluna_navio2 = 8; // Coluna I
    for (int i = linha_navio2; i < linha_navio2 + 3; i++) {
        tabuleiro[i][coluna_navio2] = 3;
    }

    // Navio 3
    int linha_navio3 = 0;
    int coluna_navio3 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_navio3 + i][coluna_navio3 + i] = 3;
    }

    // Navio 4
    int linha_navio4 = 6;
    int coluna_navio4 = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_navio4 + i][coluna_navio4 - i] = 3;
    }


    // Matriz da cruz

    int cruz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                cruz[i][j] = 1; // Linha ou coluna central
        }       else {
                    cruz[i][j] = 0;
        }
    }
}

    // Percorre a matriz 5x5 da cruz.

    int origem_linha_cruz = 6;
    int origem_coluna_cruz = 6;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int linha_tab_cruz = origem_linha_cruz - 2 + i; // Centraliza a matriz no ponto de origem
                int coluna_tab_cruz = origem_coluna_cruz - 2 + j;

                // Verifica se está dentro dos limites do tabuleiro
                if (linha_tab_cruz >= 0 && linha_tab_cruz < 10 && coluna_tab_cruz >= 0 && coluna_tab_cruz < 10) {
                    tabuleiro[linha_tab_cruz][coluna_tab_cruz] = 5; // Marca como área de efeito
                }
            }
        }
    }


    // Matriz do cone

    int cone[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        // A linha 0 tem só o do meio
        // A linha 1 tem de 1 a 3
        // A linha 2 tem de 0 a 4
            if (i == 0 && j == 2) {
                cone[i][j] = 1;
            } else if (i == 1 && j >= 1 && j <= 3) {
                cone[i][j] = 1;
            } else if (i == 2) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // Percorre a matriz 5x5 do cone

    int origem_linha_cone = 2;
    int origem_coluna_cone = 5;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int linha_tab_cone = origem_linha_cone - 2 + i;
                int coluna_tab_cone = origem_coluna_cone - 2 + j;
                if (linha_tab_cone >= 0 && linha_tab_cone < 10 && coluna_tab_cone >= 0 && coluna_tab_cone < 10) {
                    tabuleiro[linha_tab_cone][coluna_tab_cone] = 5;
                }
            }
        }
    }

    // Matriz do octaedro

    int octaedro[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        // A linha 2 tem só o do meio
        // A linha 3 tem de 1 a 3
        // A linha 4 tem só o do meio
            if (i == 1 && j == 2) {
                octaedro[i][j] = 1;
            } else if (i == 2 && j >= 1 && j <= 3) {
                octaedro[i][j] = 1;
            } else if (i == 3 && j == 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

        // Percorre a matriz 5x5 do octaedro

        int origem_linha_octaedro = 8;
        int origem_coluna_octaedro = 3;
    
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (octaedro[i][j] == 1) {
                    int linha_tab_octaedro = origem_linha_octaedro - 2 + i;
                    int coluna_tab_octaedro = origem_coluna_octaedro - 2 + j;
                    if (linha_tab_octaedro >= 0 && linha_tab_octaedro < 10 && coluna_tab_octaedro >= 0 && coluna_tab_octaedro < 10) {
                        tabuleiro[linha_tab_octaedro][coluna_tab_octaedro] = 5;
                    }
                }
            }
        }

    for (int i = 0; i < 10; i++) { //for externo percorre as linhas

        printf("%2d", i + 1); // Imprime os números das linhas *%2d alinha os numeros pela direita pra ficar certinho em relação aos outros na coluna

        for (int j = 0; j < 10; j++) { //for interno percorre as colunas

            printf(" %d", tabuleiro[i][j]); //imprime o tabuleiro
        }

        printf("\n");
    }


    return 0;
}