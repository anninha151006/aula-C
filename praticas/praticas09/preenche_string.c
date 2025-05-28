#include <stdio.h>
#include <string.h>

int main(){
int string [11];

string[0] = 1;
string[1] = 1;
string[2] = 2;
string[3] = 3;
string[4] = 5;
string[5] = 1;
string[6] = 1;
string[7] = 2;
string[8] = 3;
string[9] = 5;

memset(string, '\0', sizeoff (string));
char tecla;
scanf("%c", &tecla);
memset (string, tecla, 10);
printf("%s\n", string);
memset(string, '*', 5);

printf("%s\n", &string);
string[5] = '\0';
printf("%s\n", &string);

for(int i=0; i<10; i++) {
    printf("%c", string[i]);
}
printf("\n");
    return 0;
}