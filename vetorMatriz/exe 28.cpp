#include <iostream>
using namespace std;

int main(){
	
  int m[6][6];

 for(int l=0 ; l < 6; l++){
   	 for(int c=0 ; c < 6; c++){
   	  if(l == 0 || c == 0 || c == 5|| l == 5){
   	 	   m[l][c]	= 1;
   	  }else{ 
   	     if(l == 1 || c == 1 || l ==4 || c == 4){
   	         m[l][c]	= 2;
   	     }else{
   	     	 m[l][c]	= 3;
			}
		}
   	 }
   }
   

  
    
    cout << " ";
    for(int l=0 ; l < 6; l++){
    	 cout << "\n ";
   	 for(int c=0 ; c < 6; c++){
   	 		cout << m[l][c] << " ";
   	 }
   	
   }
 
 

}
