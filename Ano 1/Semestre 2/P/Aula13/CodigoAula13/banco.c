
#include <stdio.h>
#include <string.h>
#include "banco.h"

// Escreve conteudo do ficheiro binario na consola
// O nome do ficheiro érecebido como parâmetro
void printFile(char *nomeF){
    cliente a;
    FILE *f;

    f = fopen(nomeF, "rb");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro.\n"); return;
    }
    while(fread(&a, sizeof(cliente), 1, f) == 1)
        printf("%s - %s - %d - %d\n", a.nome, a.morada, a.conta, a.montante);
    fclose(f);
}

// Escreve tamanho do ficheiro binario e numero de clientes armazenados na consola
// O nome do ficheiro érecebido como parâmetro
void printDados(char *nomeF){
    FILE *f;

    f = fopen(nomeF, "rb");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro.\n"); return;
    }
    fseek(f, 0, SEEK_END);
    printf("\nTamanho do ficheiro: %ld\n", ftell(f));
    printf("Numero de clientes: %ld\n", ftell(f) / sizeof(cliente));

    fclose(f);
}

// Corrige morada de um cliente armazenado no ficheiro
// Recebe nome do ficheiro, nome do cliente e nova morada
// Devolve 1 se a correcao for efetuada com sucesso, ou 0, caso contrario
int corrigeMorada(char *nomeF, char *nomeC, char *nMorada){
    FILE *f;
    cliente a;

    f = fopen(nomeF, "rb+");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro.\n"); return;
    }
    while(fread(&a, sizeof(cliente), 1, f) == 1)

        if(strcmp(nomeC,a.nome) == 0)
        {
            strcpy(a.morada, nMorada);
            fseek(f,-sizeof(cliente), SEEK_CUR);
            fwrite(&a,sizeof(cliente),1,f);
        }
        printf("%s - %s - %d - %d\n", a.nome, a.morada, a.conta, a.montante);
    fclose(f);

    return 0;
}

// Escreve conteudo do ficheiro binario na consola. A informação deve ser listada por ordem alfabética inversa
// O nome do ficheiro érecebido como parâmetro
void printFileInv(char *nomeF) {
}


// Transfere montante entre 2 clientes
// Recebe nome do ficheiro, identificacaos clientes envolvidos na operacaa e montante a transferir
// Devolve 1 se a transferencia for efetuada com sucesso, ou 0, caso contrario
int transfere(char *nomeF, char *or, char *dest, int valor){
    return 0;
}

// Elimina um cliente do ficheiro, mantendo a ordem alfabetica
// Recebe nome do ficheiro e nome do cliente a eliminar
// Devolve 1 se a eliminação for efetuada com sucesso, ou 0, caso contrario
int eliminaC(char *nomeF, char *nome){
    return 0;
}