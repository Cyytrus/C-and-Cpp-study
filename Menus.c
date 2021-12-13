#include <stdio.h>
#include <stdlib.h>

/*
Exemplo de Menu utilizando while e switch case
*/

int main()
{

  int opcao;

  while(opcao < 1 || opcao > 5)
  {

    printf("Escolha uma opcao:\n");
    printf("1 - Opcao 1\n");
    printf("2 - Opcao 2\n");
    printf("3 - Opcao 3\n");
    printf("4 - Opcao 4\n");
    printf("5 - Opcao 5\n");

    scanf("%d", &opcao);

    switch(opcao)
    {
      case 1:
        printf("Opcao 1 foi escolhida\n");
        break;
      case 2:
        printf("Opcao 2 foi escolhida\n");
        break;
      case 3:
        printf("Opcao 3 foi escolhida\n");
        break;
      case 4:
        printf("Opcao 4 foi escolhida\n");
        break;
      case 5:
        printf("Opcao 5 foi escolhida\n");
        break;
      default:
      printf("Opcao invalida\n");
    }
  }

  return 0;
}

