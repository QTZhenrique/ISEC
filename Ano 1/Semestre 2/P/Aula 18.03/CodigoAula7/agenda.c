
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "agenda.h"

// Escreve os dados de todos os contactos na agenda
// Recebe endereço do vetor e numero de contactos armazenados
void listaC(pct p, int total){
    int i;

    printf("Existem %d contactos na agenda\n", total);
    for(i=0; i<total; i++)
        printf("%s\t%d\n", p[i].nome, p[i].num);
}

// Adiciona um novo contacto ao vetor dinamico. Os dados são indicados pelo utilizador
// Recebe endereço do vetor e endereço de variavel inteira contento o numero de contactos
// Devolve endereço de vetor depois de efetuada a atualizacao
pct addC(pct p, int *total){
    char nome[200];
    int num;
    pct aux;


    do
    {
        printf("Nome do novo contacto: ");
        scanf(" %[^\n]", nome);

        for (int i = 0; i < *total; i++)
        {
            if(strcmp(nome,p[i].nome)==0)
            {
                break;
            }
        }
    } while (true);

    printf("Numero do novo contacto: ");
    scanf(" %d", &num);


    aux = realloc(p,(total+1)*sizeof(ct));

    if(aux == null) return p;
    p = aux;
    strcpy(p[*total].nome,nome);
    p[*total].num = num;
    (*total);
    return p;




    // Completar funcao

    return p;
}

// Recebe endereço do vetor, numero de contactos armazenados e nome do contacto a pesquisar
// Devolve o numero de telemovel de um contacto
int getTel(pct p, int total, char *nome){
    return -1;
}

// Atualiza numero de telemovel de um contacto
// Recebe endereço do vetor, numero de contactos armazenados, nome do contacto a atualizar e novo numero
// Devolve 1 se a atualizacao for efetuada, ou 0, caso contrario
int atualizaTel(pct p, int total, char *nome, int novoT){
    return 0;
}

// Eliminar um novo contacto do vetor dinamico
// Recebe endereço do vetor, endereço de variavel inteira contento o numero de contactos e nome do contacto a eliminar
// Devolve endereço de vetor depois de efetuada a atualizacao
pct eliminaC(pct p, int *total, char *nome){

    pct aux;
    aux = p;

    for (int i = 0; i < *total; i++)
    {
        if(strcmp(aux[i].nome,nome)==0)
        {
            
        }
    }


    return p;
}