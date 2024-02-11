// Programação 2023/24
// Aula Prática 2B - Strings

#include <stdio.h>
#include <string.h>

// Recebe string
// Mostra na consola a string escrita por ordem inversa
// A função não recebe o número de caracteres da strings, pelo que essa é a sua primeira tarefa
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
void printPal(char s[]){
    printf("\nFalta implementar a funcao\n");
}


int main(){
    char st1[15] = "Ola Mundo!";

    printInv(st1);

    printPal(st1);

    return 0;
}