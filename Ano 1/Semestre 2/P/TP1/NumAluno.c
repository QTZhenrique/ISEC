#include <stdio.h>

// Recebe:
// Endereço inicial de uma tabela de inteiros (tab)
// Dimensão de uma tabela de inteiros (tam)
// Endereço de uma variável inteira (contaP)

// Devolve número de elementos duplicados (número de elementos que aparecem exatamente 2 vezes na tabela)
// Coloca na variável referenciada por contaP o número de picos do array
// Considera-se que um pico é um elemento do array que está rodeado por valores menores à sua esquerda e à sua direita
int desafio1(int *tab, int tam, int *contaP) {
    int duplicados = 0;

    for (int i = 0; i < tam; i++)
    {
        int contador = 0;

        for (int j = 0; j < tam; j++)
        {
            if (i != j && tab[i] == tab[j])
            {
                contador++;

                if(contador > 2)
                {
                    break;
                }
            }
        }

        if (contador == 1)
        {
            duplicados++;
        }

        if (i > 0 && i < tam - 1 && tab[i] > tab[i - 1] && tab[i] > tab[i + 1] && tab[i] != -1) {
            (*contaP)++;
        }
    }

    return duplicados / 2;
}

int main() {
    int tab1[5] = {5, 3, 3, 2, 2};
    int tab2[10] = {-3, -2, 0, 0, 1, 4, 3, -2, 9, 1};
    int tab3[8] = {1, 1, 4, 10, 4, 8, 1, 9};
    int tab4[8] = {4, 12, 3, 4, 4, 2, 3, 12};
    int c1 = 0, c2 = 0, c3 = 0, d1, d2, d3;

    d1 = desafio1(tab1, 5, &c1);
    d2 = desafio1(tab2, 10, &c2);
    d3 = desafio1(tab3, 8, &c3);

    printf("%d %d %d %d %d %d\n", d1, c1, d2, c2, d3, c3);

    return 0;
}
