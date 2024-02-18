// Programação 2023/24
// Aula Prática 3 - Ponteiros e Endereços: Comunicação entre funções e manipulação de tabelas

#include <stdio.h>

// Recebe: Endereços/ponteiros para 3 variáveis do tipo float
// Deve efetuar a rotação de valores entre essas variáveis
void rotacao(float *p1, float *p2, float *p3){

}

// Recebe: Endereço inicial de uma tabela de inteiros, tamanho da tabela e endereços de 4 variáveis inteiras
// Deve colocar nas variáveis referenciadas pelos 4 ponteiros:
// número de pares, de impares, maior valor e posição do maior valor
void conta(int *t, int tam, int *np, int *ni, int *maior, int *pos){

}

// Recebe: Endereço inicial e tamnaho de uma tabela de inteiros e endereços de 2 variáveis inteiras
// Deve colocar nas variáveis referenciadas pelos 2 ponteiros o maior e segundo maior elementos existentes na tabela
void procuraDupla(int *tab, int tam, int *prim, int *seg){

}


// Deve testar o código das funções com as 3 tabelas exemplificadas na função main()

int main(){
    float x=1.2, y=4.9, z=-2.3;

    int tab1[10] = {12, 7, 9, 4, 1, 4, 41, 7, 21, 14};
    int tab2[5] = {-2, -7, -8, -9, -1};
    int tab3[8] = {12, 10, 11, 5, 8, 3, -4, -1};

    int pares=0, impares=0, maior=0, posMaior=0;
    int prim=0, seg=0;

    printf("Antes: X=%.1f\tY=%.1f\tZ=%.1f\n", x, y, z);

    // Colocar a chamada da funcao rotacao()

    printf("Depois: X=%.1f\tY=%.1f\tZ=%.1f\n", x, y, z);

    // Colocar chamada da funcao conta()

    printf("Pares: %d\tImpares: %d\t, Maior: %d\t, Posicao: %d\n", pares, impares, maior, posMaior);

    // Colocar chamada da funcao procuraDupla()

    printf("Maior: %d\t, Segundo Maior: %d\n", prim, seg);

    return 0;
}