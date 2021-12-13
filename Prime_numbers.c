#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, aux = 0, numb;

  printf("Digite um número e veja se ele é primo: ");
  scanf("%d", &numb);

  for(i = 1; i <= numb; i++)
  {
    if(numb % i == 0)
    {
      aux++;
    }
  }

  if(aux == 2)
  {
    printf("O número %d é primo!\n", numb);
  }
  else
  {
    printf("O número %d não é primo!\n", numb);
  }
  return 0;
}

