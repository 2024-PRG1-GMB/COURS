#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;


class C {
   friend ostream& operator<< (ostream& os, const C& c);
public:
   using Data = int;
   enum class Couleur {Rouge, Vert, Bleu};

   C()                           { this->n = 1;                            }
   C(int n)                      { this->n = n;                            }
   C& operator= (const C& c)     { this->n = c.n;  return *this;           }
   void setData (const Data& d)  { this->data = d;                         }
   void setCouleur (Couleur c)   { this->couleur = c;                      }

   static void f()               { // cout << "menbre : " << n      << endl;
                                   cout << "static : " << commun << endl;  }

   void g() const                { cout << "menbre : " << n      << endl;
                                   cout << "static : " << commun << endl;   }
private:
   int n;
   static int  commun;
   Couleur     couleur;
   Data        data;
};

int C::commun = 2;

//------------------------------------------------------------
ostream& operator<< (ostream& os, const C& c) {
   os << c.n << " " << c.commun;
   return os;
}

//------------------------------------------------------------
//ostream& operator<< (ostream& os, const vector<int>& v) {
//   os << "[";
//   for (size_t i=0; i< v.size(); ++i) {
//      if (i) os << ", ";
//      os << v[i];
//   }
//   return os << "]";
//}

//------------------------------------------------------------
void afficher (vector<int>::const_iterator begin, vector<int>::const_iterator end) {
   cout << "[";
   for (auto it=begin; it!=end; ++it) {
      if (it != begin) cout << ", ";
      cout << *it;
   }
   cout << "]";
}

//------------------------------------------------------------
int main() {

   const vector v {1, 2, 3, 4, 5, 6};
   afficher(v.cbegin(), v.cend()); cout << endl;
   afficher(v.crbegin(), v.crend()); cout << endl;
//   array  a {1, 2, 3, 4, 5, 6};   afficher(a); cout << endl;

   return EXIT_SUCCESS;

   C c0;       // constructeur sans paramètre
   C c1 = 4;   // constructeur par valeur
   C c2(4);    // constructeur par valeur
   C c3(c2);   // constructeur par copie
   c2 = c1;    // opérateur d'affectation

   C::Data d = 12;

   C::f();
   c2.f();
   c2.setCouleur(C::Couleur::Rouge);

//   C::g();
   c2.g();


   cout << endl;
   cout << c2 << endl;

   return EXIT_SUCCESS;
}

