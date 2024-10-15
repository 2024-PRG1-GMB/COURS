#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

   int b (5/=6);
   string prenom;
   cout << "votre prenom : ";
   getline(cin, prenom);
   cout << prenom;

   return EXIT_SUCCESS;
}
