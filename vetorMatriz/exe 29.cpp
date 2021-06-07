#include <iostream>
using namespace std;

int main(){
	
    int m[5][5], MaiorE, y, minimax, x;
    
   for(int l=0 ; l < 5; l++){
   	 for(int c=0 ; c < 5; c++){
	   		cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
	   	  	cin >> m[l][c];			
     }
  }
  MaiorE = m[0][0];
  
  cout << " ";
  for(int l=0 ; l < 5; l++){
   	 for(int c=0 ; c < 5; c++){
   	 	cout << m[l][c] << " ";
   	 	if(m[l][c] > MaiorE ){
   	 		 MaiorE = m[l][c];
   	 		 y = l;
		}
   	 }
   	 cout <<"\n ";
   }
   
   cout << "\nMaior elemento: " << MaiorE;
   minimax = m[y][0];

    for(int c=0 ; c < 5; c++){
       	if(m[y][c] < minimax ){
   	 		  minimax = m[y][c];
          x = c;
    }
   }

   cout << "\nO minemax e o : "<<   minimax << " na posicao [" << y << "," << x << "] ";
} 
