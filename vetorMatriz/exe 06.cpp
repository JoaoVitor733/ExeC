#include <iostream>
using namespace std;

int main(){
	
   int A[4], l, aux = 0, J = 3;
	
	for (l = 0; l < 4; l++){
 	  cout << "\nDigite o " << 1+l << "o. valor: ";
  	  cin >> A[l];
   }  
   
   for (l = 0 ; l < 2 ; l++){
 	  aux = A[l];
 	  A[l] = A[J];
 	  A[J] = aux ;
 	  J --;
   }  
   
    cout << "\nVetor A: ";
   for (l = 0; l < 4; l++){
 	   cout << A[l] << " ";
   }  
}
