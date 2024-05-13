
#include "retangulo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printRet(ret r){

}

void initRet(ret* p){

}

int areaR(ret r){
    return 0;
}


void moveR(ret* p, int dx, int dy){

}

int frase(int a,int b){

    return a+b;
}

void pontos(int Dim,int *pos){

    ponto2d p[2];
    *pos = 0;
    int aux;

    for (int i = 0; i < Dim; i++)
    {
        printf("Ponto %d\n",*pos);

        printf("Insira a altura:");
        scanf("%d",&p[i].altura);

        printf("Insira a largura:");
        scanf("%d",&p[i].largura);

        p[i].area = p[i].altura * p[i].largura;

        aux = i;
    }

        *pos = aux;

    for (int i = 0; i < Dim; i++)
    {
        //printf("Ponto %d: (%d,%d)\n",i,p[i].x,p[i].y);
        printf("Area do %d quadrado[%dx%d]: %d\n",*pos,p[i].largura,p[i].altura,p[i].area);
    }
}

void testeponto(ponto2d a[10], int *pos)
{
    int aux;

    printf("Quantidade de vetores:");
    scanf("%d",&aux);

    for (int i = *pos; i < aux; i++)
    {
        printf("\nPonto %d\n",i);

        printf("Insira o x: ");
        scanf("%d",&a[i].x);

        printf("Insira o y: ");
        scanf("%d",&a[i].y);
    }

    *pos += aux;
}
