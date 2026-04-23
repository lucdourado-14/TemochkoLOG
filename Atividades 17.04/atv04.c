#include <stdio.h>

int main () {
    int valor[15];
    int i;

    for (i=0; i < 15; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[i]);

    }
    printf ("Retornando os numeros maiores que 10: \n");

    for (i=0; i < 15; i++) {
        if (valor[i] > 10) {
            printf ("%d\n", valor[i]);
        }
        
        ;
    
    }
    return 0;
}