#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int n1, n2;
  printf("Digite um numero inteiro:");
  scanf("%d", &n1);
  printf("Digite outro numero inteiro:");
  scanf("%d", &n2);

  printf("Raiz da soma dos numeros: %.2f", sqrt(n1+n2));
  printf("\nResto da da divisão de %d por %d: %.2f",n1, n2, (double)(n1%n2));

  return 0;
}
