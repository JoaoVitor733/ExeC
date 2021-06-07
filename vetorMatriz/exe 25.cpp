#include <iostream>
using namespace std;

int main(){


  int m[5][3], qntsVezes;

  for(int l=0 ; l < 5; l++){
   	 for(int c=0 ; c < 3; c++){
	   		cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
	   	  	cin >> m[l][c];			
     }
   }
   
   for(int l=0 ; l < 5; l++){
   	 for(int c=0 ; c < 3; c++){
   	 	cout << m[l][c] << " ";
     }
     cout << "\n";
   }
   
     for(int l=0 ; l < 5; l++){
   	    for(int c=0 ; c < 3; c++){
   	    	  qntsVezes = 0;
   	    	for(int i=0 ; i < 5; i++){
   	            for(int j=0 ; j < 3; j++){
   	    	       if(m[l][c] == m[i][j]){
   	    	       	   qntsVezes++;
				 }
   	          }
        	}
        	if(qntsVezes > 1){
			 cout << "\nO elemento na posicao [" << l << "][" << c << "] se repetiu " <<   qntsVezes << " vezes";
	       }
     	}
     }

}
