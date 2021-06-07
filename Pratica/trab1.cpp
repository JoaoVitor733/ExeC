   /*     -----------------------------    
             MENU ELEIÇÃO
       ----------------------------- 
            0 – Finalizar Votação 
            1 – Candidato 1
            2 – Candidato 2 
            3 – Candidato 3 
            4 – Voto em branco  
            5 – Voto nulo 
       ----------------------------- 
          Digite seu voto:  
Leia os votos de todos os eleitores considerando as opções de voto listadas no menu e, 
ao final da eleição, calcule e escreva o número total de votos, o número de votos por candidato, 
o total de votos brancos e o total de votos nulos. Informe ainda se houve vencedor 
(votos do candidato > 50% do total de votos) e, neste caso, o número do candidato que venceu.  */ 
 
 #include <iostream>
using namespace std;

int main(){

      int Voto,  Cand1 = 0, Cand2 = 0,Cand3 = 0,VotBran = 0, VotNu = 0 ;
 
    do{ 

      cout << "\n-----------------------------";    
      cout << "\n       MENU ELEICAO       ";
      cout << "\n----------------------------- ";
      cout << "\n0 – Finalizar Votacao ";
      cout << "\n1 – Candidato 1";
      cout << "\n2 – Candidato 2 ";
      cout << "\n3 – Candidato 3"; 
      cout << "\n4 – Voto em branco "; 
      cout << "\n5 – Voto nulo ";
      cout << "\n-----------------------------";
      cout << "\nDigite seu voto: "; 
      cin >> Voto;

      switch (Voto){
        case 1: Cand1++; 
        break;
        case 2: Cand2++;
        break;
        case 3 :Cand3++;
        break;
        case 4 : VotBran++;
        break;
        case 5 : VotNu++;
        break;
      }

    }while (Voto != 0) ; 

    cout << "\nCandidato 1 recebeu " << Cand1 << " Candidato 2 recebeu " << Cand2 << " Candidato 3 recebeu " << Cand3 << " teve Voto em branco " << VotBran << " e Voto nulo " << VotNu;

}
 