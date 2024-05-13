#include <stdio.h>
#include "retangulo.h"
#define DIM 8

void maiorN(int *tab1, int *maior)
{
    *maior = tab1[0];

    for (int i = 0; i < DIM; i++)
    {
        if(tab1[i] > *maior)
        {
            *maior = tab1[i];
        }
    }
}

void conta(int *t, int tam, int *np, int *ni, int *maior, int *pos)
{
    *maior = t[0];

    for (int i = 0; i < tam; i++)
    {
        if(t[i]%2 == 0)
        {
            (*np)++;
        }
        else
        {
            (*ni)++;
        }

        if(t[i] > *maior)
        {
            *maior = t[i];
            *pos = i;
        }
    }
}

void procuraDupla(int *tab, int tam, int *prim, int *seg)
{
    *prim = tab[0];

    for (int i = 0; i < tam; i++)
    {
        if(tab[i] > *prim)
        {
            *seg = *prim;
            *prim = tab[i];
        } else if(tab[i] > *seg)
        {
            *seg = tab [i];
        }
    }
}

int main() {
    printf("Ficha 1\n");
    printf("Ex1:\n");
    int tab1[8] = {1,2,3,6,10,4,12,9};
    int tab2[10] = {1,3,7,5,2,10,9,7,7,1};
    int MaiorNumero = 0;
    int np=0, ni=0, maior=0, pos=0;
    int prim = 0, seg = 0;
    //ponto2d p[10] = {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},};
    int *p[DIM] = {};
    int pos2 = 0;

    maiorN(tab1,&MaiorNumero);
    printf("O maior numero e: %d\n", MaiorNumero);

    conta(tab2,10, &np,&ni,&maior,&pos);
    printf("Numeros pares: %d\n Numero impares: %d\n Maior numero: %d\n Posicao do maior numero: %d\n",np,ni,maior,pos);

    procuraDupla(tab2, 10 , &prim, &seg);
    printf("Maior numero: %d\nSegundo maior numero: %d\n",prim,seg);

    printf("%d\n", frase(2,5));

    for (int i = 0; i < DIM; ++i)
    {
        printf("Insira o primeiro ponto:");
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < DIM; ++i)
    {
        printf("Pontos");
        printf("%d",p[i]);
    }



    //testeponto(&p[10], &pos2);

    //pontos(2,&pos);
}

