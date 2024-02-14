// Programação 2023/24
// Aula Prática 2A - Matrizes

#include <stdio.h>
#include<stdlib.h>

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Mostra na consola os valores armazenados na matriz
void printMat(int mat[][3], int nLin){
    int i, j;

    for(i=0; i<nLin; i++){
        for(j=0; j<3; j++)
            printf("%d\t", mat[i][j]);
        putchar('\n');
    }
}

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Preenche a matriz de acordo com as regras definidas nos exercícios 2 e 3 da ficha prática 2
void preencheMat(int mat[][3], int nLin){

    int numero = 0;
    int i,j;


    for (i = 0; i < nLin ; i++)
    {
        printf("Insira um numero na linha %d: ",i);
        scanf("%d",&numero);

        for (j = 0; j < 3 ; j++)
        {
            if(j == 0)
            {
                mat[i][j] = numero;
            }
            if(j == 1){
                mat[i][j] = numero*numero;
            }
            else if(j == 2)
            {
                mat[i][j] = numero*numero*numero;
            }
        }
    }
}

int valido(int v, int lin, int mat[][3])
{
    int i;

    if(v<1 || v>100)
    {
        return 0;
    }
    for(i=0;i<lin;i++)
    {
        if(mat[i][0] == v)
        {
            return 0;
        }
    }

    return 1;
}

void preencheMatWithRes(int mat[][3], int nLin)
{
    int numero = 0;
    int i,j;

    for (i = 0; i < nLin ; i++)
    {
        do
        {
            printf("Insira um numero na linha %d: ",i);
            scanf("%d",&numero);

            if(numero < 0 || numero > 100)
            {
                printf("Numero fora do intervalo\n\n");
            }
        } while (valido(numero,i,mat) == 0);

        for (j = 0; j < 3 ; j++)
        {
            if(j == 0)
            {
                mat[i][j] = numero;
            }
            else if(j == 1)
            {
                mat[i][j] = numero*numero;
            }
            else if(j == 2)
            {
                mat[i][j] = numero*numero*numero;
            }
        }
    }
}

int main(){

    int m1[4][3] = {{1,2,3},{6,7,8},{10,11,12},{20,30,40}};
    int m2[10][3] = {0};

    printMat(m1, 4);

    // Chamada da função do exercicio 2
    //preencheMat(m2, 10);
    preencheMatWithRes(m2, 10);
    printf("\nMatriz preenchida:\n");
    printMat(m2, 10);

    return 0;
}