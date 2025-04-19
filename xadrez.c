#include <stdio.h>


int main() {
    // Movimentação da Torre: 05 casas para a diretira
    printf("Moniventação da Torre:\n");
    for (int i = 0; i < 5; i++);{
    printf("Direita\n");
    }
    
    // Movimentação do Bispo: 05 casas para a diagonal (cima e direita)
    printf("\nMovimentação do Bispo:\n");
    int j = 0;
    while(j < 5)
    {
        printf("Cima, Direita\n");
        j++;
    }
    
    //Movimentação da Rainha: 08 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do{
        printf("Esquerda\n");
        k++;
        
    }while(k < 8);
        
    //Definição das constantes para o movimento do cavalo
        int casasBaixo=2; //quantidade de casas para baixo
        int casasEsquerda=1; //quantidade de casas para a esquerda

    //Movimentação do cavalo
        printf("\nMovimentação do Cavalo:\n");
        for (int i = 0; i < casasBaixo; i++)
        {   printf("Baixo\n"); //Movimento para baixo
        }

    //Um loop com do-while para o movimento para a esquerda
        int j = 0;
        do {
            printf("Esquerda\n"); //Movimento para a esquerda
            j++;
        }
            while (j < casasEsquerda);

    return 0;
}
