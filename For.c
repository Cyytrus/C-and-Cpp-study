#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;

  // Contador mais resumido utilizando for
  for(i = 1; i <= 10; i++)
  {
    printf("%d\n", i);
  }

  // tabuada exemplo
  for(i = 1; i <= 10; i++)
  {
    printf("5 X %d = %d\n", i, 5*i);
  }

  return 0;
}

