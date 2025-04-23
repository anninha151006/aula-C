#include <stdio.h>

int main() {
    int opcao = 0;

    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar Saldo\n");
    printf("3 - Ver recados\n");
    printf("4 - Ver ligacoes\n");
    printf("5 - Sair\n");

    printf("Escolha uma opcao ~~> ");
    scanf("%i", &opcao);
    



    switch(opcao) {
        case 1: printf("Seu saldo e de ~~> R$ 10.00\n"); break;
        case 2: printf("Digite 1 para R$ 10.00, 2 para R$ 20.00 ou 5 para R$ 50.00\n"); break;
        case 3: printf("Voce nao tem novos recados!\n"); break;
        case 4: printf(" O Ultimo numero foi 8888-8888\n"); break;
        case 5: printf ("Ate logo\n"); break;
        default: printf("Opcao invalida! Tente novamente\n");
    }





    return 0;
}