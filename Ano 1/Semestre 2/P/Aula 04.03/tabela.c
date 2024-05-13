#include <stdio.h>
#include "tabela.h"

void printV(ret a[], int total){
    int i;

    printf("\nExistem %d retangulos na tabela\n", total);
    for(i=0; i<total; i++) {
        printf("R. %d\n", i);
        printRet(a[i]);
    }
}

int addRet(ret a[], int *total){

    if(*total <= 10)
    {
        initRet(&(a[*total]));
        (*total)++;
        return 1;
    }
    return 0;
}

void duplicaAltLarg(ret a[], int total){

}


int quadrante1(ret a[], int total){
    return 0;
}

void eliminaMenor(ret a[], int *total)
{
    int menor = areaR(a[0]);
    int pos;

    for (int i = 0; i < *total; i++)
    {
        if(areaR(a[i]) < menor)
        {
            menor = areaR(a[i]);
            pos = i;
        }
    }

    a[pos] = a[*total-1];
    (*total)--;
}

void eliminaVarios(ret a[], int *total, int lim)
{
    for (int i = 0; i < *total; i++)
    {
        if(areaR(a[i]) < lim)
        {
            a[i] = a[*total-1];
            (*total)--;
        }
    }
}