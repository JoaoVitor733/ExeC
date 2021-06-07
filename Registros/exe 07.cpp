#include <iostream>
#include <string.h>
using namespace std;


struct enderecos {
	string Rua;
	int Num;
	string Bairro;
	string Cidade;
	string Estado;
};

struct Pessoas{
	string Nome;
	enderecos ender;
	string Telefone;
	int idade;
};
int main(){
	
	Pessoas p[2];
	string Bairro;
	
	cout << "\nDados de pessoas: ";
	cout << "\n\n--------------------------";
	for(int l=0; l<2;l++){
			cout << "\n\tNome da pessoa "<< l+1<<": ";
			getline(cin,p[l].Nome);
			cout << "\n\tRua da pessoa "<< l+1<<": ";
			getchar();
			getline(cin,p[l].ender.Rua);
			cout <<"\n\tNumero da casa "<< l+1<<": ";
			cin >> p[l].ender.Num;
			cout << "\n\tBairro da pessoa  "<< l+1<<": ";
			getchar();
			getline(cin,p[l].ender.Bairro);
			cout << "\n\tCidade da pessoa  "<< l+1<<": ";
			getchar();
			getline(cin,p[l].ender.Cidade);
			cout << "\n\tEstado da pessoa  "<< l+1<<": ";
			getchar();
			getline(cin,p[l].ender.Estado);
			cout << "\n--------------------------";
      }
      
	  cout << "\nQual Bairro voce dejesa pesquisar? " ;
	  getline(cin,Bairro);
	  for(int l=0; l<2;l++){
	     if(p[l].ender.Bairro == Bairro)
	        cout << "\n" << p[l].Nome << " mora na cidade informada! ";
	  }
}
