#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(){

    char tabuleiro[LINHAS][COLUNAS] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    
    char peca = 'x';
    int jogadas = 0;
    
    while(1){
        if(jogadas >= 9){
            printf("DEU VELHA!!!\n\n");
            printf("Fim de Jogo");
            break;
        }

        for(int i=0; i<LINHAS; i++){
            for(int j=0; j<COLUNAS; j++){
                printf(" %c ", tabuleiro[i][j]);
                if(j<COLUNAS-1){
                    printf("|");
                }
            }
            if(i<LINHAS-1){
                printf("\n-----------\n");
            }
        }
        printf("\n");

        int linha, coluna;    
        printf("Informe a linha e coluna: ");
        scanf("%d %d", &linha, &coluna);
        getchar();

        if(tabuleiro[linha-1][coluna-1] != ' '){
            printf("Posicao ja ocupada, escolha novamente\n");
            continue;
        }
        tabuleiro[linha-1][coluna-1] = peca;
        peca = (peca=='x') ? 'o' : 'x';
        jogadas++;
    }

    return 0;
}