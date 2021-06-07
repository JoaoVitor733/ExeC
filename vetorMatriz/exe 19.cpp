#include <iostream>
using namespace std;

int main(){
   
   int A[3],B[3], C[6], aux = 0;
   
   for (int l = 0; l < 3; l++){
   	 cout << "\nDigite o " << l+1 << "o. valor do vetor A: ";
   	 cin >> A[l];
   	 cout << "\nDigite o " << l+1 << "o. valor do vetor B: ";
   	 cin >> B[l];
   }
   
   cout << "\nOs vetores intercalados: ";
   for (int l = 0; l < 6; l = l+2){
   		C[l] = A[aux];
   		C[l+1] = B[aux];
   	    aux++;
   	    
   }

   for (int l = 0; l < 6; l++){
   	 cout << C[l] << " ";
   }
   
   cout << "\n" << aux;
}
