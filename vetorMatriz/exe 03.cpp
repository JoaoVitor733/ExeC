#include <iostream>
using namespace std;

int main(){
	
int v[3], l, Resp ;

	
 for (l = 0; l < 3; l++){
 	 cout << "Digite o " << 1+l << "o. valor: ";
  	 cin >> v[l];
  }
  
  cout << "\nSe voce deseja ver os elementos dos indeces pares digite[1] e impares[2]: ";
  cin >> Resp;
  
	if((Resp == 1)){	
        for (l = 0; l < 3; l++){
          	if (l % 2 == 0)	  
  	           cout << v[l] << " ";
         }
     }
     
    if((Resp == 2)){	
        for (l = 0; l < 3; l++){
          	if (l % 2 != 0)	  
  	           cout << v[l] << " ";
         }
     }   
 }
  
