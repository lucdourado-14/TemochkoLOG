#include <stdio.h>

int main () {
    int valor[10];
    int i;
   
    int A = 0;
    int B = 0;
    int C = 0;

    for (i=0; i < 10; i++) {
        printf("Digite um número de 1 a 5\n", (i+1));
        scanf("%d", &valor[i]);
        if (valor[i] == 2)
        {
            A += 1;
        }
        if (valor[i] == 3)
        {
            B += 1;
        }
        if (valor[i] == 5)
        {
            C += 1;
        }

    }

    printf ("O número a (2) apareceu %d vezes. \n", A);
    printf ("O número b (3) apareceu %d vezes. \n", B);
    printf ("O número c (5) apareceu %d vezes. \n", C);


    return 0;
}