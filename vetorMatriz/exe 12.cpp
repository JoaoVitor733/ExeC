#include <iostream>
using namespace std;

int main(){

  int V[5], N;
  bool achou = false;
  
  	for(int l = 0; l < 5 ; l++){
  		do{
		  cout << "\nDigite o " << l << "o. valor para o vetor V: ";
  	      cin >> V[l];
  	    }while(V[l] < 0);
	}
	
	cout << "\nDigite um numero: ";
	cin >> N;
	
	for(int l = 0; l < 5 ; l++){
	  if(V[l] == N){
	  	    achou = true;
	        cout << "\nindece que contem o numero = [" << l << "]";
    }
   }  
   
   if(achou == false) {
   	  cout << "\nO numero que voce digitou nao existe no vetor!! ";
   }
}
