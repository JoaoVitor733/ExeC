#include <iostream>
using namespace std;

int main(){

  int A, m[4][4], EleAeMigul = 0, x[4][4];
  
  cout << "\nDigite um numero inteiro qualquer: ";
  cin >> A;
  
  for (int l = 0; l < 4; l++){
   	  for (int c = 0; c < 4; c++){
   	  	cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
   	  	cin >> m[l][c];
   	  	
   	    if(m[l][c] == A){
   	    	EleAeMigul ++;
   	    	x[l][c] = 0;
		 }else{
		 	 x[l][c] = m[l][c];
		 }
       }
    }
  
  cout << "\nNa matriz teve " << EleAeMigul << " iguais a A";
  cout << "\n ";
  for (int l = 0; l < 4; l++){
   	  for (int c = 0; c < 4; c++){
   	    cout << x[l][c]	 << " ";
   	  }
   	  cout << "\n ";
}
  
}
