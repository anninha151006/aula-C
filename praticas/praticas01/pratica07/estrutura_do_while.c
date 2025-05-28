#include <stdio.h>

int main(){
int nota = 0;
printf("Digite uma nota: \n");
scanf("%i", &nota);
do {
} while (nota < 1 || nota > 10);
scanf("%i", &nota);
printf("Nota invalida. Tente novamente! \n");


    return 0;
}