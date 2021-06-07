#include <iostream>
#include <string.h>
using namespace std;

struct ReAlunos{
    int matricula;
  	string nome;
	string endereco;
	float Nota1;
	float Nota2;
	float MediaG;	
};

int main(){

   ReAlunos	Alu[3];
   
   cout <<"\nDados dos alunos  ";
   cout << "\n-----------------------";

    for(int l = 0; l  < 3; l++){	
	   cout << "\n\tMatricula do aluno "<<l+1<<": ";
	   cin >> Alu[l].matricula;
	   cout << "\n\tNome do aluno "<<l+1<<": ";
	   getchar();
	   getline(cin,Alu[l].nome); 
	   cout << "\n\tEndereco do aluno "<<l+1<<": ";
	   getchar();
	   getline(cin,Alu[l].endereco); 
	   cout << "\n\tNota 1: ";
	   cin >> Alu[l].Nota1;
	   cout << "\n\tNota 2: ";
	   cin >> Alu[l].Nota2;
	   Alu[l].MediaG = (Alu[l].Nota1+Alu[l].Nota2)/2;
	   cout << "\n-----------------------";
	   if(Alu[l].MediaG > 5)   Alu[l].MediaG = Alu[l].MediaG+0.5;
   }
   
   for(int l = 0; l  < 3; l++){
     cout<<"\nMedia final do aluno "<< l+1 <<": " << Alu[l].MediaG;
  }  
}
