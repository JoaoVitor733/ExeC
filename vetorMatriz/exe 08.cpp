#include <iostream>
using namespace std;

int main(){
	
	int A[4], B[6];
  
  for (int l = 0; l < 6; l++){
  	if(l < 4){
 	  cout << "\nDigite o " << 1+l << "o. valor para o vetor A: ";
  	  cin >> A[l];
    }
  	  cout << "\nDigite o " << 1+l << "o. valor para o vetor B: ";
  	  cin >> B[l];	
   } 
   
   cout << "\nElementos comuns aos dois vetores: ";
   
   for(int l = 0; l < 4; l++){
   	  for(int c = 0; c < 6; c++){
   	  	if(A[l] == B[c]){
   	  	  cout << B[c] << " ";
   	   }
	 }
   }  
}
