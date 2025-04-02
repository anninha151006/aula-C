#include <stdio.h>

int main(){
    printf("----------------------------\n"); 
    printf("         NOTA LEGAL         \n");
    printf("----------------------------\n");
    printf("Item         Qde  Prc  Valor\n");
    printf("%-12s %03i %5.2f %3.2f\n", "Caneta Azul", 2, 2.0, 4.0);
    printf("%-12s %03i %5.2f %3.2f\n","Borracha", 1, 5.0, 5.0);
    printf("%-12s %03i %5.2f %3.2f\n","Apontador", 1, 4.0, 4.0);
    printf("----------------------------\n");
    printf("TOTAL...............R$ %2.2f\n", 9.00);
    
    
    return 0;
}