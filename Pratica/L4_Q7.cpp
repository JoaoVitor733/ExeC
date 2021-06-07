 /*
Elabore um algoritmo que leia n números, calcule e escreva a soma dos números lidos.
 O algoritmo deverá finalizar quando o número 0 for digitado pelo usuário

*/

#include <iostream> 
using namespace std;

int main(){

   int N, Soma = 0;

   do{

     cout << "\nDigite um numero qualquer: ";
     cin >> N;
     
     Soma = (Soma + N);
   }while (N != 0);
  cout << "\nA soma dos numeros lidos foi igual a " << Soma;
}