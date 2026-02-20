
#include <stdio.h>

int main()
{

    // Criando o tabuleiro 10x10

    int tabuleiro[10][10]; // indice

    // inicializaçao em 0 representa agua
    //  Usamos dois 'for' para preencher as 100 posições
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;// chamada do indice
        }
    }
    //  Posicionando o Navio Horizontal (Deitado)
    // agora vamos iniciar o j na posição 3 ex: j = 3;
    for( int j = 3; j < 6; j++){
        tabuleiro[2][j] = 3; // linha 2 fixa, coluna 'j' muda

    } 
    //  Posicionando o Navio Vertical (Em pé)
    // Escolhemos a Coluna 8. O 'i' vai mudar de 5 até 7 (3 posições) 
    
    for(int i = 5; i < 8; i++){
        tabuleiro[i][8] = 3;// Linha 'i' muda, Coluna 8 fixa
    }

    
    // exibindo saida do Tabuleiro
    printf("--------------- Tabuleiro de Batalha Naval-----------------\n");
    for(int i = 0; i < 10; i++ ){
        for(int j = 0; j < 10; j++){
            
            printf("%d",tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}