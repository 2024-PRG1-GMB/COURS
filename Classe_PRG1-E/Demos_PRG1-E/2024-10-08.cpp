#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
#define TOTO 3 + 2

void afficher(const string& msg) {
   cout << msg << endl;
}

// par référence
void echanger(int& a, int& b) {
 int t = a;
 a = b;
 b = t;
}

// par adresse (pointeur)
void echanger(int* adr_a, int* adr_b) {
   int t = *adr_a;
   *adr_a = *adr_b;
   *adr_b = t;
}

int main() {
   cout << "|" << setw(5)  << 123            << "|" << endl;
   cout << "|" << setw(5)  << 123456         << "|" << endl;
   cout << "|" << setw(10) << "salut"        << "|" << endl;
   cout << setprecision(4);
   cout << "|" << setw(5)  << 10.0 / 3.0     << "|" << endl;
   cout << setw(5)  << "|" << 123     << "|" << endl;

   const int C = 12;
   int i = 3;
   double d = 3.2;

   // ref en pointeur
   int* const ref__i = &i;

   // reference non-constante
   int& ref_i = i;
//   int& ref_C = C; => constante
//   int& ref_d = d; => type different
//   int& ref_d = 2; => constante litérale

   // reference constante
   const int& ref_c_i = i; // variable en RO / meme type
   const int& ref_c_C = C; // constante en RO / meme type
   const int& ref_c_d = d; // variable en RO / autre type
   const int& ref_c_2 = 2; // constante litérale

    string invite = "Bonjour";
   afficher(invite);

   int a = 3;
   int b = 5;
   echanger(a, b);
   echanger(&a, &b);

   return EXIT_SUCCESS;
}