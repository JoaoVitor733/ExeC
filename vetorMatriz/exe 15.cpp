#include <iostream>
using namespace std;

int main(){

  bool A[3],B[3], R[3]; 
  char Oper;
  
  for (int l=0 ; l <3 ; l++){
  	cout << "\nDigite O " << l+1 << "a. valor do vetor A 1(verdadeiro) ou 0(falso): ";
  	cin >> A[l];
  	cout << "\nDigite O " << l+1 << "a. valor do vetor B 1(verdadeiro) ou 0(falso): ";
  	cin >> B[l];
  }
  
  cout << "\nVetor A:";
  for (int l=0 ; l <3 ; l++){
  	cout << A[l] << " ";
  }
  
  cout << "\nVetor B:";
  for (int l=0 ; l <3 ; l++){
  	cout << B[l] << " ";
  }
  
  cout << "\nEscolha um operador (&) ou (|): ";
  cin >> Oper;
  
  if(Oper == '&'){
  	 for (int l=0 ; l <3 ; l++){
	  	  R[l] = A[l] && B[l];
	  	  cout << R[l] << " ";
       }
	}else{
      if(Oper == '|'){
	  	for (int l=0 ; l <3 ; l++){
	  	  R[l] = A[l] || B[l];
	  	  cout << R[l] << " ";
	   }
      }else{
	    cout << "\nCaracter invalido: ";
	 }
	}  
  }  
 }
 

