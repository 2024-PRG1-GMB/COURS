#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

class C {
   friend ostream& operator<< (ostream& os, const C& c);
public:
   C()                        { this->n = 1;    };
   C(int n)                   { this->n = n;    };
   C& operator= (const C& c)  { this->n = c.n;  return *this;  };
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

   C c0;
   C c1 = 4;
   C c2(4);
   C c3 = C(4);
   c2 = c1;

   cout << c2 << endl;

   return EXIT_SUCCESS;
}

