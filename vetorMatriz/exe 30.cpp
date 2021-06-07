#include <iostream>
using namespace std;
int main() {
 
 char tabuleiro[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

  for (int l = 0; l < 3; l++){
    cout <<"\t";
    for (int c = 0; c < 3; c++){
      cout << tabuleiro [l][c];
      if( c != 2)
      cout << " | ";
   }
   if( l != 2)
   cout << endl << "\t---+---+---" << endl;
  }
}
