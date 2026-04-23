#include <stdio.h>

int main () {
    int valor[8];
    int triplo[8];
    int i;

    for (i=0; i < 8; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[i]);
        triplo[i] = (3 * valor[i]);

    }
    printf ("Retornando o triplo de cada número: \n");

    for (i=0; i < 8; i++) {
        
        printf ("%d\n", triplo[i]);
    
    }
    return 0;
}