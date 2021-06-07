  /*
 Elabore um algoritmo que escreva todos os números entre 1000 e 1999 que quando divididos por 10
  resultam em um resto igual a 2. 
*/

#include <iostream>
using namespace std;

int main (){

 int N;

   for (N = 1000; (N <= 1999); N++){
      if(N % 10 == 2){
        cout <<" \n" << N;
      }
    } 
}