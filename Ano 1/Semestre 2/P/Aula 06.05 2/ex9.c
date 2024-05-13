#include <stdio.h>

// Versão A
// Recebe nome de ficheiro de texto com notas de alunos
// Apresenta na consola o número de alunos e número de provas
void printDadosA(char *nomeF){
    FILE *f;
    int a, b;

    f = fopen(nomeF, "r");
    if(f == NULL){ printf("Erro no acesso ao ficheiro\n"); return;}

    while(fgetc(f) != ':')  // Procurar o caracter relevante -> ':'
        ;
    fscanf(f, "%d", &a);    // A seguir está um inteiro

    while(fgetc(f) != ':')  // Voltar a procurar o caracter relevante -> ':'
        ;
    fscanf(f, "%d", &b);    // A seguir está o outro inteiro

    fclose(f);
    printf("Versao A: Alunos: %d\tProvas: %d\n", a, b);
}

// Versão B
// Recebe nome de ficheiro de texto com notas de alunos
// Apresenta na consola o número de alunos e número de provas
void printDadosB(char *nomeF){
    FILE *f;
    int a, b;

    f = fopen(nomeF, "r");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro\n"); return;
    }

    fscanf(f, " %*[^:] : %d", &a);
    fscanf(f, " %*[^:] : %d", &b);

    fclose(f);
    printf("Versao B: Alunos: %d\tProvas: %d\n", a, b);
}

// Versão C
// Recebe nome de ficheiro de texto com notas de alunos
// Apresenta na consola o número de alunos e número de provas
void printDadosC(char *nomeF){
    FILE *f;
    int a, b;

    f = fopen(nomeF, "r");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro\n"); return;
    }

    fscanf(f, " Numero de alunos: %d", &a);
    fscanf(f, " Numero de provas: %d", &b);

    fclose(f);
    printf("Versao C: Alunos: %d\tProvas: %d\n", a, b);
}

// Recebe nome de ficheiro de texto com notas de alunos
// Apresenta na consola as notas finais de cada aluno
void calculaNotasFinais(char *nomeF){
    FILE *f;
    int nota;

    f = fopen(nomeF, "r");
    if(f == NULL){
        printf(f,"%*[^:]: %d",nota);
        printf("Erro no acesso ao ficheiro\n"); return;
    }


    fclose(f);
}

int printDados(char *nomeF){
    FILE *f;
    int c,i=0;
    char st[10],x;
    f = fopen(nomeF, "r");
    if(f == NULL){
        printf("Erro no acesso ao ficheiro\n"); return 1;
    }
    printf("\n-------INICIO LEITURA-------\n");

    printf("\n-------METODO 1-------\n\n");
    while((c = fgetc(f))!= EOF)
        putchar(c);

    printf("\n-------METODO 2-------\n\n");
    while(fgets(st,10,f) != NULL)
        printf("%s",st);

    printf("\n-------METODO 3-------\n\n");
    while(fscanf(f,"%c",&x) != EOF){
        if(i==0)
            printf("%i.: ",i++);
        putchar(x);
        if(x == '\n')
            printf("%i.: ",i++);
    }

    printf("\n-------FIM LEITURA-------\n\n");

    fclose(f);
    return 0;
}


int main(){

    // 3 versões para mostrar o número de alunos e de provas
    printDadosA("notas_ex9.txt");
    printDadosB("notas_ex9.txt");
    printDadosC("notas_ex9.txt");

    calculaNotasFinais("notas_ex9.txt");


    return 0;
}