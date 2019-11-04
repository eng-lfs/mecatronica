#include <stdio.h>
#include <stdlib.h>

int main(void){
  char nome[] = "lucas";

  printf("Tamanho do vetor %d:", sizeof(nome));
  printf("\nConteudo: %s", nome);
  return 0;
}
