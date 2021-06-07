#include <iostream>
using namespace std;

int main(){
 
 int v[3], l, VaP = 0 ;
 
 for (l = 0; l < 3; l++){
 	 cout << "Digite o " << 1+l << "o. valor: ";
  	 cin >> v[l];
   if(v[l] % 2 == 0){
   	  VaP ++;
   	  v[l] = 0;
   }
 }
 cout << "\nNo vetor existe " << VaP << " valor(es) pares ";
 
 cout << "\nVetor final: ";
 
 for (l = 0; l < 3; l++){
 	 cout << v[l] << " ";
  }

}
