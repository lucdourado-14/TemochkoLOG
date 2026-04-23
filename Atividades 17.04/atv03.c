#include <stdio.h>

int main () {
    int valor[10];
    int i;

    for (i=0; i < 10; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[i]);

    }
    printf ("Retornando os valores em posicao par: \n");

    for (i=1; i < 10; i+= 2) {
        
        printf ("%d\n", valor[i]);
    
    }
    return 0;
}