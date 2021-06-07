#include <iostream>
#include <string.h>
using namespace std;

struct Pessoas{
	bool Sexo;
	string CorOlhos;
	float Altura;
	float Peso;
	string DataNascimento;
};
int main(){
	int N;
	cout << "\nQuantas pessoas vao ser entrevistadas? ";
	cin >> N;
	
	Pessoas p[N];
	
	cout <<"\nCadastramento de dados: ";
	cout << "\n\n-------------------------";
	for(int l=0; l<N;l++){
		cout <<"\n\tPessoa "<< l+1 <<": ";
		cout << "\n\tSexo 1-M e 0-F: ";
		cin >> p[l].Sexo;
		cout << "\n\tCor dos olhos: ";
		getchar();
		getline(cin,p[l].CorOlhos);
		cout << "\n\tAltura: ";
		cin >> p[l].Altura;
		cout << "\n\tPeso: ";
		cin >> p[l].Peso;
		cout << "\n\tData nascimento: ";
		getchar();
		getline(cin,p[l].DataNascimento);
		cout << "\n-------------------------";
  }

	cout << "\n\nDados de pessoas do sexo masculino: ";
	cout << "\n\n-------------------------";
	for(int l=0; l<N;l++){
		if(p[l].Sexo == 1){
			cout << "\nDados da "<<l+1<<"a. pessoa: ";
			cout << "\n\tCor dos olhos: " << p[l].CorOlhos ;
			cout << "\n\tAltura: "  << p[l].Altura;
			cout << "\n\tPeso: " << p[l].Peso;
			cout << "\n\tData nascimento: " << p[l].DataNascimento;
			cout << "\n-------------------------";
	   }
   }
	cout << "\n\nDados de pessoas do sexo feminino: ";
	cout << "\n\n-------------------------";
	for(int l=0; l<N;l++){
		if(p[l].Sexo != 1){
			cout << "\nDados da "<<l+1<<"a. pessoa: ";
			cout << "\n\tCor dos olhos: " << p[l].CorOlhos ;
			cout << "\n\tAltura: "  << p[l].Altura;
			cout << "\n\tPeso: " << p[l].Peso;
			cout << "\n\tData nascimento: " << p[l].DataNascimento;
			cout << "\n-------------------------";
	   }
   }
             	
}
