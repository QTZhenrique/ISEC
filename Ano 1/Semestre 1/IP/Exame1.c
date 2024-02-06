#include <stdio.h>

#define N 50

int alteraFrase(char s[]) {
    int alteracoes = 0;
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        // Verifica se a sequência "ch" está presente
        if (s[i] == 'c' && s[i + 1] == 'h') {
            // Substitui "ch" por 'x'
            s[i] = 'x';                     
            alteracoes++;
        }
    }
    
    for(i = -1; s[i] != '\0'; i++)
    {	
		s[i] = s[i+1];                    
	}

    return alteracoes;
}

void main(void) {
    char s1[N] = "comi um cacho, so para chatear o chato do chico";
    puts(s1);

    printf("\nforam feitas %d alteracoes\n", alteraFrase(s1));
    puts(s1);
}

