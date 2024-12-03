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
   Coord(int x, int y);
   void set_x(int x);
   void set_y(int y);
   int  get_x() const;
   int  get_y() const;

   bool operator< (const Coord& autre);

private:
   int x;
   int y;
};

//------------------------------------------------------------
// Points
//------------------------------------------------------------
class Point {
   friend ostream& operator<< (ostream& os, const Point& p);

public:
   Point();
   Point(const string& nom, int x, int y);
   void set_x(int x);
   void set_y(int y);
   int  get_x() const;
   int  get_y() const;

private:
   string nom;
   Coord  coord;
};

//------------------------------------------------------------
// Coord
//------------------------------------------------------------
//------------------------------------------------------------
ostream& operator<< (ostream& os, const Coord& p) {
   os  << "(" << p.x << ", " << p.y << ")";
   return os;
}

Coord::Coord() {
   this->x = 0;
   this->y = 0;
}

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
// Points
//------------------------------------------------------------
Point::Point() {
   this->nom = "default";
   this->coord = Coord();
}

//------------------------------------------------------------
Point::Point(const string& nom, int x, int y) {
   this->nom = nom;
   this->coord = Coord(x, y);
}

//------------------------------------------------------------
void Point::set_x(int x)  { this->coord.set_x(x); }
void Point::set_y(int y)  { this->coord.set_y(y); }

//------------------------------------------------------------
int  Point::get_x() const { return this->coord.get_x(); }
int  Point::get_y() const { return this->coord.get_y(); }

//------------------------------------------------------------
// friend
//------------------------------------------------------------
ostream& operator<< (ostream& os, const Point& p) {
   os  << p.nom << " " << p.coord;
   return os;
}

//------------------------------------------------------------
int main() {
   Point p1;
   cout << p1 << endl;

   Point p2("nom"s, 1, 2);
   cout << p2 << endl;
//   cout << p1.get_x() << " " << p1.get_y() << endl;


   vector<Point> vp(10, Point("nom", 1, 2));

   if (Coord(1, 2) < Coord(2, 3))
      cout << "oui";

   return EXIT_SUCCESS;
}

