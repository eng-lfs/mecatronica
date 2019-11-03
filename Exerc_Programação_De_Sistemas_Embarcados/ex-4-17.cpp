#include <stdio.h>
#include <stdlib.h>

int main(void){
  int soma, i, n;
  for(i=14;i<25;i++){
    soma += i;
    n++;
  }
  printf("Media: %.2f", (double)soma/n);

  return 0;
}
