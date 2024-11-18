#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

void f(char i=0)           { cout << "f1"; }
void f(int f)              { cout << "f2"; }
void f (const double& d)   { cout << "f3"; }

int main() {

   f(3.14);

   return EXIT_SUCCESS;
}
