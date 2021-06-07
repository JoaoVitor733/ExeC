#include <iostream>
using namespace std;

int main(){

  int qtd;
  
  cout << "\nQunatos alunos possui a turma? ";
  cin >> qtd;
  
  int M[qtd]; // matriculas
  float N[qtd], Media = 0;// notas
	
  for (int l = 0 ; l < qtd; l ++){
  	cout <<"\nDigite a matricula do " << l+1 << "a. aluno: ";
  	cin >> M[l];
  	cout <<"\nDigite a nota do " << l + 1<< "a. aluno: ";
  	cin >> N[l];
  	Media = Media + N[l];
  }
  
  cout << "\nNotas maior que a media: ";
  for (int l = 0 ; l < qtd; l ++){
  	if(N[l] >= Media/qtd){
  		cout << N[l] << " ";
	  }
  }
  
   cout << "\nMatriculas de alunos com notas menor que a media: ";
   for (int l = 0 ; l < qtd; l ++){
  	if(N[l] < Media/qtd){
  		cout <<	M[l] << " ";
	  }
  }
  
}
