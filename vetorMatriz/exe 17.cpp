#include <iostream>
using namespace std;

int main(){
   
   float S[100], Reajus;
   int cont = 0; // salario funcionario

  cout << "\nSe quiser parar de adicionar funcionarios basta digitar -1";
  
     do{
		cout << "\n\nDigite o salario do " << cont+1 <<"a. funcionario: ";
		cin >> S[cont];
	  	cont++; //para saber quantos funcionarios terá
	  }while(cont < 100 &&  S[cont-1] != -1);	   
	  
	  cout << "\n\nDigite o valor do reajuste dos salarios em %: ";
	  cin >> Reajus;
	  
	  int R[cont-1];
	  
	  cout << "\n\nSalarios reajustados: ";
	  for (int l = 0; l < cont-1; l ++){
	  	 R[l] = (S[l]*Reajus)+S[l];
	  	 cout << "\n\t" << l+1 <<"o. funcionario: " << R[l];
	  }
}
