#include <stdio.h>

int main () {
    int valor[10];
    int i;

    for (i=0; i < 10; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[i]);

    }
    printf ("Digitando os numeros em ordem: \n");

    for (i=0; i < 10; i++) {
        
        printf ("%d\n", valor[i]);
    
    }
    return 0;
}