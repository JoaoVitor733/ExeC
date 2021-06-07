 
#include <iostream>
using namespace std;

int main(){
//João Vitor Gomes Vieira
   int PontJog1 = 0, PontJog2 = 0;            //Variaveis para guardar as pontuações dos jogadores
   char JogA, JogB, Continuar;                  // variaveis para guardar a escolha dos jogadores

   cout << "\nSejam bem vindos ao jogo Pedra, Papel ou Tesoura :)\n";
   cout << "\nDois jogadores fazem suas escolhas vence aquele  que na terceira rodada fizer mais pontos!\n";
   cout << "\nDeseja continuar? ('S' para sim e 'N' para nao): ";
   cin >> Continuar;

   switch (Continuar){
       case 'S' :
  
   cout << "\n---------------PRIMEIRA RODADA --------------\n";

   cout << "\nDigite sua opcao jogador A, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogA;                                                 //variavel recebendo a escolha do jogador
   cout << "\nDigite sua opcao jogador B, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogB;                                                  //variavel recebendo a escolha do jogador

   if ((JogA == 'P') && (JogB == 'T')){ // o primeiro joogador escolhendo pedra o segundo tesoura então o vencedor sera o jogador 1
       PontJog1 =  +10;
       PontJog2 =  -1;   
   }else{
       if ((JogA == 'P') && (JogB == 'p')){ // o primeiro jogador escolhendo pedra e o segundo papel entao o segundo jogador e o vencedor
          PontJog1 =  -1;
          PontJog2 =  10;
       }else{
           if ((JogA == 'P')&&(JogB == 'P')){ //ja ambos jogando pedra ocorre um empate
              PontJog1 =  -5;
              PontJog2 =  -5; 
           }else{
               if ((JogA == 'p') && (JogB == 'P')){// o Primeiro jogador jogando papel e o segundo pedra então o primeiro e o vencendor
                    PontJog1 =  +10;
                    PontJog2 =  -1;   
               }else{
                   if((JogA == 'p') && (JogB =='T')){// ja o primeiro jogando papel e o segundo tesoura enão quem vence e o segundo jogador
                       PontJog1 =  -1;
                       PontJog2 =  10; 
                   }else{
                        if ((JogA == 'p')&&(JogB == 'p')){ //ja ambos jogando papel ocorre um empate
                           PontJog1 =  -5;
                           PontJog2 =  -5;  
                   }else{
                       if ((JogA == 'T') && (JogB == 'p')){ // o primeiro jgador jogando  Tesoura e o segundo papel então o primeiro jogador e o vencedor
                            PontJog1 =  +10;
                            PontJog2 =  -1; 
                       }else{
                            if ((JogA == 'T') && (JogB == 'P')){ // o primeiro jogador jogando Tesoura e o segundo pedra então o segundo e o vencedor
                                 PontJog1 =  -1;
                                 PontJog2 =  +10; 
                            }else{
                               if ((JogA == 'T') && (JogB == 'T')) { // ja ambos jogando Tesoura ocorre um empate
                                     PontJog1 =  -5;
                                     PontJog2 =  -5;  
                               }else{
                                   cout << "Letra INVALIDA";
                               }
                            }
                       }
                   }
                 }
               }
            }          
       }
   }

   cout << "\nO jogador A termina a primeira rodada com " << PontJog1 << " pontos " << "\nO jogador B termina a primeira rodada com " << PontJog2  << " pontos ";

   cout << "\n-----------------------------------------------\n";

    cout << "\n---------------SEGUNDA RODADA ----------------\n";

   cout << "\nDigite sua opcao jogador A, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogA;                                                  
   cout << "\nDigite sua opcao jogador B, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogB;
   
    if ((JogA == 'P') && (JogB == 'T')){  
       PontJog1 = (PontJog1 + 10);
       PontJog2 = (PontJog2 - 1);   
   }else{
       if ((JogA == 'P') && (JogB == 'p')){  
          PontJog1 =  (PontJog1 - 1); 
          PontJog2 =  (PontJog2 + 10);
       }else{
           if ((JogA == 'P')&&(JogB == 'P')){   
              PontJog1 =  (PontJog1 - 5);
              PontJog2 =  (PontJog2 - 5); 
           }else{
               if ((JogA == 'p') && (JogB == 'P')){
                     PontJog1 = (PontJog1 + 10);
                     PontJog2 = (PontJog2 - 1);   
               }else{
                   if((JogA == 'p') && (JogB =='T')){
                       PontJog1 =  (PontJog1 - 1); 
                       PontJog2 =  (PontJog2 + 10);
                   }else{
                        if ((JogA == 'p')&&(JogB == 'p')){ 
                           PontJog1 =  (PontJog1 - 5);
                           PontJog2 =  (PontJog2 - 5);  
                   }else{
                       if ((JogA == 'T') && (JogB == 'p')){
                            PontJog1 = (PontJog1 + 10);
                            PontJog2 = (PontJog2 - 1);  
                       }else{
                            if ((JogA == 'T') && (JogB == 'P')){
                                 PontJog1 =  (PontJog1 - 1); 
                                 PontJog2 =  (PontJog2 + 10); 
                            }else{
                               if ((JogA == 'T') && (JogB == 'T')) {
                                     PontJog1 =  (PontJog1 - 5);
                                     PontJog2 =  (PontJog2 - 5);  
                               }else{
                                   cout << "Letra INVALIDA";
                               }
                            }
                       }
                   }
                 }
               }
            }          
       }
   }

   cout << "\nO jogador A termina a SEGUNDA rodada com " << PontJog1 << " pontos " << "\nO jogador B termina a SEGUNDA rodada com " << PontJog2  << " pontos ";
   cout << "\n-----------------------------------------------\n";

    cout << "\n---------------SEGUNDA RODADA ----------------\n";

   cout << "\nDigite sua opcao jogador A, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogA;                                                  
   cout << "\nDigite sua opcao jogador B, se e ('P' para Pedra, 'p' para Papel ou T para Tesoura): ";
   cin >> JogB;
   
    if ((JogA == 'P') && (JogB == 'T')){  
       PontJog1 = (PontJog1 + 10);
       PontJog2 = (PontJog2 - 1);   
   }else{
       if ((JogA == 'P') && (JogB == 'p')){  
          PontJog1 =  (PontJog1 - 1); 
          PontJog2 =  (PontJog2 + 10);
       }else{
           if ((JogA == 'P')&&(JogB == 'P')){   
              PontJog1 =  (PontJog1 - 5);
              PontJog2 =  (PontJog2 - 5); 
           }else{
               if ((JogA == 'p') && (JogB == 'P')){
                     PontJog1 = (PontJog1 + 10);
                     PontJog2 = (PontJog2 - 1);   
               }else{
                   if((JogA == 'p') && (JogB =='T')){
                       PontJog1 =  (PontJog1 - 1); 
                       PontJog2 =  (PontJog2 + 10);
                   }else{
                        if ((JogA == 'p')&&(JogB == 'p')){ 
                           PontJog1 =  (PontJog1 - 5);
                           PontJog2 =  (PontJog2 - 5);  
                   }else{
                       if ((JogA == 'T') && (JogB == 'p')){
                            PontJog1 = (PontJog1 + 10);
                            PontJog2 = (PontJog2 - 1);  
                       }else{
                            if ((JogA == 'T') && (JogB == 'P')){
                                 PontJog1 =  (PontJog1 - 1); 
                                 PontJog2 =  (PontJog2 + 10); 
                            }else{
                               if ((JogA == 'T') && (JogB == 'T')) {
                                     PontJog1 =  (PontJog1 - 5);
                                     PontJog2 =  (PontJog2 - 5);  
                               }else{
                                   cout << "Letra INVALIDA";
                               }
                            }
                       }
                   }
                 }
               }
            }          
       }  
   } cout << "\nO jogador A termina a terceira rodada com " << PontJog1 << " pontos " << "\nO jogador B termina a terceira  rodada com " << PontJog2  << " pontos \n";
    if(PontJog1 > PontJog2){
        cout << "\nJogador A venceu\n";
    }else{
      if(PontJog1 < PontJog2){
          cout << "\nJogador B venceu\n";
      }else{
          cout << "\nOs jogadores terminaram empatados\n";
      }
    }

    if((PontJog1 > 0) && (PontJog2 > 0)){
        cout << "\nambas as pontuacoes sao positivas";
    }else{
        if ((PontJog1 < 0) && (PontJog2 < 0)){
            cout << "\nambas as pontuacoes sao negativas";
        }else{
            cout << "\nse so uma das pontuacoes e negativa ";
        }
    }

    break;
    case 'N' :
        cout << "OK, tchau!";   
   } 
   cout << "\n-----------------------------------------------\n";

   cout << "\nFim de programa";
   
}