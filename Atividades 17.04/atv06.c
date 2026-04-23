#include <stdio.h>

int main () {
    int valor[10];
    int inverso[10];
    int i;

    for (i=0; i < 10; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[9 - i]);

    }
    printf ("Retornando o índice reverso: \n");

    for (i=0; i < 10; i++) {
        
        printf ("%d\n", valor[i]);
    
    }
    return 0;
}