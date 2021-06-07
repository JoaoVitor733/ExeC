#include <iostream>
#include <string.h>
using namespace std;

struct clientes{
	int Codigo;
	string Email;
	float HrsAce;
	char Pag;
};
int main(){
	
  clientes Cl[500];
  char Resp;
  int cont=0;
  
  cout << "\nCadastramento do cliente: ";
  cout <<"\n\n-------------------------------";
  
  for(int l=0; l < 500;l++){
	  cout << "\n\tCodigo do cliente "<< l+1<<": ";
	  cin >> Cl[l].Codigo;
	  cout << "\n\tE-mail cliente "<< l+1<<": ";
	  getchar();
	  getline(cin,Cl[l].Email);
	  cout <<"\n\tNumeros de horas de acesso do cliente "<< l+1<<": ";
	  cin >> Cl[l].HrsAce;
	  cout <<"\n\tPagina S-sim e N-nao: ";
	  cin >> Cl[l].Pag;
	  cout << "\n\tDeseja cadastrar mais clientes(S/N)? ";
	  cin >> Resp;
	  cont ++;
	  if(Resp == 'N')
	  l=1000;
	  cout <<"\n-------------------------------";
   }  
  
  cout <<"\n-------------------------------";
   for(int l=0; l < cont;l++){
     
     cout << "\n Valor a ser pago pelo cliente "<< l+1<<": ";
      if(Cl[l].HrsAce <= 20 && Cl[l].Pag == 'S'){ // R$40-se tiver pagina e R$35-menos de 25 hrs
 	      cout << "\n R$" << 75;
     }else{
 	     if(Cl[l].HrsAce > 20 && Cl[l].Pag == 'N')
 		    cout << "\n R$" << ((Cl[l].HrsAce-20)*2.50)+35;
          }
 
     if(Cl[l].HrsAce > 20 && Cl[l].Pag == 'S')
         cout << "\n R$" << ((Cl[l].HrsAce-20)*2.50)+75;
         
    if(Cl[l].HrsAce <= 20 && Cl[l].Pag == 'N')
 		    cout << "\n R$" << 35;
     cout <<"\n-------------------------------";
 }
}
