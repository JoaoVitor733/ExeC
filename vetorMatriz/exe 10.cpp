#include <iostream>
using namespace std;

int main(){

   int A[5], B[5], somaA = 0, C[5];
   
   for(int l = 0; l < 5 ; l++){
		  cout << "\nDigite o " << l << "o. valor para o vetor A: ";
  	      cin >> A[l];
  	      cout << "\nDigite o " << l << "o. valor para o vetor B: ";
  	      cin >> B[l];
  	      somaA = somaA + A[l] ;
  	      C[l] = A[l]+B[l];
	}
	
	cout << "\nA soma dos elementos de A = " << somaA;
	
	cout <<"\nA soma dos dois vetores na mesma posicao: ";
	
	for(int l = 0; l < 5 ; l++){
	   cout << C[l]	<< " ";
    }
}
