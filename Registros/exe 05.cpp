#include <iostream>
#include <string.h>
using namespace std;

struct cliente{
	string Nome;
	string CPF;
	string RG;
	int NumCont;
	string DatAber;
	float Saldo;
};
int main(){
	
	cliente c[3];
	string CPF;
	
	cout << "\nDados dos clientes: ";
	cout <<"\n\n-------------------------------";
	for(int l=0 ; l < 3; l++){
			cout <<"\n\tNome cliente "<< l+1 <<": ";
			getline(cin,c[l].Nome);
			cout<<"\n\tCPF cliente "<< l+1 <<": ";
			getline(cin,c[l].CPF);
			cout << "\n\tRG cliente "<< l+1 <<": ";
			getline(cin,c[l].RG);
			cout << "\n\tNumero da conta cliente "<< l+1 <<": ";
			cin >> c[l].NumCont;
			cout << "\n\tData de abertura da conta"<< l+1 <<": ";
			cin >> c[l].DatAber;
			cout <<"\n\tSaldo da conta"<< l+1 <<": ";
			cin >> c[l].Saldo;
			getchar();
			cout <<"\n-------------------------------";
    }
	cout << "\n\nDigite o CPF do cliente: ";
	cin >> CPF;
	cout << "\n-----------------------------";
	for(int l=0 ; l < 3; l++){
		if(CPF == c[l].CPF){
		  cout << "\nNome : " << c[l].Nome;
		  cout << "\nCPF : " << c[l].CPF;
		  cout << "\nRG : "	<< c[l].RG;
		  cout << "\nNumero da conta: "<< c[l].NumCont;
		  cout << "\nData da abertura da conta : " << c[l].DatAber;
		  cout << "\nSaldo : " << c[l].Saldo;
		  cout << "\n-----------------------------";
		}
    }
	
	cout << "\n\nDados dos clientes com saldo negativo: ";
	cout << "\n\n-----------------------------";
	for(int l=0 ; l < 3; l++){
	   if(c[l].Saldo < 0){
		  cout << "\nNome : " << c[l].Nome;
		  cout << "\nCPF : " << c[l].CPF;
		  cout << "\nRG : "	<< c[l].RG;
		  cout << "\nNumero da conta: "<< c[l].NumCont;
		  cout << "\nData da abertura da conta : " << c[l].DatAber;
		  cout << "\nSaldo : " << c[l].Saldo;
		  cout << "\n-----------------------------";
	  }
	}
}
