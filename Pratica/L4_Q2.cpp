#include <iostream> 
using namespace std;

int main(){

   int i ,j , Resu;

   for (i = 1; (i <= 10); i++){

     cout << "\n\nTabuado do " << i << "\n";

     for(j = 1; (j <= 10); j++){

       Resu = (i*j);
       cout << "\n" << i << " x " << j << " = " << Resu;

     }
   }
}