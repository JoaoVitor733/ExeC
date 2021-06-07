  /*
Elabore um algoritmo que leia vários conjuntos de três números inteiros em ordem crescente, 
calcule e escreva para cada um sua soma, seu produto e sua média.
 O algoritmo deverá finalizar quando o conjunto não for digitado em ordem crescente. 
*/

#include <iostream>
using namespace std;

int main (){

 int N1, N2, N3, Soma, Produto;
 float Media;

   
   do{

        cout << "\nDigite 3 numeros em ordem crescente: ";
        cin >> N1 >> N2 >> N3;

     if((N1 < N2) && (N2 < N3)){ 
         Soma = (N1+N2+N3);
         Produto = (N1*N2*N3);
         Media = (N1+N2+N3)/3;

         cout << "\nA soma do conjunto e = " << Soma;
         cout << "\no produto e = " << Produto;
         cout << "\ne a media = " << Media;
     
     }
     
  }while ((N1 < N2) && (N2 < N3));
  
     
}