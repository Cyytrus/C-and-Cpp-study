#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

// PARA NÃO TER Q FICAR COLOCANDO O STD TODA HORA, USA-SE ISSO AQUI:

using namespace std;

int main()
{

  // Definindo uma string
  string palavra;

  // Imprimindo na tela
  cout << "Digite uma palavra: ";

  // Entrando com uma palavra
  cin >> palavra;

  // Imprimindo a palavra
  cout << "\n A palavra é: " << palavra;

  return 0;
}