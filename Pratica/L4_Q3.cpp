#include <iostream>
using namespace std;

int main(){
    
  int Dia1, Mes1, Ano1, Dia2, Mes2, Ano2, qntDiasAno1, qntDiasAno2, TotDiaMes, dias;

   do{ 
   cout << "\nDigite o ano da primeira data: ";
   cin >> Ano1;
   }while(Ano1  <= 0);
 
  do{ 
   cout << "\nDigite o mes da primeira data: ";
   cin >>  Mes1;
   }while((Mes1 < 1) || (Mes1 > 12));

   if (Mes1 == 2){ 
     do{ 
       cout << "\nDigite o Dia da primeira data: ";
       cin >>  Dia1;
     }while((Dia1 < 1) || (Dia1 > 28));
   }else{
    if ((Mes1 == 4) || (Mes1 == 6) || (Mes1 == 9) || (Mes1 == 11)){ 
       do{ 
          cout << "\nDigite o Dia da primeira data: ";
          cin >>  Dia1;
       }while((Dia1 < 1) || (Dia1 > 30));
    }else{
      do{ 
          cout << "\nDigite o Dia da primeira data: ";
          cin >>  Dia1;
       }while((Dia1 < 1) || (Dia1 > 31));
    }  
  }
  cout << "\nA data " << Dia1 << "/" << Mes1 << "/" << Ano1 << " E valida!";

   do{ 
   cout << "\nDigite o ano da Segunda  data: ";
   cin >> Ano2;
   }while(Ano2  <= 0);
 
  do{ 
   cout << "\nDigite o mes da Segunda  data: ";
   cin >>  Mes2;
   }while((Mes2 < 1) || (Mes2 > 12));

   if (Mes2 == 2){ 
     do{ 
       cout << "\nDigite o Dia da Segunda  data: ";
       cin >>  Dia2;
     }while((Dia2 < 1) || (Dia2 > 28));
   }else{
    if ((Mes2 == 4) || (Mes2 == 6) || (Mes2 == 9) || (Mes2 == 11)){ 
       do{ 
          cout << "\nDigite o Dia da Segunda data: ";
          cin >>  Dia2;
       }while((Dia2 < 1) || (Dia2 > 30));
    }else{
      do{ 
          cout << "\nDigite o Dia da Segunda  data: ";
          cin >>  Dia2;
       }while((Dia2 < 1) || (Dia2 > 31));
    }  
  }
  cout << "\nA data " << Dia2 << "/" << Mes2 << "/" << Ano2 << " E valida!";

  switch(Mes1){
    case 1 : TotDiaMes = 0;
    break;
    case 2 : TotDiaMes = 31;
    break;
    case 3 : TotDiaMes = 31+28 ;
    break;
    case 4 : TotDiaMes = 31+28+31 ;
    break;
    case 5 : TotDiaMes =  31+28+31+30 ;
    break;
    case 6 : TotDiaMes = 31+28+31+30+31 ;
    break;
    case 7 : TotDiaMes =  31+28+31+30+31+30 ;
    break;
    case 8 : TotDiaMes =  31+28+31+30+31+30+31 ;
    break;
    case 9 : TotDiaMes =  31+28+31+30+31+30+31+31 ;
    break;
    case 10 : TotDiaMes = 31+28+31+30+31+30+31+31+30 ;
    break;
    case 11 : TotDiaMes = 31+28+31+30+31+30+31+31+30+31 ;
    break;
    case 12 : TotDiaMes = 31+28+31+30+31+30+31+31+30+31+30 ;
    break;
  }

  qntDiasAno1 = (Ano1 * 365)+TotDiaMes+Dia1;

   switch(Mes2){
    case 1 : TotDiaMes = 0;
    break;
    case 2 : TotDiaMes = 31;
    break;
    case 3 : TotDiaMes = 31+28 ;
    break;
    case 4 : TotDiaMes = 31+28+31 ;
    break;
    case 5 : TotDiaMes =  31+28+31+30 ;
    break;
    case 6 : TotDiaMes = 31+28+31+30+31 ;
    break;
    case 7 : TotDiaMes =  31+28+31+30+31+30 ;
    break;
    case 8 : TotDiaMes =  31+28+31+30+31+30+31 ;
    break;
    case 9 : TotDiaMes =  31+28+31+30+31+30+31+31 ;
    break;
    case 10 : TotDiaMes = 31+28+31+30+31+30+31+31+30 ;
    break;
    case 11 : TotDiaMes = 31+28+31+30+31+30+31+31+30+31 ;
    break;
    case 12 : TotDiaMes = 31+28+31+30+31+30+31+31+30+31+30 ;
    break;
  }

  qntDiasAno2 = (Ano2 * 365)+TotDiaMes+Dia2;

  dias = (qntDiasAno1  - qntDiasAno2);

  if(dias < 0){
     dias = dias*(-1);
  }
  cout << "A quantidades de dias entres os anos: " << dias << " Dias";
} 