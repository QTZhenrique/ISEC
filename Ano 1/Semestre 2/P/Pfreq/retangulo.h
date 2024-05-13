
#ifndef RETANGULO_H
#define RETANGULO_H

#include <stdio.h>
typedef struct retangulo ret;
struct retangulo{
    int *alt;
    int *larq;
};

typedef struct ponto ponto2d;
struct ponto{
    int x,y;
    int altura,largura,area;
};

// Prototipos das funções definidas no modulo retangulo.c

void printRet(ret r);

void initRet(ret* p);

int areaR(ret r);

void moveR(ret* p, int dx, int dy);

int frase(int a,int b);

void pontos(int Dim, int *pos);

void testeponto(ponto2d a[10], int *pos);

#endif

