#include <iostream>
using namespace std;

int main(){
	
	int A[5],cont = 0;
	
	for(int l = 0; l < 5 ; l++){
		  cout << "\nDigite o " << l << "o. valor para o vetor A: ";
  	      cin >> A[l];
	}
	
	for(int l = 0; l < 5 ; l++){
		if(A[l] % 2 == 0){	   
		    cont++;
		}		
    }
    int P[cont];
    
    cont = 0;
    
    cout << "\nIndeces que contem elementos pares: ";
   	for(int l = 0; l < 5 ; l++){
   	    if(A[l] % 2 == 0){	   
          P[cont]  = l;
          cout << P[cont] << " "	;
          cont++;
        }
    }
	
}
