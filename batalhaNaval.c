#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char tabuleiro[10][10]; // Matriz para o tabuleiro

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }
    //posicionar Navio no tabuleiro
    //navio 1
    tabuleiro[2][3] = '3';
    tabuleiro[2][4] = '3';
    tabuleiro[2][5] = '3';
    //navio 2
    tabuleiro[5][1] = '3';
    tabuleiro[6][1] = '3';
    tabuleiro[7][1] = '3';

    printf("Tabuleiro Naval:\n");
    printf(" A B C D E F G H I J\n");

    for(int i = 0; i < 10; i++) {

        printf("%d ", i);
        for(int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    

    

    return 0;
}
