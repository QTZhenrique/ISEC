#include <stdio.h>

// Recebe: Dimensões e endereço de uma matriz de inteiros
// A ordem dos parâmetros é crucial: o número de colunas tem que surgir antes do parâmetro que apresenta a matriz à função.
// A função imprime o conteúdo da matriz na consola
void printMat(int nLin, int nCol, int m[][nCol]){
    int i, j;
    for(i=0; i<nLin; i++){
        for(j=0; j<nCol; j++)
            printf("%d\t", m[i][j]);
        putchar('\n');
    }
}

// Recebe: Dimensões e endereço de uma matriz de inteiros
// Recebe: Endereço de 2 variáveis inteiras onde deve colocar os indices das colunas com menor e maior média
// Escreve na consola as médias dos valores de cada coluna
void calcMediaCol(int nLin, int nCol, int m[][nCol], int* iMin, int* iMax){

}

// Recebe: Dimensões e endereço de uma matriz de inteiros quadrada
// Efetua a transposicao dos valores na matriz
void tMat(int n, int mat[][n]){

}

int mainM() {

    int mat1[3][3] = {{1,2,3},{7,8,9},{12,13,14}};
    int mat2[2][5] = {{10,2,13,4,8},{5, 9, 12, 1, 0}};

    int a=-1,b=-1;

    printf("Mat 1:\n");
    printMat(3, 3, mat1);
    printf("\nMat 2:\n");
    printMat(2, 5, mat2);

    calcMediaCol(2, 5, mat2, &a, &b);
    printf("\n\nCol. com menor media: %d\nCol. com maior media: %d\n", a, b);

    tMat(3, mat1);
    printf("\nMat 1 Transposta:\n");
    printMat(3, 3, mat1);
    return 0;
}