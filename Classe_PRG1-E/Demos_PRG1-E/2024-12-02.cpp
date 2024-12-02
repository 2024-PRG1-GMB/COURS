#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


//------------------------------------------------------------
// struct Heure
//------------------------------------------------------------
class Heure {
   friend ostream& operator<< (ostream& os, const Heure& hh);
   friend void reset(Heure& hh) { hh.hh = 0; hh.mm = 0;};
public:
   Heure()                 { this->hh = 0;  this->mm = 0; };
   Heure(int hh, int mm)   { this->hh = hh; this->mm = mm; };
   void set_hh(int hh)     { (*this).hh = hh; }
   void set_mm(int mm);
   int  get_hh()  const    { return hh; }
   int  get_mm()  const    { return mm; }
private:
   int hh;
   int mm;
};

//------------------------------------------------------------
void Heure::set_mm(int mm) {
   this->mm = mm;
}

//------------------------------------------------------------
ostream& operator<< (ostream& os, const Heure& hh) {
   os << hh.hh << ":" << hh.mm;
   return os;
}

//------------------------------------------------------------
struct Struct {
   int    toi;
   double moi;
};

Struct moi_lui{1, 2.3};

//------------------------------------------------------------
int main() {

   string str = "coucou";
   str.size();

   Heure hm1;
   cout << hm1 << endl;
   reset(hm1);
   cout << hm1 << endl;

   const Heure hm2(01, 23);
   hm2.get_mm();
   reset(hm2);
   //hm2.set_mm(34);
   cout << hm2 << endl;

   hm1.set_hh(35);
   cout << hm1 << endl;


   return EXIT_SUCCESS;
}

