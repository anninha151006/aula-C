#include <stdio.h>

int main(){
    //int numero 1;
    //int numero 2;
    //int numero 3;
    //int numero 4;
    //int numero 5;
    //int numero 6;
    //int numero 7;
    //int numero 8;
    //int numero 9;
    //int numero 10;
                                                              //0 1 2 3 4 5 6 7 8 9
    int numeros [10]; //matriz unidimensional = vetor = array = | | | | | | | | | |
    numeros [0] = 9;
    numeros [1] = 8;
    numeros [2] = 4;
    numeros [3] = 4;
    numeros [4] = 0;
    numeros [5] = 5;
    numeros [6] = 2;
    numeros [7] = 1;
    numeros [8] = 10;
    numeros [9] = 6;

    int maior = 0;
    int menor = 0;

    printf("Entere com 10 numeros inteiros\n");
    for(int i =0; i<10; i ++){ 
        printf("Numero %i: ", i+1);
        scanf("%i", &numeros[i]);

        if (maior < numeros[i]){
            menor = numeros[i];
        }

        if (maior > numeros[i]){
            menor = numeros[i];
        }

    }

printf("Seus numeros foram: ");
for(int i=0; i<10; i++){
    printf("%i", numeros[i]);
}
printf("\n");
printf("O maior numero foi %i e o menor numero foi %i", maior, menor);



}