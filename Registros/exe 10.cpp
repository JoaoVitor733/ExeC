#include <iostream>
#include <string.h>
using namespace std;

struct Tproduto{
	string Descricao;
	int quantidade;
	float PreUni;
	float SubTot;
};


struct NotaFis{
	int Numero;
	string Data;
	Tproduto Pro[2];
	float Total;  // soma de todos subtotais
};

int main(){
	
  NotaFis nota[2];
  int Resp,cont=0,cont1=0,numC,qtdP[4],pUni[4], MaTot=0,total,SoVen=0;
  float Media=0;
  string Produtos[4],Produtos1;
  
  for(int l=0;l<2;l++){
      cout << "\n\nNota fiscal "<<l+1<< ": ";
      cout << "\n\n-------------------------------";
	  cout << "\n\tNumero da compra: ";
	  cin >> nota[l].Numero;
	  cout << "\n\tData: ";
	  getchar();
	  getline(cin,nota[l].Data);
	  total = 0;
	  for(int c=0;c<2;c++){
	  	 cout << "\n\n\tDescricao do produto "<<c+1<< ": ";
		  getline(cin,nota[c].Pro[c].Descricao);
		  
		  Produtos[cont1] = nota[c].Pro[c].Descricao; // vetor para armazenar 4 prodtos
		  
		  cout << "\n\tQuantidade comprada: ";
		  cin >> nota[l].Pro[c].quantidade;
		  
		  qtdP[cont1] = nota[l].Pro[c].quantidade; // vetor para armazenar a quantidade comprada
		  
		  cout << "\n\tPreco unitario do produto: ";
		  cin >> nota[c].Pro[c].PreUni;
		  
		  pUni[cont1] =nota[c].Pro[c].PreUni; // vetor para armazenar seus repectivos valores
		  
		  nota[l].Pro[c].SubTot =qtdP[cont1]*pUni[cont1];
		  getchar();
		  	  
		  total = nota[l].Pro[c].SubTot+total;
		  
		  cont1++;
	  }
	  nota[l].Total = total;
	  if(nota[l].Total >  MaTot)
	     MaTot =  nota[l].Total;	     
	 cout << "\n---------------------------";
  } 
   do{
	  cout << "\n\tMENU PRINCIPAL";
	  cout << "\n---------------------------";
	  cout << "\n1 - RELATORIO DE NOTAS FISCAIS ";
	  cout << "\n2 - BUSCAR NOTA POR NUMERO";
	  cout << "\n3 - EXIBIR NOTA COM MAIOR VALOR TOTAL";
	  cout << "\n4 - EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRICAO";
	  cout << "\n5 - EXIBIR MEDIA DO TOTAL DAS NOTAS";
	  cout << "\n6 - SAIR";
	  cout << "\n: ";
	  cin >> Resp;
	  switch(Resp){
	  	case 1:
	  		cout << "\nRELATORIO: ";
	  		cont1 = 0;
	  		for(int l=0;l<2;l++){
	  			cout << "\n\nNota fiscal "<<l+1<< ": ";
			    cout << "\n\n-------------------------------";
				cout << "\n\tNumero da compra: "<< nota[l].Numero;
				cout << "\n\tData: " << nota[l].Data;
	  			for(int c=0;c<2;c++){
	    	 	        cout << "\n\n\tDescricao do produto: "<<Produtos[cont1];
		  				cout << "\n\n\tQuantidade comprada: " <<qtdP[cont1];
		  			    cout << "\n\n\tPreco unitario do produto: " <<pUni[cont1];	
						cout << "\n\n---------------------------"; 	
						cont1++;			
	  			}
	  		}
	  			
	    break;
	    case 2:
	    	cout << "\nDigite o numero da compra: ";
	    	cin >> numC;
	    	cont1=0;
	    	cont=0;
	    	for(int l=0;l<2;l++){
	    		if(nota[l].Numero == numC){
	    			cout << "\n\n\tNota fiscal "<<l+1<< ": ";
	    			cout << "\n\n\tData: " <<nota[l].Data;
			        cout << "\n\n-------------------------------";
			        cont++;
	    			for(int c=0;c<2;c++){
	    				cont1++;
	    	 	        cout << "\n\n\tDescricao do produto: "<<Produtos[cont1-1];
		  				cout << "\n\n\tQuantidade comprada: " <<qtdP[cont1-1];
		  			    cout << "\n\n\tPreco unitario do produto: " <<pUni[cont1-1];	
						cout << "\n\n---------------------------"; 	
								
	    	       }
			
			  	cont1=cont1+2;
			  }
	       }
	       if(cont != 1){
	       	 cout << "\n\n---------------------------"; 	
	       	 cout << "\nNumero da conta invalida!";
	       	 cout << "\n\n---------------------------"; 	
		   }
	    break;
	    case 3:
	    	cont1=0;
	    	cout << "\nMaior total: " << MaTot;
	    	for(int l=0;l<2;l++){
	    		if(nota[l].Total == MaTot){
	    			cout << "\n\n\tNota fiscal "<<l+1<< ": ";
	    			cout << "\n\n\tData: " <<nota[l].Data;
			        cout << "\n\n-------------------------------";
	    			for(int c=0;c<2;c++){
	    				cont1++;
	    	 	        cout << "\n\n\tDescricao do produto: "<<Produtos[cont1-1];
		  				cout << "\n\n\tQuantidade comprada: " <<qtdP[cont1-1];
		  			    cout << "\n\n\tPreco unitario do produto: " <<pUni[cont1-1];	
						cout << "\n\n---------------------------"; 	
				}
			  }else{
			  	cont1=cont1+2;
			  }
			}
	    break;
	    case 4:
	    	 cout << "\nDigite a descricao do porduto: ";
	    	 cin >>  Produtos1;
	    	 SoVen = 0;
	    	 for(int l=0;l<4;l++){
	    	    if(Produtos1 == Produtos[l])
	    	 	    SoVen = qtdP[l]+SoVen;
			  } 
			  cout << "\n\n---------------------------"; 	
			  cout << "\n\nVendeu " << SoVen <<  " unidades de " << Produtos1;
			  cout << "\n\n---------------------------"; 	
	    break;
	    case 5:
	    	 for(int l=0;l<2;l++){
	    	 	Media=Media+ nota[l].Total;
	    	 }
	    	 cout << "\n\n---------------------------"; 
	    	 cout << "\n\nMedia de todos os totais " <<Media/2; 
	    	 cout << "\n\n---------------------------"; 
	    break;
	  }
   }while(Resp != 6);
	}

