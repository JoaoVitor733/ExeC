#include <iostream>
using namespace std;

int main(){

   int m[10][10], vDs[5], vL5[5];
    
   for(int l=0 ; l < 10; l++){
   	 for(int c=0 ; c < 10; c++){
	   	m[l][c] = c;	
		if(l+c == 4){
		   vDs[l] =  m[l][c];
		}
	     if(l == 4){
		   vL5[c] =  m[l][c];
	   	}		
     }
   }
   
   cout <<"\nMatriz original: ";
   cout <<"\n";
   for(int l=0 ; l < 10; l++){
   	 for(int c=0 ; c < 10; c++){
   	 	cout << m[l][c] << " ";
   	 }
   	 cout << "\n ";
   }
   
    for(int l=0 ; l < 10; l++){
   	  for(int c=0 ; c < 10; c++){
   	   if(l == c){
   	   	  m[l][c] =  vDs[l];
		}
		
		if(c == 4){
		   m[l][c] =  vL5[c];
		}
     }
  }
  
  cout <<"\nNova matriz: ";
  cout <<"\n";
   for(int l=0 ; l < 10; l++){
   	 for(int c=0 ; c <10; c++){
   	 	cout << m[l][c] << " ";
   	 }
   	 cout << "\n ";
   } 
}
