#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <span>
#include <string>


using namespace std;

void f(short  c)     {  cout << "fonction no 1" << endl; };
void f(float c)      {  cout << "fonction no 2" << endl; };

void f(int tab[])  {  cout << "fonction no 3" << endl; }
void f(int* tab, size_t taille ) {  cout << "fonction no 3" << endl; }

int main() {

   float reel = 12;
//   double& ref = reel;

   int tab[] = {1, 2, 3, 4, 5, 6};
   f(tab);

   f(int());

   return EXIT_SUCCESS;
}


