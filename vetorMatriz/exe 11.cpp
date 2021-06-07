#include <iostream>
using namespace std;

int main(){

  int A[10], eleI = 0, eleP = 0;
  
  for(int l = 0; l < 10 ; l++){
   	   A[l] = l*2;
   	   if(A[l] % 2 == 0) {
   	   	eleP = eleP + A[l];
	  }else{
	  	eleI = eleI + A[l];
	  }  
  }
  
   for(int l = 0; l < 10 ; l++){
   	 cout << A[l] << " ";
   }
   
   cout << "\nA soma dos elementos pares e = " << eleP;
   cout << "\nA soma dos elementos impares e = " << eleI;
  
}
