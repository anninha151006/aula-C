#include <stdio.h>

int main () {
    char tecla = 26;
    printf("--> Pressione uma tecla, em seguida de ENTER:");
    scanf ("%c", &tecla);
    getchar(); //ler o /n da leitura anterior

    printf("Voce pressionou a tecla '%c'\n", tecla);

    printf("--> Pressione uma tecla, em seguida de ENTER:");
    scanf ("%c", &tecla);
    
    printf("Voce pressionou a tecla '%c'\n", tecla);

    return 0;
}