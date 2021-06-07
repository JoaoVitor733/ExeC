#include <iostream>
#include <string.h>
using namespace std;


struct Talunos{
	string Nome;
	int Matricula;
};

struct Tdisciplina{
	int Matricula;
	string Disciplina;
	float Nota1;
	float Nota2;
	float Media;
};
int main (){
	
	Talunos Alu[3];
	Tdisciplina Dis[2];
	string Dis1[6];
	int Resp, N1[6],N2[6],cont,cont1=0,mat;
	
	cout << "\nAlunos: ";
	cout << "\n\n------------------";
	for(int l=0; l <3;l++){
		cout << "\n\tNome do "<<l+1<<"a aluno: ";
		getline(cin, Alu[l].Nome);
		cout << "\n\tMatricula: ";
		cin >> Alu[l].Matricula;
		getchar();
		cout << "\n-------------------"; 
    } 
	   
	cout << "\nAlunos cadastrados: ";
	for(int l=0; l <3;l++){
		cout << "\n\n\tNome aluno "<<l+1<<": " << Alu[l].Nome;
		cout << "\n\n\tMatricula aluno "<<l+1<<": " << Alu[l].Matricula;
		cout << "\n\n-------------------"; 
    }
    
    cout << "\n\nCadastramento de materias: ";
	cout << "\n\n------------------------------";
    for(int l=0; l <6;l++){
    	    if(l%2 ==0){
    	    	cont = 0;
    	    	Dis[cont1].Matricula = Alu[cont1].Matricula;
    	    	cont1++;
			}else{
				cont = 1;
			}
		    cout << "\nDISCIPLINA "<< cont+1 << ": ";
		    cout <<"\n\n\tDisciplina "<< cont+1 << ": ";
		    getline(cin,Dis[cont].Disciplina);
		    Dis1[l] = Dis[cont].Disciplina;
		    cout << "\n\tNota do 1a bimestre da disciplina "<< cont+1 << ": ";
		    cin >> Dis[cont].Nota1;
			N1[l] =	Dis[cont].Nota1;	   
		    cout << "\n\tNota do 2a bimestre da disciplina "<< cont+1 << ": ";
		    cin >> Dis[cont].Nota2;
			N2[l] =	Dis[cont].Nota1;
			getchar();	   
		    cout << "\n------------------------------";
}
    
    
    
    do{
	   cout <<"\n\n-------------------------------------";
	   cout << "\n\t\tMENU PRINCIPAL ";
	   cout <<"\n-------------------------------------";
	   cout << "\n1 - EXIBIR DADOS DE UM ALUNO";
	   cout << "\n2 - EXIBIR MAIOR MEDIA";
	   cout << "\n3 - EXIBIR MÉDIA DAS MEDIAS POR ALUNO";
	   cout << "\n4 - EXIBIR OS ALUNOS DE UMA DISCIPLINA";
	   cout << "\n5 - SAIR";
	   cout <<"\n-------------------------------------";
	   cout << "\n: ";
	   cin >> Resp;
   
   switch(Resp){
   	case 1: 
   	   cout << "\nQual e a matricula do aluno que voce deseja consultar? ";
   	   cin >> mat;
   	   cont1=0;
   	   for(int l=0; l <3;l++){
   	   	cont1++;
   	       if(mat == Alu[l].Matricula){
   	   	       cout << "\n----------------------";
   	   	       cout << "\nAluno: " << Alu[l].Nome;
   	   	           for(int c=0; c <6;c++){
   	   	   	          if(Dis[cont1-1].Matricula == mat ){
   	   	   	          	cout <<"\n\n\tDisciplina: "<<  Dis1[l];
   	   	   	          	cout << "\n\tNota do 1a bimestre da disciplina: "<< N1[l];
   	   	   	          	cout << "\n\tNota do 2a bimestre da disciplina: "<<  N1[l];
   	   	   	          	c = 6;
   	   	   	          }
		   	       }
	          } 
   	       }
       
   	   	   
   	   	   /*
   	   	   cout << "\nMateria 1: " <<  M1;
   	   	   cout << "\n1a nota: " <<  M1N1;
   	   	   cout << "\n2a nota: " <<  M1N2;
   	   	   Dis1.Media = (M1N1+M1N2)/2;
   	   	   Media = Dis1.Media;
   	   	   cout <<"\nMedia: " << Dis1.Media;
   	   	   cout << "\n----------------------";
   	   	   cout << "\n----------------------";
   	   	   cout << "\nMateria 2: " <<  M2;
   	   	   cout << "\n1a nota: " <<  M2N1;
   	   	   cout << "\n2a nota: " <<  M2N2;
   	   	   Dis1.Media = (M2N1+M2N2)/2;
   	   	   Media1 = (Media+Dis1.Media)/2;
   	   	   cout <<"\nMedia: " << Dis1.Media;
   	   	   cout << "\n----------------------";
		}else{		
	     	if(mat == Alu2.Matricula){
		       cout << "\n----------------------";
	   	   	   cout << "\nAluno: " << Alu2.Nome;
	   	   	   cout << "\nMateria 1: " <<  M3;
	   	   	   cout << "\n1a nota: " <<  M3N1;
	   	   	   cout << "\n2a nota: " <<  M3N2;
	   	   	   Dis1.Media = (M3N1+M3N2)/2;
	   	   	  
	   	   	   cout <<"\nMedia: " << Dis1.Media;
	   	   	   cout << "\n----------------------";
	   	   	   cout << "\n----------------------";
	   	   	   cout << "\nMateria 2: " <<  Dis2.Disciplina;
	   	   	   cout << "\n1a nota: " <<  Dis2.Nota1;
	   	   	   cout << "\n2a nota: " << Dis2.Nota2;
	   	   	   Dis1.Media = (Dis2.Nota1+Dis2.Nota2)/2;
	   	   	   cout <<"\nMedia: " << Dis1.Media;
	   	   	   
	   	   	   cout << "\n----------------------";
		   }else{
		   	  cout << "\nMatricula invalida!";
		   }
  	    }
  	    */
   	break;
   	case 2: 
   	
   	break;
   	case 3: 
   	   //  cout << "\nAluno: " << Alu1.Nome;
   	    // cout << "\nMedia das medias: " <<  Media1;
   	   //  
   	break;
   	case 4: 
   	  // cout << "\nQual disciplina voce deseja consultar: ";
   	   
   	break;
   	case 5: 
   	  // cout << "\nFim de Programa!!";
   	break;
   //	default:
   	//	cout << "\nErro na digitacao: ";
   }
   	}while(Resp!=5); 
}
