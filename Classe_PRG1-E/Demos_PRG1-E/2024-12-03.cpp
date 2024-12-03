#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;


//------------------------------------------------------------
// struct Heure
//------------------------------------------------------------
class Heure {
   friend ostream& operator<< (ostream& os, const Heure& hh);
   friend void reset(Heure& hh)               { hh.hh = 0; hh.mm = 0;};
   friend void reset(Heure& hh, int h, int m) { hh.hh = h; hh.mm = m;};
public:
   Heure()               : hh(0), mm(0), CSTE(0)        {  };
//   Heure(int hh, int mm) : hh(0), mm(0)   { /*cout << "constructeur"; */};
//   Heure(const Heure& h)   { this->hh = 0; this->mm = h.mm; cout << "copie" << endl; };
   void set_hh(int hh)     { (*this).hh = hh; }
   void set_mm(int mm);
   int  get_hh()  const    { return hh; }
   int  get_mm()  const    { return mm; }
private:
   int hh;
   int mm;
   const int CSTE;
};

//------------------------------------------------------------
void Heure::set_mm(int mm) {
   this->mm = mm;
}

//------------------------------------------------------------
ostream& operator<< (ostream& os, const Heure& hh) {
   os << hh.hh << ":" << hh.mm;
//   os << hh.get_hh() << ":" << hh.get_mm();
   return os;
}

//------------------------------------------------------------
struct Struct {
   int    toi;
   double moi;
};

Struct moi_lui{1, 2.3};

class Personne {
public:
   Personne(const string& nom, const Heure& h) : nom(nom), anni(h) {};
private:
   string nom;
   Heure  anni;
};
//------------------------------------------------------------
int main() {

   Heure h1(12, 34);
   Heure h2(h1);
   Heure h3 = h1;

   string str = "coucou";
   str.size();

////   Heure hm1;
//   cout << hm1 << endl;
//   reset(hm1);
//   cout << hm1 << endl;

//   const Heure hm2(01, 23);
//   hm2.get_mm();
//   reset(hm2);
//   //hm2.set_mm(34);
//   cout << hm2 << endl;
//
//   hm1.set_hh(35);
//   cout << hm1 << endl;


   vector<Heure> v(10);

   return EXIT_SUCCESS;
}

