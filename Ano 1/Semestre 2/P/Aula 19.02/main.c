// Programação 2023/24
// Aula Prática 3 - Ponteiros e Endereços: Comunicação entre funções e manipulação de tabelas

#include <stdio.h>

// Recebe: Endereços/ponteiros para 3 variáveis do tipo float
// Deve efetuar a rotação de valores entre essas variáveis
void rotacao(float *p1, float *p2, float *p3)
{

    //segunda primeira
    //terceira segunda
    //primeira terceira

    float a;

    a = *p3;
    *p3 = *p2;
    *p2 = *p1;
    *p1 = a;
}

// Recebe: Endereço inicial de uma tabela de inteiros, tamanho da tabela e endereços de 4 variáveis inteiras
// Deve colocar nas variáveis referenciadas pelos 4 ponteiros:
// número de pares, de impares, maior valor e posição do maior valor
void conta(int *t, int tam, int *np, int *ni, int *maior, int *pos)
{
    *maior = t[0];

    for (int i = 0; i < tam; ++i)
    {
        if(t[i]%2 == 0)
        {
            (*np)++;
        }
        else
        {
            (*ni)++;
        }

        if(*maior < t[i])
        {
            *maior = t[i];
            *pos = i;
        }

    }
}

// Recebe: Endereço inicial e tamnaho de uma tabela de inteiros e endereços de 2 variáveis inteiras
// Deve colocar nas variáveis referenciadas pelos 2 ponteiros o maior e segundo maior elementos existentes na tabela
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

//Complementares


//Ex6
void medias(int *tab, int dim, int *soma, float *media)
{
    int i;

    for (i = 0; i < dim; i++)
    {
        *soma += tab[i];
    }

    *media = (float)*soma/i;

    for (i = 0; i <dim ; i++)
    {
        if(tab[i] < *media)
        {
            tab[i] = 0;
        }
    }

    printf("media: %.2f\n", *media);

    for (int i = 0; i < dim; i++)
    {
        printf("%d\t",tab[i]);
    }
}

//Ex7
int Compara(int *tab1, int dim1, int *tab2, int dim2)
{
    if(dim1 == dim2)
    {
        for (int i = 0; i < dim1; i++)
        {
            if(tab1[i] != tab2[i])
            {
                break;
            } else
            {
                return 1;
            }
        }
    }
    return 0;
}

//Ex8
void Iguais(int *tabA, int tamA, int *tabB, int tamB)
{

    int iguais;

    for (int i = 0; i < tamA; i++)
    {
        if(tabA[i] == tabB[i])
        {
            iguais++;
        }
    }

    printf("\nTem %d numeros iguais", iguais);
}


// Deve testar o código das funções com as 3 tabelas exemplificadas na função main()

int main(){
    float x=1.2, y=4.9, z=-2.3;

    int tab1[10] = {12, 7, 9, 4, 1, 4, 41, 7, 21, 14};
    int tab2[5] = {-2, -7, -8, -9, -1};
    int tab3[8] = {12, 10, 11, 5, 8, 3, -4, -1};
    int tab4[10] = {12, 7, 9, 4, 1, 4, 41, 7, 21, 14};
    int tab5[3] = {1,2,4};
    int tab6[3] = {1,2,6};

    int np=0, ni=0, m=0, pos=0, soma=0;
    int prim=0, seg=0;
    float media = 0;

    printf("Antes: X=%.1f\tY=%.1f\tZ=%.1f\n", x, y, z);

    rotacao(&x,&y,&z);

    printf("Depois: X=%.1f\tY=%.1f\tZ=%.1f\n", x, y, z);

    conta(tab1,10,&np,&ni,&m,&pos);

    printf("Pares: %d\tImpares: %d\t, Maior: %d\t, Posicao: %d\n", np, ni, m, pos);

    procuraDupla(tab3,8, &prim, &seg);

    printf("Maior: %d\t, Segundo Maior: %d\n", prim, seg);

    medias(tab2,5,&soma,&media);

    printf("\n%d",Compara(tab1,10,tab4,10));

    Iguais(tab5,3,tab6,3);
}