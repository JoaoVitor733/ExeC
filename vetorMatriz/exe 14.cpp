#include <iostream>
using namespace std;

int main(){
	
	int A[10], cont = 0;
	bool flag = true;
	
   for(int l = 0; l < 10 ; l++){
    	  cout << "\nDigite o " << l << "o. valor para o vetor A: ";
  	      cin >> A[l];
   }
   
   for(int l = 0; l < 10 ; l++){		 
   	    if(A[l] != A[9-l]){
   	       flag = false;
   	}
  }
   
   
   if(flag){
   	  cout << "E um palindromo!! ";
   }else{
   	  cout << "Nao e palindromo!! ";
   }
   
	
}
