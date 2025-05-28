#include <stdio.h>

int main(){
float total = 0.0f;
int nota_fiscal [5][3];

printf("insira os numeros");
for(int i=0; i<5; i++) {
    scanf("%f", &nota_fiscal[i][0]);
    scanf("%f", &nota_fiscal[i][1]);
    nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
    total = total + nota_fiscal[i][2];
}
for(int i=0; i<5; i++) {
    for(int j=0; j<3;  j++){
        printf("%i", nota_fiscal[i][j]);
    }
    printf("\n");
}
printf("Valor total %1.f", total);

    return 0;
}