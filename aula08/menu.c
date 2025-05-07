#include <stdio.h>
#include <stdlib.h>

#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define reset "\e[0m"

int main() {
    int opcao = 0;
    while (opcao != 4) {
    system ("clear");
    printf(CYN);
    printf("+-----------------------+\n");
    printf("|  .* MENU PRINCIPAL .* |\n");
    printf("+-----------------------+\n");
    printf("| 1- Novo Jogo        .*|\n");
    printf("| 2- Ver Score        .*|\n");
    printf("| 3- Sobre o Jogo     .*|\n");
    printf("| 4- Sai              .*|\n");
    printf("+-----------------------+\n");
    printf(".*Escolha uma opcao ~~>    ");
    printf(reset);
    scanf("%i", &opcao);
    while (getchar() != '\n');
    switch(opcao){
        case 1:{
            system ("clear");
            int nivel = 0;
            printf("Nivel do Jogo\n");
            printf("1 - Facil\n");
            printf("2 - Medio\n");
            printf("3 - Dificil\n");
            printf("Escolha um nivel ~~>");
            scanf("%i", &nivel);
            while (getchar() != '\n');
            break;

        }
        case 2: {
            system ("clear");
            printf("Score do jogo\n");
            printf("1 - Jogador A - 1000 pontos\n");
            printf("2 - Jogador B - 700 pontos\n");
            printf("3 - Jogador C - 500 pontos\n");
            printf("4 - Jogador D - 300 pontos\n");
            printf("5 - Jogador E - 100 pontos\n");
            printf("Pressione ENTER para continuar....");
            while (getchar() != '\n');
            break;
        }
        case 3:{
            system ("clear");
            printf("Sobre o jogo\n\n ");
            printf("Desenvolvido em C\n");
            printf("Por dev1 e dev2\n");
            printf("Copyright(C) 2025");
            printf("Pressione ENTER para continuar....");
            while (getchar() != '\n');
            break;
            }
        case 4:{
        printf("Ate logo!\n");
        break;
    }
        default: printf("opcao invalida! Tente novamente.\n");
    }
}


return 0;
}