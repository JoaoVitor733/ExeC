#include <iostream>
#include <string.h>
using namespace std;

struct tAnimal{
	string Nome;
	string Raca;
	int Idade;
};

int main(){
	
	tAnimal Ani[2];
	string etinia;
	int Resp;
	
	cout<<"\nCadastro de animais: ";
	cout <<"\n\n----------------------------";
	
	for (int l = 0; l < 2; l++){
		cout <<"\n\tNome do animal "<<l+1 <<": ";
		getline(cin,Ani[l].Nome);
		cout <<"\n\tRaca: ";
		getline(cin,Ani[l].Raca);
		cout <<"\n\tIdade: ";
		cin >> Ani[l].Idade;
		getchar();
		cout <<"\n----------------------------";
		
	   if(Ani[l-1].Idade > Ani[l].Idade && l!=0){
		   cout << "\n\nO animal mais velho eh: " << Ani[l-1].Nome;
	  }else{
		  if(Ani[l-1].Idade < Ani[l].Idade && l!=0){	
		     	cout << "\n\nO animal mais velho eh: " << Ani[l].Nome;
        }else{ 
              if(l != 0)
	           cout <<"\n\nOs dois animais tem a mesma idade";
	         }
    }   

}
	cout<<"\n\nVoce deseja consultar os animais cadastrados pela raca? 1-sim e 2-nao: ";
	cin >> Resp;
	
	if(Resp == 1){
	
			cout <<"\nQual raca de animal voce deseja consultar: ";
			getchar();
			getline(cin,etinia);
				for (int l = 0; l < 2; l++){
			       if(Ani[l].Raca == etinia){
			         cout << "\nNome: " << Ani[l].Nome;
			         cout << "\nIdade: " << Ani[l].Idade;
			       }
			   }
   }else{
   	      cout << "\nOK";
   }

}
