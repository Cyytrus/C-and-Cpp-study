#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num = 1, num2 = 5;
  
  printf("Contando...\n");
  
  // enquanto o num for menor ou igual a 10, ele aumentará de 1 em 1, até 10
  do
  {
    printf("%d\n", num);
    num++;
  }
  while(num <= 10);

  // fazendo uma contagem regressiva:
  printf("Contagem regressiva....\n");
  
  do
  {
    printf("%d\n", num2);
    num2--;
  }
  while(num2 <= 5 && num2 >= 0);

  return 0;
}

/*
Do -> lê primeiro e depois verifica a condição, definindo a decisão a ser tomada

while, lê a condição e depois executa o bloco

*/