#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;


void f_vecteur(vector<int>& v) {
   cout << "vecteur" << endl;
}

void f_array(array<int, 5>& v) {
   cout << "array" << endl;
}

int main() {

   vector<int> v1 = {1, 2, 3, 4, 5};
   vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   f_vecteur(v1);
   f_vecteur(v2);

   array<int, 5>  a1 = {1, 2, 3, 4, 5};
   array<int, 10> a2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   f_array(a1);
//   f_array(a2);

//   array<int, 5> a3 ({1.0, 2.f, 3, 4});

//   a1.front(12);
   a1.front() = 12;

   for (int& i : a1)
      cout << ++i;

   int valeur = 12;


   array<const int*, 5> tab1 = {&valeur};
   *tab1[0] = 12;

   const vector<const int*> vect1 = {&valeur};
   *vect1[0] = 12;

   vector<int&> vref = {valeur};

   return EXIT_SUCCESS;
}


