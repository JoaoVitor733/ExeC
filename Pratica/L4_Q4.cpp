    /*
 Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, 
 depois a operação (+, -, *, /), outro número, outra operação, outro número, 
 e assim continua até que ele digite enfim o sinal “=”, quando então a calculadora mostra o 
 resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 4 = 6. O algoritmo deve resolver a expressão na 
 ordem de digitação
*/

#include <iostream>
using namespace std;

int main(){
    
  
  float Num,  Resu  ;
  char  opera;

   cout << "Digite o primeiro numero: " ;   
    cin >> Resu;

  do{
 
  do{  
    cout << "Digite a operacao (+, -, /, *, ) ou o igual = para finalizar  ";
    cin >> opera;
  }while((opera != '+') && (opera != '-') && (opera != '*') && (opera != '/') && (opera != '='));
   
   if (opera != '='){   
     cout << "Digite um numero: " ;   
     cin >> Num;
   
     switch(opera){
      case '+' : Resu = (Resu+ Num );
      break;
      case '-' : Resu = (Resu-Num);
      break;
      case '/' :  Resu = (Resu/Num);
      break;
      case '*' :  Resu = (Resu*Num);
      break;
      case '=' :  cout << Resu;
       
    } 
   }       
  }while (opera != '=' );

  cout << "O resulta foi " << Resu;
   
}