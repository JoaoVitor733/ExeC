/*
Elabore um algoritmo que leia 15 números reais e escreva o maior e o menor entre os números lidos.
*/

#include <iostream>  
using namespace std;

int main(){

    int N;
    float Numeros, Maior , Menor;  

    for (N=1;(N <= 15); N++){

       cout << "\nDigite um numero real: ";
       cin >> Numeros;

      if(N == 1){
         Maior = Numeros;
         Menor = Numeros;
      }else{ 
          if (Maior < Numeros){
              Maior = Numeros;
      
          }else{
              Menor = Numeros;      
          }  
      } 
    }
    cout << "\nO maior " << Maior << " e o " << Menor << " menor entre os numeros lidos"; 
}  