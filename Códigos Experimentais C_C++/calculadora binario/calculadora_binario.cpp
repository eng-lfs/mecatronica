#include stdio.h
#include stdlib.h
#include string.h

int num, resto, quoc, cont = 0;
char binario[10] = ;


void converte(int num){
    do{
        quoc = num2;
        resto = num%2;
        quoc = num;

        if(resto == 1)  strcat(binario, 1);
        else            strcat(binario, 0);
        cont++;

    }while(quoc = 2);

}

int main(){

    printf("\nDigite um numero ");
    scanf("%d", &num);
    getchar();
    converte(num);
    printf("\nSeu numero em binario eh %s \n", binario);
    system(pause);
    return 0;
}

