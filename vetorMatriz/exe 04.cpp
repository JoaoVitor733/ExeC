#include <iostream>
using namespace std;

int main(){
	
int A[10], l, MaiorD = 0, i1, i2;
	
 for (l = 0; l < 10; l++){
	 cout << "\nDigite o " << l << "o. valor: ";
  	 cin >> A[l];
  }
  
  MaiorD = 	(A[1] - A[2]);
    
  for (l = 0; l < 10; l++){
  	if((l < 9) && (A[l]-A[l+1] > MaiorD)){
  	   MaiorD = A[l]-A[l+1];
  	   i1 = l;
  	   i2 = l+1;
    }		
  } 
  
  if(MaiorD < 0 ){
  	MaiorD = MaiorD*-1;
  }
  
  cout << "\nA maior diferenca entre dois indes consecutivos foi: " << MaiorD;
  cout << "\nEntre os indes " << i1 << " e " << i2;
}
