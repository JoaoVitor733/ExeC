  /*
Escreva um algoritmo que encontre o n-ésimo número primo maior que 11,
 sendo n um número digitado pelo usuário.
*/
#include <iostream>
using namespace std;

int main(){

 int N, cont = 1 , Primo, qtdDive , Numero = 12, cont2 ;

 
    cout << "\nDigite o n-esimo numero primo ( maior que 11) que deseja encontrar: ";
    cin >> N;
    
    while(cont <= N) {

       qtdDive = 0;
       for(cont2 = 1;(cont2<=Numero); cont2++){

         if(Numero%cont2 == 0){
           qtdDive++;
            
         }
       }
         if(qtdDive == 2){
            Primo = Numero;
            cont++;

         }
           Numero++;
    }

     cout << "o n-esimo (" <<N << "o.)primo ( maior que 11) = " << Primo ; 
}