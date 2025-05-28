#include <stdio.h>

int main(){
int numeros = 0;
int numero = 0;
int achou = -1;
scanf("%i", &numero);
scanf("%i", &numeros);
for(int i=0; i<10; i++){   
    if (numero [i] == numero){
        achou = i;
    }
}

if (numero > 0){
    printf("O numero nao foi encontrado!");
}


    return 0;
}