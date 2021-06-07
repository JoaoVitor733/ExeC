#include <iostream>
using namespace std;

int main(){

   int m[5][5], Sl4 = 0, Sc2 = 0, Dp = 0, smDs = 0, sTe;
   
   for(int l=0 ; l < 5; l++){
   	 for(int c=0 ; c < 5; c++){
	   		cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
	   	  	cin >> m[l][c];			
     }
   }
   
    
    cout << " ";
    for(int l=0 ; l < 5; l++){
   	  for(int c=0 ; c < 5; c++){
   	        cout << m[l][c] << " ";
   	        
   	    if(c + l == 4){	 
	       smDs = smDs + m[l][c];
     	}
     	
   	    if(l == 3) {
		 	Sl4 = Sl4 + m[l][c];
		 }  
		 
		 if(c == 1){
		 	Sc2 = Sc2 + m[l][c];
		 } 	
		 
		 if(l == c) {
		   Dp = Dp+ m[l][c];
		 }	
		 
		 sTe = sTe + m[l][c];
		     
     }
     cout << "\n ";
   }
   
   cout << "\nA soma da linha 4 e igual a: " << Sl4;
   cout << "\nA soma da coluna 2 e igual a: " << Sc2;
   cout << "\nA soma da diagonal principal e igual a: " <<  Dp;
   cout << "\nA soma da diagonal secundarial e igual a: " <<  smDs;
   cout << "\nA soma de todos os elementos e igual a: " <<   sTe;
}
