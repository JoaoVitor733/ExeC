#include <iostream>
using namespace std;

int main(){
 
  int v[3], l, C, cont = 3;
  
  for (l = 0; l < 3; l++){
  	 cout << "Digite o " << 1+l << "o. valor: ";
  	 cin >> v[l];
  }
  
  cout << "Digite 1 para mostrar o vetor na ordem original e 2 para a inversa: ";
  cin >> C;
  
 for (l = 0; l < 3; l++){
 	 cont--;
   	  if(C == 1){
   	  	   cout << v[l] << " ";
     }else{
	    if(C == 2){
	   	 cout << v[cont] << " ";
	    }		
 	} 	 
   }
}
