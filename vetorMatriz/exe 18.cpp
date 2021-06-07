#include <iostream>
using namespace std;

int main(){
   
   int V[5], cont = 0, cont1 = 0;
   
   for (int l = 0; l < 5 ; l++){
   	 cout << "\nDigite o " << l+1 << "o. valor: ";
   	 cin >> V[l];
   }
   
    for (int l = 0; l < 4 ; l++){
    	if(V[l] < V[l+1]){
    	  cont ++;
		  if(cont == 4)
		  	cout << "\nOrdem crescente!";
		  }else{
		  	if(V[l] > V[l+1]){
    	        cont1++;
    	    if(cont1 == 4)
		  	    cout << "\nOrdem decrescente!";
		  }
    }
}

  if(cont != 4 || cont != 4){
	cout << "\nOrdem aleatoria!";
  }
}
