#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

class Pile {
public:
   Pile() : sommet(0) {}
   void push(int val) { data[sommet] = val; ++sommet;}

   // pas de garantie forte !!
//   int  pop ()        { --sommet; return data[sommet];}

   // garantie forte
   int  top () {
      if (sommet == 0)
         throw "Pile is empty";
      return data[sommet-1];
   } //

   void pop ()        { --sommet; }

private:
   size_t sommet;
   array<int, 10> data;
};
//------------------------------------------------------------
int main() {



   return EXIT_SUCCESS;
}