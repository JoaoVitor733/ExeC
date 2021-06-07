#include <iostream>
#include <string.h>
using namespace std;

struct funcionarios{
	string Nome;
	float NumHrsTra;
	int NumDepen;
};

int main(){
	
   funcionarios fun[5];
   float SalarioBru[5];
   char Resp;
   int cont=0;
   
   cout <<"\nFicha dos trabalhadores: "	;
   cout <<"\n\n-----------------------------";
    
    for(int l = 0; l < 5; l++){
	   cout << "\n\tNome do funcionario "<< l+1 << ": ";
	   getline(cin,fun[l].Nome);
	   cout <<"\n\tNumeros de horas de trabalho do funcionario "<< l+1 <<": ";
	   cin >> fun[l].NumHrsTra;
	   cout <<"\n\tNumero de dependentes do funcionario "<< l+1 <<": ";
	   cin >> fun[l].NumDepen;
	   getchar();
	   SalarioBru[l] = ((fun[l].NumHrsTra*12)+(fun[l].NumDepen*40));
	   cout << "\n\tQuer cadastrar mais funcionarios(S/N)? ";
	   cin >> Resp;
	   if(Resp == 'N')
	      l = 10;
	cont++;
	  cout <<"\n-----------------------------";
    }
  
   cout << "\nDados: ";
    for(int l = 0; l < cont; l++){
	   cout <<"\n\n-----------------------------";	
	   cout<<"\n" << fun[l].Nome << ": ";
	   cout <<"\nSalario bruto: R$" << SalarioBru[l];
	   cout <<"\nValor descontado para o INSS: R$" << (SalarioBru[l]*0.085);
	   cout <<"\nValor descontado para o IR: R$" << (SalarioBru[l]*0.05);
	   cout <<"\nSalario liquido: R$" << SalarioBru[l]-(SalarioBru[l]*0.135);
	   cout <<"\n-----------------------------";
   }
}
