#include <stdio.h>

int main () {
    
    float n;
    char repeat;

    do {
        
        printf("Digite um número: \n");
        scanf("%f", &n);
        
        printf("O seu dobro é %.2f\n", (2*n)); //Funcao principal da calculadora
        
        printf("Você gostaria de dobrar outro número?\n"); //Definir repeticao ou fim da funcao
        scanf(" %c", &repeat);

    
        while (repeat != 's' && repeat != 'S' && repeat != 'n' && repeat != 'N') {
            
            printf("Resposta inválida, digite S de sim ou N de não...\n");
            scanf(" %c", &repeat);
        } //Checagem da validade de caracter para repeticao


    } while (repeat == 's' || repeat == 'S' );

    printf("Obrigado e volte sempre!\n");

    return 0;
}
