#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

class C {
   friend ostream& operator<< (ostream& os, const C& c);
public:
   C()                        { this->n = 1;                   }
   C(int n)                   { this->n = n;                   }
   C& operator= (const C& c)  { this->n = c.n;  return *this;  }
   static void f()            { cout << "static : " << commun; }
private:
   int n;
   static int commun;
};

int C::commun = 2;

ostream& operator<< (ostream& os, const C& c) {
   os << c.n << " " << c.commun;
   return os;
}

//------------------------------------------------------------
int main() {

   C c0;       // constructeur sans paramètre
   C c1 = 4;   // constructeur par valeur
   C c2(4);    // constructeur par valeur
   C c3(c2);   // constructeur par copie
   c2 = c1;    // opérateur d'affectation

   C::f();

   cout << endl;
   cout << c2 << endl;

   return EXIT_SUCCESS;
}

