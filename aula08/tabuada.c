#include <stdio.h>

int main() {
    //int numero = 0;
    //while (numero < 1 || numero > 10)
    //printf("Entre com um numero inteiro entre 1 e 10: ");
    //scanf("%i", &numero);
    //while (getchar() != '\n'); //limpar buffer do teclado
//}

do{
    printf("Entre com um numero inteiro entre 1 e 10: ");
    scanf("%i", &numero);
    while (getchar() != '\n'); //limpar buffer do teclado
    while (numero < 1 || numero > 10)
}

    printf("A tabuada de %i e\n", numero);
    for(int i = 1; i <= 10; i++) { // 1 a 10
        printf("%i x %i = %i\n", i, numero, i * numero);
      }
  
      for(int i=10; i >=1; i--) { // 10 a 1
          printf("%i x %i = %i\n", i, numero, i * numero);
      
    }
    
}