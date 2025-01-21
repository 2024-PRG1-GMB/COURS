#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;


//------------------------------------------------------------
//void f(int tab[]) {
void f(int* tab, size_t size) {
   cout << "bytes  : " << sizeof(tab) << endl;
   cout << "taille : " << sizeof(tab) / sizeof(int)   << endl;
}
//------------------------------------------------------------
int main() {

   /*
   int* ptr = new int(3);
   cout << "valeur  : " << *ptr << endl;
   cout << "adresse : " <<  ptr << endl;
   delete ptr;

   void* vptr = ptr;
   cout << *(int*)vptr;

   ptr = nullptr;
   if (ptr != nullptr) {
      cout << "valeur  : " << *ptr << endl;
      cout << "adresse : " <<  ptr << endl;
   }

   cout << endl;
*/


   int tab[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   cout << tab[0] << " " << &tab[0] << endl;
//   cout << tab           << endl;

   cout << "bytes  : " << sizeof(tab) << endl;
   cout << "taille : " << sizeof(tab) / sizeof(int)   << endl;

   f(tab, 10);

   /*
   int* ptr = tab;
   cout << ptr[0] << " " << &ptr[0] << endl;

   ptr = tab + 3;
   cout << ptr[0] << " " << &ptr[0] << endl;
   cout << ptr[-3] << " " << &ptr[-1] << endl;
*/
}