#include <iostream>
using namespace std;

// João Vitor Gomes Vieira

int main(){
 
    int Cont, Mat, CodPro, MatAlu;                //cont = contador,  Mat = Matricula, CodPro = CodigoProduto,  MatAlu = Matricula do aluno com o maior bonus
    float Bonus, PreUni, qtdPro, SubTot, MaiorBo;    // PreUni = preçoUnitario,  qtdPro = quantidadeProdutos, SubTot = subtotal ,  MaiorBo = MaiorBonus

    for (Cont = 1; (Cont <= 10); Cont++){         // laço para o recebimento dos dados dos aluno benificiados
    
       SubTot = 0;              // Toda vez que o contador da encremento o subtotal zera assim toda vez que um aluno finalizar a compra o proximo aluno começara com o subtotal = 0 

     do{ 
        cout << "\n\nVoce e o "<< Cont << "o. aluno benificiado! ";
        cout << "\nDigite a sua matricula: ";
        cin >> Mat;
     }while(Mat <= 0);         // se a matricula for menor que zero ou igual vai ficar sempre repetindo ate que a matricula seja positiva 

        cout << "\nGanhou a promocao dos 10 primeiros alunos!";
        Bonus = 0.10;         // a matricula sendo verdadeira o aluno ja recebe o seu bonus de 10%

      do{
        cout << "\nDigite o codigo do produto: ";
        cin >> CodPro;

        if(CodPro > 0){
               cout << "\nDigite o preco unitario do produto: ";
               cin >> PreUni;
               cout << "\nDigite a quantidade desejada desse produto: ";
               cin >> qtdPro;
               SubTot = (PreUni*qtdPro)+SubTot;
               cout << "\nSubtotal ate o momento R$ " << SubTot;

            if(SubTot >= 50){      // se o subtotal for maior que 50 então o aluno ganha mais um bonus passando agora a ser 20%
                cout << "\nGanhou a promocao dos 50 reais!";
                Bonus = 0.20;
            }
            if (Cont == 1){   // o maior bonus vai ser o primeiro digitado
                  MaiorBo = (SubTot*Bonus);
                  MatAlu = Mat; 
            }else{
               if(MaiorBo < SubTot*Bonus){ // se o primeiro bonus for menor que o proximo então o proximo sera o maior e vai testando ate o cont = 11
                  MaiorBo = (SubTot*Bonus);
                  MatAlu = Mat;
               }
            }  
        }
      }while(CodPro > 0);  

        cout << "\nValor final da compra R$ " << SubTot;
        cout << "\nValor do bonus para a proxima compra R$ " << (SubTot*Bonus); 
        cout << "\nCompra finalizada! ";

    }  
        cout << "\n\nMatricula do aluno ( "<< MatAlu << " ) que obteve o maior bonus de R$ "<< MaiorBo; 
}