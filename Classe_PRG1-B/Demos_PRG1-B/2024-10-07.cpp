#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// par copie ;(
void afficher_par_copie(string msg) {
   cout << msg;
}

// par référence => le plus souvent possible en const
void afficher_par_ref(const string& msg) {
   cout << msg;
}

// par référence
void echanger(int& a, int& b) {
   int t = a;
   a = b;
   b = t;
}

// par adresse (pointer)
void echanger(int* adr_a, int* adr_b) {

//    rappel
//   int valeur = 12;
//   int* ptr = &valeur;
//   cout << *ptr << valeur; // idem

   int t = *adr_a;
   *adr_a = *adr_b;
   *adr_b = t;
}

int main() {

   cout << setw(4) << "|" << "msg"     << "|" << endl;

   cout << "|" << setw(4) << "msg"     << "|" << endl;
   cout << "|" << setw(4) << 12        << "|" << endl;
   cout << "|" << setw(4) << 12345     << "|" << endl;
   cout << "|" << setw(10) << 12345     << "|" << endl;

   cout << "|" << setprecision(3) << setw(4) << 10.0/3.0  << "|" << endl;

   const int C = 2;
   int    e = 3;
   double d = 2.5;

   // ref non constante
   // => meme type
   // => variable
   int& ref_e = e;   // ok
//   int& ref_d = d;   // pas le même type
//   int& ref_C = C;   // pas sur une variable
//   int& ref_2 = 2;   // pas sur une variable ref=2 = 3; 2 = 3;

   // ref CONSTANTE
   // => pas forcement le meme type
   // => pas forcement une variable
   const int& ref_Ce = e;   // ok
   const int& ref_Cd = d;   // pas le même type
   const int& ref_CC = C;   // pas sur une variable
   const int& ref_C2 = 2;   // pas sur une variable

    string msg = "string";
   afficher_par_copie(msg);
   afficher_par_ref(msg);

   // par adresse
   int a = 2;
   int b = 5;

   echanger( a,  b);    // par référence
   echanger(&a, &b);    // par adresse

   cout << endl;

   cout << setprecision(3);
   cout << "|" << setw(10) << (1.0 / 3.0) << "|" << endl;

   return EXIT_SUCCESS;
}