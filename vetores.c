#include <stdio.h>
#include <stdlib.h>

int main()
{

  int vetor[3], i;

  vetor[0] = 5;
  vetor[1] = 10;
  vetor[2] = 15;

  //modificando vetores
  for(i = 0; i < 3; i++)
  {
    vetor[i] = vetor[i] + 1;
  }
  //lendo vetores
  printf("Posicao 0: %d\n", vetor[0]);
  printf("Posicao 1: %d\n", vetor[1]);
  printf("Posicao 2: %d\n", vetor[2]);
  

  for(i = 0; i < 3; i++)
  {
    printf("Posição %d : %d\n", i, vetor[i]);
  }
  
  //adicionando vetores
  for(i = 0; i < 3; i++)
  {
    scanf("%d", &vetor[i] );
  }
  for(i = 0; i < 3; i++)
  {
    printf("Posição %d : %d\n", i, vetor[i] );
  }

  return 0;
}
