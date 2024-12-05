#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

//------------------------------------------------------------
// Coord
//------------------------------------------------------------
class Coord {
   friend ostream& operator<< (ostream& os, const Coord& p);

public:
   Coord();
//   Coord(const Coord& c);
   Coord(int x, int y);
   void set_x(int x);
   void set_y(int y);
   int  get_x() const;
   int  get_y() const;

   bool operator< (const Coord& autre);

private:
   int x;
   const int y;
};

//------------------------------------------------------------
ostream& operator<< (ostream& os, const Coord& p) {
   os  << "(" << p.x << ", " << p.y << ")";
   return os;
}

Coord::Coord() {
   this->x = 0;
   this->y = 0;
}

//Coord::Coord(const Coord& c) :  x(c.x), y(c.y) { cout << "Cc"; }

Coord::Coord(int x, int y) {
   this->x = x;
   this->y = y;
}

//------------------------------------------------------------
void Coord::set_x(int x)  { this->x = x; }
void Coord::set_y(int y)  { this->y = y; }

//------------------------------------------------------------
int  Coord::get_x() const { return x; }
int  Coord::get_y() const { return y; }

//------------------------------------------------------------
bool Coord::operator< (const Coord& autre) {
   return sqrt(pow(this->x, 2) +  pow(this->y, 2))
        < sqrt(pow(autre.x, 2) +  pow(autre.y, 2));
}

//------------------------------------------------------------
class C {
   double d;
   public:
   C(double _d) : d(_d) {
      cout << "d";
   }

   explicit C(int i) : d(i) {
      cout << "i";
   }
};

//------------------------------------------------------------
int main() {

   C c1 = 4;
   C c2(4);
   C c3 = C(4);
   C c4 = (C)4;

   cout << endl;

   Coord coord1 (1, 2);
   Coord coord2 (coord1);
   Coord coord3 =  coord1;

   return EXIT_SUCCESS;
}

