# include <stdio.h>

int main () {
    int numero = 0;

    printf("Entre um numero inteiro: ");
    scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;

    if (eh_divisivel_por_2){
        printf("O numero %i e par\n", numero);
    } else{
        printf("O numero %i e impar\n", numero);

    }

   


    return 0;
}