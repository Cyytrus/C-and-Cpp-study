#include <stdlib.h>
#include <stdio.h>

void main()
{
  // variável 1
  char palavra[255];

  // instrução
  printf("Digite uma palavra: ");


  /*  setbuff -> para entradas com mais de uma letra
      stdin -> Standard In -> Standard Input

  */
  setbuff(stdin, 0);

  // ler a string
  fgets(palavra, 255, stdin);

  // limpa os espaços de memória que não serão utilizados
  palavra[strlen(palavra)-1] = '\0';

  printf("%s\n", palavra);


  system("pause");
}