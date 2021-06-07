#include <iostream>
using namespace std;

int main(){
	
	int m[2][3], n[2][3], ProMn[2][3], SomMn[2][3],DifMn[2][3];
	
	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << "\nDigite um valor para a matriz m na posicao [" << l << "," << c << "]: ";
   	  	cin >> m[l][c];
   	  	cout << "\nDigite um valor para a matriz n na posicao [" << l << "," << c << "]: ";
   	  	cin >> n[l][c]; 
	    ProMn[l][c]	= m[l][c]*n[l][c];
	    SomMn[l][c]	= m[l][c]+n[l][c];
	    DifMn[l][c]	= m[l][c]-n[l][c];
   	  }
   }
   
    cout <<"\nOs valores da matriz m: ";
    cout << "\n ";
   	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << m[l][c] << " ";
   	  }
   	  cout << "\n ";
   }
   
   cout <<"\nOs valores da matriz n: ";
   cout <<"\n ";
   	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << n[l][c]<< " ";
   	  }
   	  cout << "\n ";
   }
   
   cout <<"\nOs valores da matriz m*n: ";
   cout <<"\n ";
   	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout <<  ProMn[l][c]<< " ";
   	  }
   	  cout << "\n ";
   }
   
   cout <<"\nOs valores da matriz m+n: ";
   cout <<"\n ";
   	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << SomMn[l][c]<< " ";
   	  }
   	  cout << "\n ";
   }
   
   cout <<"\nOs valores da matriz m-n: ";
   cout <<"\n ";
   	for (int l = 0; l < 2; l++){
   	  for (int c = 0; c < 3; c++){
   	  	cout << DifMn[l][c]<< " ";
   	  }
   	  cout << "\n ";
   }
   
}
