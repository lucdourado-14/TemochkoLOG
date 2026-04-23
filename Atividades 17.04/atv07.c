#include <stdio.h>

int main () {
    int valor[30];
    int i;
    int soma = 0;
    int menor;
    int maior;

    for (i=0; i < 30; i++) {
        printf("Digite o número %d\n", (i+1));
        
        scanf("%d", &valor[i]);
        
        if (i == 0 || valor[i] < menor)
        {
            menor = valor[i];
        }
        
        if (i == 0 || valor[i] > maior)
        {
            maior = valor[i];
        }
        
        soma = soma + valor[i];

    }
    int media;
    media = (soma / 30);
   

    for (i=0; i < 30; i++) {
       if (valor[i] % 2==0)
       {
        printf ("%d é par\n", valor[i]);
       }
       
    
    }

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    for (i=0; i < 30; i++) {
        if (valor[i] > media)
        {
         printf ("%d, ", valor[i]);
        }
        
     
     }
     printf ("sao maiores que a media do grupo");

    return 0;
}