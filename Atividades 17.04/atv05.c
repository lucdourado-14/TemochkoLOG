#include <stdio.h>

int main () {
    int valor[20];
    int i;
    int soma = 0;

    for (i=0; i < 20; i++) {
        printf("Digite o número %d\n", (i+1));
        scanf("%d", &valor[i]);

    }
    printf ("Somando os 10 primeiros: \n");

    for (i=0; i < 10; i++) {
       soma = soma + valor[i];
    
    }
    printf("A soma é %d", soma);
    return 0;
}