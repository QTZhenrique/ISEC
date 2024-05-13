
#include <stdio.h>
#include <string.h>

struct paragem{
    char nome[50];
    int minutos;
};

void ler(char *nomeF)
{
    FILE *f;
    int v;

    f = fopen(nomeF,"rb");

    if(f == NULL)
    {
        printf("Ficheiro nao existe");
    }
    else
    {
        while (fread(&v, sizeof(int),1,f) == 1)
        {
            printf("%d\n",v);
        }
    }

    fclose(f);
}

void soma(char *nomeF)
{
    FILE *f;
    int v;
    int soma;

    f = fopen(nomeF,"rb");

    if(f == NULL)
    {
        printf("Ficheiro nao existe");
    }
    else
    {
        while (fread(&v, sizeof(int),1,f) == 1)
        {
            soma += v;
        }

        printf("soma: %d",v);
        fclose(f);
    }
}

// Recebe nome do ficheiro binário e nomes de 2 paragens
// Verifica se é possivel efetuar a ligação entre as 2 paragens
// Devolve número de minutos que demora a ligar as 2 paragens ou -1, caso seja impossivel
int liga(char *nome, char *or, char *dest){

    FILE *f;
    struct paragem p;
    int a = 0;
    int b = 0;
    int temp1 = 0;
    int temp2 = 0;
    int temptotal = 0;

    f = fopen(nome, "rb");

    if(f == NULL)
    {
        printf("Falha ao abrir o ficheiro");
    }
    else
    {
        while(fread(&p, sizeof(struct paragem), 1, f) == 1)
        {
            a++;
            if(strcmp(or,p.nome) == 0)
            {
                temp1 = p.minutos;
                break;
            }
        }
    }

    fclose(f);

    f = fopen(nome, "rb");

    if(f == NULL)
    {
        printf("Falha ao abrir o ficheiro");
    }
    else
    {
        while(fread(&p, sizeof(struct paragem), 1, f) == 1)
        {
            b++;
            if(strcmp(dest,p.nome) == 0)
            {
                temp2 = p.minutos;
                break;
            }
        }
    }

    fclose(f);

    if(a>b)
    {
        printf("Tempo total: %d",temptotal);
        return 1;
    }
    else
    {
        return -1;
    }
}

// Recebe nome do ficheiro binário e nome de paragem
// Verifica se paragem faz parte do percurso ou não. Devolve 1(Sim) ou 0 (Não)
int existeParagem(char *nomeF, char *paragem){

    FILE *f;
    struct paragem p;
    int a = 0;

    f = fopen(nomeF, "rb");

    if(f == NULL)
    {
        printf("Falha ao abrir o ficheiro");
    }
    else
    {
        while(fread(&p, sizeof(struct paragem), 1, f) == 1)
        {
            if(strcmp(paragem,p.nome)== 0)
            {
                a++;
            }
        }
    }

    fclose(f);

    if(a == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Recebe nome do ficheiro binário
// Escreve na consola o nome da origem e do destino do percurso
void orDest(char *nomeF){

}

// Recebe nome do ficheiro binário
// Escreve na consola as varias paragens do percurso armazenado
void mostraPercurso(char *nomeF) {
    FILE *f;
    struct paragem p;

    f = fopen(nomeF, "rb");
    if(f == NULL) {
        printf("Erro no acesso ao ficheiro\n");
        return;
    }

    while(fread(&p, sizeof(struct paragem), 1, f) == 1)
        printf("%s: %d\n", p.nome, p.minutos);

    fclose(f);
}


int main() {

    mostraPercurso("cp_ex3.dat");

    orDest("cp_ex3.dat");

    printf("\nParagem: %d\n", existeParagem("cp_ex3.dat", "Porto"));

    printf("\nLigacao: %d\n", liga("cp_ex3.dat", "Porto", "Pombal"));

    /*ler("valoresEx2.bin");
    soma("valoresEx2.bin");*/

    return 0;
}