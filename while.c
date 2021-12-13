#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num = 1, num2 = 5;
  
  printf("Contando...\n");
  
  // enquanto o num for menor ou igual a 10, ele aumentará de 1 em 1, até 10
  while(num <= 10)
  {
    printf("%d\n", num);
    num++;
  }

  // fazendo uma contagem regressiva:
  printf("Contagem regressiva....\n");
  
  while(num2 <= 5 && num2 >= 0)
  {
    printf("%d\n", num2);
    num2--;
  }

  return 0;
}

/*

++ e -- servem para contar APENAS de 1 em 1, para mais valores utiliza-se:

variável = variável + 2,3, 4 etc......

*/