#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Adicionando variáveis de cálculo com limite máximo de 5
  float n1, n2, n3, n4, n5;

  // Adicionando variável do switch case
  int opcao, opcao2;

  // Adicionando quantidade de números que deseja calcular
  int quantNumeros;

  // Adicionando opcoes de meios de calculo
  int tipoCalculo;

  printf("Quantos números deseja calcular?\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 2:
    printf("Digite os números que deseja calcular:");
    scanf("\n %f %f", &n1, &n2);
    break;

  case 3:
    printf("Digite os números que deseja calcular:");
    scanf("\n %f %f %f", &n1, &n2, &n3);
    break;
  case 4:
    printf("Digite os números que deseja calcular:");
    scanf("\n %f %f %f %f", &n1, &n2, &n3, &n4);
    break;
  case 5:
    printf("Digite os números que deseja calcular:");
    scanf("\n %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    break;

  default:
    printf("opcao invalida\n");
    break;
  }
  printf("Agora selecione o que irá fazer com esses números:\n");
  printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
  scanf("%d", &opcao2);

  switch (opcao2)
  {
  case 1:
    printf("Voce escolheu a opcao de SOMA:\n");
    if (opcao == 2)
    {
      printf("O Resultado da soma é: %.2f\n", n1 + n2);
      break;
    }
    else if (opcao == 3)
    {
      printf("O Resultado da soma é: %.2f\n", n1 + n2 + n3);
      break;
    }
    else if (opcao == 4)
    {
      printf("O Resultado da soma é: %.2f\n", n1 + n2 + n3 + n4);
      break;
    }
    else if (opcao == 5)
    {
      printf("O Resultado da soma é: %.2f\n", n1 + n2 + n3 + n4 + n5);
      break;
    }
    else
    {
      printf("opcao invalida\n");
      break;
    }

  case 2:
    printf("Voce escolheu a opcao de SUBTRACAO:\n");
    if (opcao == 2)
    {
      printf("O Resultado da subtracao é: %.2f\n", n1 - n2);
      break;
    }
    else if (opcao == 3)
    {
      printf("O Resultado da subtracao é: %.2f\n", n1 - n2 - n3);
      break;
    }
    else if (opcao == 4)
    {
      printf("O Resultado da subtracao é: %.2f\n", n1 - n2 - n3 - n4);
      break;
    }
    else if (opcao == 5)
    {
      printf("O Resultado da subtracao é: %.2f\n", n1 - n2 - n3 - n4 - n5);
      break;
    }
    else
    {
      printf("opcao invalida\n");
      break;
    }
  case 3:
    printf("Voce escolheu a opcao de MULTIPLICACAO:\n");
    if (opcao == 2)
    {
      printf("O Resultado da multiplicacao é: %.2f\n", n1 * n2);
      break;
    }
    else if (opcao == 3)
    {
      printf("O Resultado da multiplicacao é: %.2f\n", ((n1 * n2) * n3));
      break;
    }
    else if (opcao == 4)
    {
      printf("O Resultado da multiplicacao é: %.2f\n", (((n1 * n2) * n3) * n4));
      break;
    }
    else if (opcao == 5)
    {
      printf("O Resultado da multiplicacao é: %.2f\n", ((((n1 * n2) * n3) * n4) * n5));
      break;
    }
    else
    {
      printf("opcao invalida\n");
      break;
    }
  case 4:
    printf("Voce escolheu a opcao de DIVISAO:\n");
    if (opcao == 2)
    {
      printf("O Resultado da divisao é: %.2f\n", n1 / n2);
      break;
    }
    else if (opcao == 3)
    {
      printf("O Resultado da divisao é: %.2f\n", ((n1 / n2) / n3));
      break;
    }
    else if (opcao == 4)
    {
      printf("O Resultado da divisao é: %.2f\n", (((n1 / n2) / n3) / n4));
      break;
    }
    else if (opcao == 5)
    {
      printf("O Resultado da divisao é: %.2f\n", ((((n1 / n2) / n3) / n4) / n5));
      break;
    }
    else
    {
      printf("opcao invalida\n");
      break;
    }
  }

  return 0;
}