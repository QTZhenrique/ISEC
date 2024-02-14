// Programação 2023/24
// Aula Prática 2B - Strings

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Recebe string
// Mostra na consola a string escrita por ordem inversa
// A função não recebe o número de caracteres da strings, pelo que essa é a sua primeira tarefa

//Ex 6
void printInv(char s[]){
    int i;

    for(i=0; s[i]!='\0'; i++)
        ;
    i--;

    // Possivel alternativa ao código que surge nas linhas anteriores: i = strlen(s)-1;

    while(i>=0)
        putchar(s[i--]);
}

// Recebe string
// Mostra na consola as várias palavras da string, uma em cada linha

//Ex 7
void printPal(char s[])
{
    int i = 0;
    for (i=0; s[i]!='\0'; i++)
    {
        if (s[i] == ' ')
        {
            printf(("\n"));
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}

//Ex 8

void ex8(char s1[], char s2[], char s3[])
{
    if(strcmp(s1,s2) == 0)
        strcpy(s3, "Iguais");
    else if(strlen(s1) == strlen(s2))
        strcpy(s3, "Tamanho igual");
    else if(strcmp(s1,s2) < 0)
    {
        strcpy(s3,s1);
        strcpy(s3,s3);
    }
    else
    {
        strcpy(s3,s2);
        strcpy(s3,s1);
    }
}

int contarPalavras(const char *string)
{
    int contador = 0;
    int Palavra = 0;

    // Percorre cada caractere da string
    while (*string) {
        // Se o caractere atual não é um espaço em branco, tabulação ou quebra de linha
        if (*string != ' ' && *string != '\t' && *string != '\n') {
            // Se não estivermos dentro de uma palavra, incrementamos o contador
            if (Palavra == 0) {
                contador++;
                Palavra = 1;  // Marcamos que estamos dentro de uma palavra
            }
        } else {
            Palavra = 0;  // Marcamos que não estamos mais dentro de uma palavra
        }

        // Avança para o próximo caractere na string
        string++;
    }

    return contador;
}


int main(){
    char st1[30] = "Hoje e domingo!";

    int resultado = contarPalavras(st1);

    printf("Numero de palavras: %d\n", resultado);

    return 0;
}