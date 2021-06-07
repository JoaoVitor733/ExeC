#include <iostream>
using namespace std;

int main(){
	
	int A[4], B[4], l;
	
	for (l = 0; l < 4; l++){
 	 cout << "\nDigite o " << 1+l << "o. valor: ";
  	 cin >> A[l];
      
   }
	
   for (l = 0; l <= 4; l++){
 	 B[l] = A[3-l];
   }
   
    cout << "\nVetor A: ";
   for (l = 0; l < 4; l++){
 	 cout << A[l] << " ";	
   }
   
    cout << "\nVetor B: ";
   	for (l = 0; l < 4; l++){
 	 cout << B[l] << " ";	
    }
}

