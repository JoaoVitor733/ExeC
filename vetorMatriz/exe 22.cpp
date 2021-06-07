#include <iostream>
using namespace std;

int main(){

   int m[3][3], v[9], n, cont = 0;
   
   	for (int l = 0; l < 3; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
   	  	cin >> m[l][c];
       }
    }
    
    cout <<"\nDigite um numero inteiro qualquer: ";
    cin >> n;
    
    for (int l = 0; l < 3; l++){
   	   for (int c = 0; c < 3; c++){
           v[cont] = m[l][c] * n;
           cont ++;
       }
    }
    
     
    
   	   for (int c = 0; c < 9; c++){
   	   	 cout <<  v[c] << " ";	   	
   	   }
   
    
}
