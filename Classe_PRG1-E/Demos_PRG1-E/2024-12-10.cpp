#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

class C {
   friend ostream& operator<< (ostream& os, const C& c);

public:
   enum class Couleur {ROUGE, VERT, BLEU};

   C()        : C(0)                   { this->n = 0;                   }
   C(int n)   : cste(n)                { this->n = n;                   }
   C& operator= (const C&c)            { if (this == &c) return *this;
                                         this->n = c.n; return *this;   }

   C(Couleur c)  : cste(n), couleur(c) { this->n = n;                   }


   void f1 ()  const       { cout << CSTE; }
   static void f2 ()       { cout << CSTE; /*cout << n;*/ }


private:
   int n;
   const  int cste;     // locale
   static int CSTE;     // commun à tous les objets de cette classe
   Couleur couleur;
};

int C::CSTE = 21;

//------------------------------------------------------------
ostream& operator<< (ostream& os, const C& c) {
   os << "n       : " << c.n     << endl;
   os << "cste    : " << c.cste  << endl;
   os << "CSTE    : " << c.CSTE  << endl;
   return os;
}

//------------------------------------------------------------
int main() {

   C c0;       // constructeur sans paramètre
   C c1 = 4;   // constructeur par valeur
   C c2(4);    // constructeur par valeur
   C c3(c2);   // constructeur par copie
   c2 = c1;    // opérateur d'affectation

   C c4(C::Couleur::BLEU);

   cout << endl;
   cout << c2 << endl;

   c2.f1(); cout << endl;
   c2.f2(); cout << endl;
//   C::f2(); cout << endl;

   return EXIT_SUCCESS;
}

