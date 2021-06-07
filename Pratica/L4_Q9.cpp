  /*
 Elabore um algoritmo que escreva os n primeiros termos da sequência:0 1 1 2 3 5 8 13 21 34 55 89 … 
*/

#include <iostream>
using namespace std;

int main(){

  int N, Ant1 = 1, Ant2 = 1, cont, soma;

  cout << "Digite a quatidade de termos dejesada: ";
  cin >> N;

  if(N == 1)
    cout << " " <<  Ant1;
  if(N>=2){  
    cout << " " <<  Ant1;
    cout << " " <<  Ant2;
  }
  for(cont = 3;(cont <= N); cont++){

    soma = (Ant1+Ant2);

    cout << " " <<  soma;

    Ant1 = Ant2;
    Ant2 = soma;

   }
}