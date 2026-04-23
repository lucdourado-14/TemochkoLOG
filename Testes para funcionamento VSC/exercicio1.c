#include <stdio.h>

//Professor, infelizmente nao consegui fazer funcionar o VSC 100% no Mac, entao nao consegui testar bem o programa. Muitos alunos também falaram do mesmo problema de nao saber configurar corretamente, seria bom a gente pensar em algo sobre para facilitar o ensino.
int main() {
    float a;
    float b;
    int opcao;

    printf("Digite um numero:\n");
    scanf("%f", &a);

    printf("Digite outro numero:\n");
    scanf("%f", &b);

    printf("--- MENU ---\n");
    printf("1. Adicionar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Escolha uma opcao: ");

    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("%.2f + %.2f = %.2f\n", a, b, (a+b));
            break;

        case 2:
            printf("%.2f - %.2f = %.2f\n", a, b, (a-b));
            break;

        case 3:
            printf("%.2f * %.2f = %.2f\n", a, b, (a*b));
            break;

        case 4:
            
            printf("%.2f / %.2f = %.2f\n", a, b, (a/b));
        
            break;

        default:
            printf("Operacao inválida");
            break;

    }
return 0;
}
