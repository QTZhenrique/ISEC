// Programação 2023/24
// Aula Prática 1

#include <stdio.h>

// Recebe: Tabela de inteiros a com tamanho tam
// Mostra na consola os valores armazenados na tabela
void mostraTab(int a[], int tam){
    int i;

    for(i=0; i<tam; i++)
        printf("%d\t", a[i]);
    putchar('\n');
}

// Exercicio 1
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve maior valor armazenado na tabela
int maior(int a[], int tam){
    int i, m = a[0];
    for(i=1; i<tam; i++)
        if(a[i] > m)
            m = a[i];
    return m;
}

// Exercicio 2
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve posição do maior valor armazenado na tabela
int posMaior(int a[], int tam){
    return -1;
}

// Exercicio 3
int MaisVezes(int a[], int tam)
{
    int vezes = 0, nmaior = a[0];
    int i;

    for(i=0;i<tam;i++)
    {
        if(a[i] > nmaior)
        {
            nmaior = a[i];
            vezes = 1;
        }

        if(a[i] == nmaior)
        {
            vezes++;
        }

    }

    return vezes;
}

// Exercicio 4
int MaisComum(int a[], int tam) {
    int contaM = 0, comum, i, j, c;
    for (i = 0; i < tam; i++) {
        c = 0;
        for (j = 0; j < tam; j++) {
            if (a[i] == a[j]) {
                c++;
            }
            if ((c > contaM) || (c == contaM && a[i] > comum)) {
                contaM = c;
                comum = a[i];
            }
        }
    }
    return comum;
}

// Exercicio 5
void Unicos(int v[ ], int tam)
{
    int i, j,c;
    printf("Unicos: ");
    for (i = 0; i < tam; i++)
    {
        c = 0;
        for (j = 0; j < tam; j++)
        {
            if(v[i] == v[j])
            {
                c++;
            }
        }
        if(c == 1)
        {
            printf(" %d\t",v[i]);
        }
    }
}

// Exercicio 6
void calculaSoma(int tab[], int dim, int valor) {
    if (dim < 3) {
        printf("A tabela precisa ter pelo menos 3 elementos.\n");
        return;
    }
    printf("\n\nSomas: ");
    for (int i = 0; i < dim - 2; i++) {
        for (int j = i + 1; j < dim - 1; j++) {
            for (int k = j + 1; k < dim; k++) {
                if (tab[i] + tab[j] + tab[k] == valor) {
                    printf("%d %d %d\t", tab[i], tab[j], tab[k]);
                }
            }
        }
    }
    printf("\n\n");
}

//Exercicio 7

int pesquisaOrd(int tab[], int dim, int valor)
{
    int i = 0;
    for (i = 0; i < dim; i++)
    {
        if(tab[i] == valor)
        {
            return 1;
        }
        else if(tab[i] > valor)
        {
            break;
        }
    }
    return 0;
}

int pesquisaOrd2(int tab[], int dim, int valor)
{
    int inicio = 0;
    int fim = dim - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) /2;

        if (tab[meio] == valor) {
            return 1;
        } else if (tab[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return 0;
}

int main(){

    int tab1[8] = {3, 6, 8, 8, 10, 1, 4, 2};
    int tab2[6] = {5, 5, 5, 9, 1, 9};
    int tab3[10] = {2, 30, 4, 7, 10, 3, 12, 15, 2, 10};
    int tab4[6] = {1,-2, 3, 4, -5, 6};
    int tab5[8] = {1,2,3,4,5,6,7,8};

    printf("Tabela 1:\n");
    mostraTab(tab1, 8);
    printf("Maior: %d\n", maior(tab1, 8));
    printf("Pos Maior: %d\n", posMaior(tab1, 8));
    //printf("Conta Maior: %d\n\n", contaMaior(tab1, 8));
    printf("Numero repete mais vezes: %d\n\n", MaisVezes(tab1, 8));
    Unicos(tab3, 10);
    calculaSoma(tab4,6,8);

    if(pesquisaOrd(tab5,8,1))
    {
        printf("return 1\n\n");
    }
    else
    {printf("return 0\n\n");}

    if(pesquisaOrd2(tab5,8,10))
    {
        printf("return 1\n\n");
    }
    else
    {printf("return 0\n\n");}



    printf("Tabela 2:\n");
    mostraTab(tab2, 6);
    printf("Maior: %d\n", maior(tab2, 6));
    printf("Pos Maior: %d\n", posMaior(tab2, 6));
    //printf("Conta Maior: %d\n\n", contaMaior(tab2, 6));

    return 0;
}
