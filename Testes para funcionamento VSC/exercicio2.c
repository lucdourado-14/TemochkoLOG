#include <stdio.h>

int main() {
    int opcao;

    printf("--- VOCE ENCONTROU UM GOBLIN ---\n");
    printf("1. Atacar com a espada\n");
    printf("2. Usar magia de defesa\n");
    printf("3. Beber poção de cura\n");
    printf("4. Tentar fugir da batalha\n");
    printf("Escolha uma opcao: ");

    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("voce errou seu ataque.\n");
            break;

        case 2:
            printf("um escudo de defesa te cerca: 30 pontos de dano bloqueados.\n");
            break;

        case 3:
            printf("voce recuperou 45 pontos de vida.\n");
            break;

        case 4:
            printf("voce corre, mas o goblin te persegue; voce nao consegue fugir.\n");
            break;

        default:
        printf("acao invalida! voce perdeu o turno.");
        break;

    }
return 0;
}
