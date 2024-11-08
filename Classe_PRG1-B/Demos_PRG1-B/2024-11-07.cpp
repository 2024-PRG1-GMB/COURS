#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void f1 (array<int, 5> a) { cout << f1; }

//int& f2() {
//   int valeur = 2;
//   return valeur;
//}

int main() {

   int valeur = 12;
   int autre  = 21;
   const array<const int*, 10> a1a = {&valeur, &autre};
         array<const int*, 10> a1b = {&valeur, &autre};

   const array<int, 5> a2 = {1};
   array<const int, 10> a3 = {1};

   f1(a2);
//   f1(a3);

//   *a1[0] = 20;
//   a1[0] = autre;

   cout << a1a.front();

   const vector<const int*> v1(10, &valeur);

   vector<int&> v2 = {valeur, autre};

   return EXIT_SUCCESS;
}
