#include <iostream>
#include <string.h>
using namespace std;


struct cliente{
  string CPF;
  string Nome;
  string Endereco;
  string Telefone;	
};
int main(){
	
 cliente Cli[5];
 char Resp;
 int cont=0, cont1=0;
 string CPF;
 
 cout << "\nCadastramento de dados dos clientes: ";
 cout<< "\n\n-----------------------------------";
 
    for(int l = 0; l < 5; l++){
    	 cout << "\n\n\tCPF cliente "<< l+1 << ": ";
    	 getline(cin,Cli[l].CPF);
		 cout <<"\n\tNome cliente "<< l+1 << ": ";
		 getline(cin,Cli[l].Nome);
		 cout << "\n\tEndereco cliente "<< l+1 << ": ";
		 getline(cin,Cli[l].Endereco);
		 cout << "\n\tTelefone do cliente "<< l+1 << ": ";
		 getline(cin,Cli[l].Telefone);
		 cout << "\n\tNovo cliente(S/N)? ";
         cin >> Resp;
         getchar();
         if(Resp == 'N'){
         	l = 5;
		 }
		 cout<< "\n\n-----------------------------------";
		 cont ++;
		
   }     
    cout << "\nDigite C - para ver relatorio completo e I - relatorio individual: ";
    cin >> Resp;
    cout << "\nDados dos clientes: ";
    cout<< "\n\n-----------------------------------";
    if(Resp == 'C'){
	    for(int l = 0; l < cont; l++){
	    	cout << "\n\tCPF cliente "<< l+1 << ": " << Cli[l].CPF;
			cout <<"\n\tNome cliente "<< l+1 << ": " << Cli[l].Nome;
			cout << "\n\tEndereco cliente "<< l+1 << ": " << Cli[l].Endereco;
			cout << "\n\tTelefone do cliente "<< l+1 << ": " << Cli[l].Telefone; 
			cout<< "\n\n-----------------------------------"; 	
	    }	
   }
   cont1 = 0;
   if(Resp == 'I'){
   	  cout << "\nDigite o CPF do cliente: ";
   	  getchar();
   	  getline(cin,CPF);
   	  cout<< "\n-----------------------------------";
   	  for(int l = 0; l < cont; l++){
   	  	if(CPF == Cli[l].CPF){
	    	cout << "\n\tCPF cliente "<< l+1 << ": " << Cli[l].CPF;
			cout <<"\n\tNome cliente "<< l+1 << ": " << Cli[l].Nome;
			cout << "\n\tEndereco cliente "<< l+1 << ": " << Cli[l].Endereco;
			cout << "\n\tTelefone do cliente "<< l+1 << ": " << Cli[l].Telefone; 
			cout<< "\n\n-----------------------------------"; 	
     	    cont1 ++;
	 }	
   	
   }
   if(cont1 == 0)
   	cout << "\nCliente invalido!";
}
}
