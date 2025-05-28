#include <stdio.h>

int main(){
int numero = 0;
int fatorial = 0;

printf("Digite um numero: ");
scanf("%i", &numero);

for (int i=numero; i>0; i--){
    scanf("%i", &fatorial);    
    (fatorial = fatorial *i);
    printf("\n");
    return 0;
}
}