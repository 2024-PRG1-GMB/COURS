#include <iostream>
#include <cstdlib>
using namespace std;

//------------------------------------------------------------
struct S {
   int a;
   int b;
   S(int a, int b) : a(a), b(b) { cout << "S" << endl; }
};

//------------------------------------------------------------
class C {
public:
   C(int a, int b) : a(a), b(b) { cout << "C" << endl; }
private:
   int a;
   int b;
};

//void f(int tab[]) {
void f(int* tab, size_t size) {
   cout << "sizeof(tab)    : " << size * sizeof(tab[0])  << endl;
   cout << "taille de array: " << size                   << endl;
}
//------------------------------------------------------------
int main() {

   S s1(1, 2);
   S s2{1, 2};

   C c1(1, 2);
   C c2{1, 2};


   int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   cout << "sizeof(tab)    : " << sizeof(tab)  << endl;
   cout << "taille de array: " << sizeof(tab) / sizeof(tab[0]) << endl;

   f(tab, sizeof(tab) / sizeof(tab[0]));
   f(tab, 2);
   return EXIT_SUCCESS;
}