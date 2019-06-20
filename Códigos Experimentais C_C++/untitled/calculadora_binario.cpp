#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num, resto, quoc, cont = 10, i;
char binario[10];

void converte(int num){
    do{
        quoc = num/2;
        resto = num%2;
        num = quoc;

        if(resto == 1)  binario[cont] = '1';
        else            binario[cont] = '0';
        cont--;

    }while(quoc >= 2);
    if(quoc == 1) binario[cont] = '1';
}

int main(){

    printf("\nDigite um numero ");
    scanf("%d", &num);
    getchar();
    converte(num);
    printf("\nSeu numero em binario eh: ");
    for(i = cont; i>0; i--){
        printf("%c", binario[i]);
    } 
    printf("\n");
    system("pause");
    return 0;
}

