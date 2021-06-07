  /*
Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores
*/

#include <iostream>
using namespace std;

int main(){
    
  int N, cont, Dive;
  
  cout << "Digite um numero (INTEIRO): ";
  cin >> N; //4

  for(cont = 1; (cont <= N); cont++){
    if(N%cont == 0){
      cout << "\nO numero " << cont << " e divisor do " << N;
    }

  }
  
}