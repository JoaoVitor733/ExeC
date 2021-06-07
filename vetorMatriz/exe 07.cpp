#include <iostream>
using namespace std;

int main(){

  int A[4]	, B[4], R[4], l;
  
  for (l = 0; l < 4; l++){
 	  cout << "\nDigite o " << 1+l << "o. valor para o vetor A: ";
  	  cin >> A[l];
  	  cout << "\nDigite o " << 1+l << "o. valor para o vetor B: ";
  	  cin >> B[l];
  	  R[l] = A[l] * B[l];
   } 
   
   cout << "\n\nRESULTADO";
   for (l = 0; l < 4; l++){
	 cout <<" \n\n\n\n" << "(" << l << ")" << A[l] << " * " << B[l] << " = " << R[l];
  }
	
}
