#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char verbo[21];
    memset (verbo,'\0', sizeoff(verbo));

    char pronomes[6][5] =  {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
    char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};

    printf("Entre com um verbo terminado em AR:  ");
    scanf("%s", verbo);

    int tamanho = strlen(verbo);

    for(int i =0; i<tamanho; i++){
        verbo[i] = toupper(verbo[i]);
    }

    int tamanho = strlen(verbo);
    int ultima_posicao = tamanho -1;
    int penultima_posicao = ultima_posicao -1;

    if (verbo[ultima_posicao] == 'r' && verbo[penultima_posicao] == 'a') {
        printf("conjugacao do verbo %s no presente do indicativo\n", verbo);
        char radical[21];
        strcpy(radical, verbo); // radical = verbo
        radical[penultima_posicao] = '\0';
        for(int i=0; i<6; i++){
            char conjugacao[61];
            strcpy(conjugacao, pronomes[i]);
            strcat(conjugacao, " "); // conjugacao = conjugacao + " ";
            strcat(conjugacao, radical);
            strcat(conjugacao, sufixos[i]);
            printf("%s\n", conjugacao);
        }
    }else {
        printf("Verbo %s nao termina em AR!\n");
    }


    return 0;
}