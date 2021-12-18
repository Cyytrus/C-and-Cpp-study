#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
  float vetor[3];

  printf("Digite um valor: ");
  scanf("%f", &vetor[0]);
  
  printf("Digite um valor: ");
  scanf("%f", &vetor[1]);
  
  printf("Digite um valor: ");
  scanf("%f", &vetor[2]);

  printf("Somando os vetores: ");
  printf("%.2f + %.2f + %.2f\n", vetor[0], vetor[1], vetor[2]);

  printf("A média da soma dos vetores é: %.2f\n", (vetor[0]+vetor[1]+vetor[2])/3);


  return 0;
}

*/

/* 
-------------------------- OTIMIZANDO O CÓDIGO --------------------------
*/

int main()
{
  float vetor[3];
  int i;

  for(i = 0; i < 3; i++)
  {

    printf("Digite um valor: ");
    scanf("%f", &vetor[i]);

  }

  printf("Somando os vetores: ");
  printf("%.2f + %.2f + %.2f\n", vetor[0], vetor[1], vetor[2]);

  printf("A média da soma dos vetores é: %.2f\n", ((vetor[0]+vetor[1]+vetor[2])/3));

  return 0;
}