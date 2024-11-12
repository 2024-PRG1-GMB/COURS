#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

void echanger(int& gauche, int& droite) {
   int tmp = gauche;
   gauche = droite;
   droite = tmp;
}

int main() {

   echanger (4, 3);

   int i = 4;
   const int I = 8;

   const int* ptr1 = &i;
   ptr1 = &I;

   int& ref1 = i;
   ref1 = I;

   return EXIT_SUCCESS;
}
