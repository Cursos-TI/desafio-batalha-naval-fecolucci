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
    int coluna_navio2 = 7; // Coluna H
    for (int i = linha_navio2; i < linha_navio2 + 5; i++) {
        tabuleiro[i][coluna_navio2] = 3;
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