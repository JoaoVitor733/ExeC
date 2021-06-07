QUESTÃO 01

#include <iostream>
using namespace std;

int main() {
  int anos, mes, dias, IdadeEmDias;
  cout << "Digite sua idade em anos: ";
  cin >> anos;
  cout << "Digite sua idade em meses: ";
  cin >> mes;
  cout << "Digite sua idade em dias: ";
  cin >> dias;
  IdadeEmDias = (anos*365) + (mes*30) + dias;
  cout << IdadeEmDias << " Dias" << endl;
  system("PAUSE");
}


QUESTÃO 02 

#include <iostream>
using namespace std;

int main (){
	int cigarro, tempo;
	float carteira, gasto, tempofumo;
	cout << "Digite a quanto tempo voce fuma (em anos): ";
	cin >> tempo;
	tempofumo = tempo * 365;
	cout << "Digite a quantidade de cigarro fumado por dia: " ;
	cin >> cigarro;
    cout << "Quanto custa uma carteira de cigarro? " ;
	cin >> carteira;
	gasto = (carteira/20)*tempofumo*cigarro;
	cout << "Se a carteira tiver 20 unidades em " << tempo << " anos voce gastou: " << gasto << " reais";

}

QUESTÃO 03

#include <iostream>
using namespace std;

int main(){
  int parcelas, parcela, numepar;
  float valor;
  cout << "Digite o valor da compra: ";
  cin >> valor;
  cout << "Parcelamos em ate 10 vezes sem juros deseja parcelar em quantos? ";
  cin >> parcelas;
  parcela =  valor/ parcelas;
  cout << "sua compra fica em " << parcelas << " parcelas de R$" << parcela;

}

QUESTÃO 04

#include <iostream>
using namespace std;

int main(){
    int numero;
    float totpercen, percentual;
    cout << "Digite um numero (INTEIRO): ";
    cin >> numero;
    cout << "Digite um percentual: ";
    cin >> percentual;
    totpercen = percentual/100;
    cout << percentual << "% de " << numero << " e: "<<totpercen*numero;
}

QUESTÃO 05

#include <iostream>
using namespace std;

int main(){
    float duracao, minutos, horas;
    cout << "quantos segundos dura seu evento? ";
    cin >> duracao;
    minutos = duracao/60;
    horas = minutos/60;
    cout << "seu evento dura: " << duracao <<  " Segundos, "<< minutos << " Minutos, " << horas << " Horas";
}

QUESTÃO 06

#include <iostream>
using namespace std;
/* custo carro novo (SOMCUSFAB + PORDIS + IMP)
PORDIS = 28%
IMP = 45
Ler o custo de fabrica
*/
int main(){
    float CustoFabrica, CustoCarro;
    cout << "Digite o custo de fabrica de um carro: ";
    cin >> CustoFabrica;
    CustoCarro = ((CustoFabrica*0.28+CustoFabrica)+ (0.45*CustoFabrica));
    cout << "Custo ao  de consumidor: " << CustoCarro;

}
QUESTÃO 07

#include <iostream>
using namespace std;
/* ler uma temperatura em C e converta para F
formula  F=(9*C+160)/5
*/
int main(){
    //declarações de  variaveis//
    float F, C;
    // entrada de dados//
    cout << "Digite um temperatura em grau (CELSIUS): ";
    cin >> C;
    // processamento de dados//
     F = (9* C +160)/5;
     //saida dos dados//
    cout << C << " Graus Celsius em Fahrenheit e " << F << " Graus";

}

QUESTÃO 08

#include <iostream>
using namespace std;
/* solicitar a cotação do dola e quantos dolas vai ser convertidos
leia o valor do dolar e converta para reais
*/
int main(){
    //declarações de variaveis//
    float CotacaoAtual, Conversao;
    int DolarConvertido;
    //entrada de dados//
    cout << "Digite a cotacao atual do dolar: ";
    cin >> CotacaoAtual;
    cout << "Digite a quantidade de dolar que vai ser convertido: ";
    cin >> DolarConvertido;
    //processamento//
    Conversao = DolarConvertido*CotacaoAtual;
    //saida de dados//
    cout << "US$" << DolarConvertido << " sao: R$" <<Conversao ;
}

QUESTÃO 09

#include <iostream> 
using namespace std;
/* ler dois valores inteiros em val1 e val2
o valor das variaveis serão trocados
*/
int main(){
    //declarações de variaveis//
    int Val1, Val2;
    //entrada de dados//
    cout << "Digite um numero (INTEIRO) para Val1: ";
    cin >> Val1;
    cout << "Digite um numero (INTEIRO) para Val2: ";
    cin >> Val2;
    //saida dos dados//
    cout << "Val1 = " << Val2 << " Val2 = " << Val1;
}

QUESTÃO 10

#include <iostream>
using namespace std;
/* ler o valor de duas variaveis A e B e some, subtraia, multiplique e divide A por B
agora leia dos valores C e D
*/
int main(){
    //declaração de variaveis//
    int A, B, Soma, Sube, Mute, Dive;
    bool C, D;
    //entradas de dados//
    cout << "Digite um numero (Inteiro) para A: ";
    cin >> A;
    cout << "Digite um numero (Inteiro) para B: ";
    cin >> B;
    //processamento//
    C = true;
    D = false;
    Soma = A+B;
    Sube = A-B;
    Mute = A*B;
    Dive = A/B;
    //saida de dados//
    cout << "A+B=" << Soma  << " A-B=" << Sube  << " A*B=" << Mute  << " A/B=" << Dive << endl;
    cout << "Negacao de 1: " << !(C) << " Negacao de 0: " << !(D) << " Conjucao de 1 e 0: " << ((C)&&(D)) << " Disjucao de 1 ou 0: " << ((C)||(D))  ;
}





