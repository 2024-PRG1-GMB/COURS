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
   Heure()               : hh(0), mm(0), CSTE(0)        { cout << "Heure()" << endl; };
   Heure(int h, int m)   : hh(h), mm(m), CSTE(0)        {  };
   Heure(const Heure& h) : hh(h.hh), mm(h.mm), CSTE(0)  { cout << "Heure(const Heure& h)" << endl; };
   void set_hh(int hh)     { (*this).hh = hh; }
   void set_mm(int mm);
   int  get_hh()  const    { return hh; }
   int  get_mm()  const    { return mm; }//   Heure(int hh, int mm) : hh(0), mm(0)   { /*cout << "constructeur"; */};
//   Heure(const Heure& h)   { this->hh = 0; this->mm = h.mm; cout << "copie" << endl; };

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
int main() {

   Heure h1(12, 34);
   Heure h2(h1);
   Heure h3 = h1;
   cout << h2 << endl;

   vector<Heure> vh(3);

   return EXIT_SUCCESS;

}

