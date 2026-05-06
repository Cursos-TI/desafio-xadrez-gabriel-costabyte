#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MovimentoBispo(int Casas){

    if (Casas > 0){

    for (int Vertical = 0; Vertical < 1; Vertical++)
    {

       for (int Horizontal = 0; Horizontal < 1; Horizontal++)
       {
        printf("Direita, ");
       }
       printf("Cima\n");
    }
        MovimentoBispo(Casas - 1);
    }
}

void MovimentoTorre(int Casas){

    if (Casas > 0)
    {
        printf("Direita\n");
        MovimentoTorre(Casas - 1);
    }
}

void MovimentoRainha(int Casas){
    if (Casas > 0)
    {
        printf("Esquerda\n");
        MovimentoRainha(Casas - 1);
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.


    // Implementação de Movimentação do Bispo
    printf("Bispo:\n");

        MovimentoBispo(5);

    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Torre:\n");

        MovimentoTorre(5);

    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Rainha:\n");

        MovimentoRainha(8);
        
    printf("\n");  

    // Nível Aventureiro - Movimentação do Cavalo
    printf("Cavalo:\n");

        for (int CimaBaixo = 0, Lados = 0; CimaBaixo < 3; CimaBaixo++)
        {
            if (CimaBaixo == 2)
            {
                continue;
            }
            
                printf("Cima, ");

            if (CimaBaixo == 1)
            {
               while (Lados < 1)
               {
                printf("Direita\n");
                Lados++;
                break;

               }
            }
        } 
        
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
