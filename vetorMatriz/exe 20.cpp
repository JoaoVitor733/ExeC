/*. Escreva um programa que leia um vetor de 13 elementos inteiros, que � o gabarito de um teste da loteria 
esportiva, contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Leia, a seguir, para cada 
apostador, o n�mero do seu cart�o e um vetor de respostas de 13 posi��es. Verifique para cada apostador 
o n�meros de acertos, comparando o vetor de gabarito com o vetor de respostas. Escreva o n�mero do 
apostador e o n�mero de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "ganhador". Finalizar 
inserindo um n�mero de apostador negativo.
*/
#include <iostream>
using namespace std;

int main(){
   
   
   int Gabarito[8] = {1,2,0,3,0,0,0}, resposta[8], NumCartao, acertos = 0;
   
   cout <<"\nDigite o numero de seu cartao (ou -1 para sair): ";
   cin >> NumCartao;
    if(NumCartao >= 0){

	   for (int l=0 ; l < 8 ; l++){   	    
	   	   cout << "\nDigite o " << l+1 << "o. numero de sua aposta: ";
	   	   cin >> resposta[l];
	   	   if(Gabarito[l] == resposta[l]){
	   	   	  acertos++;
			}
	   }
	   
	   cout <<"\nNumeros apostados: ";
	   for (int l=0 ; l < 8 ; l++){ 
	     cout << resposta[l] << " ";
	    }
	   
	   if(acertos == 8){
	     cout << "\nParabens voce ganhou!";
	   }else{
	   
	     cout << "\nTotal de acertos: " << acertos;
	  }
	}
}

