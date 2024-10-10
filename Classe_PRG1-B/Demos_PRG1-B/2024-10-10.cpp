#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

///*
//void afficher( string& msg) {
//   cout << msg << endl;
//}
//
//void f0()                  { cout << 12; }
//void f1(       int valeur) { cout << valeur; }
//void f2(      int& valeur) { cout << valeur; }
//void f3(const int& valeur) { cout << valeur; }
//
//bool   operation(double gauche, double droite, char operateur, double& resultat) { return true; }
//double operation(double gauche, double droite, char operateur, bool& ok)         { return 2.1;  }
//
//bool estPremier(int valeur) {
//   /* moche !!
//   bool trouve;
//   for (int diviseur = 2; diviseur<valeur/2; ++diviseur) {
//      if (valeur % diviseur == 0) {
//         trouve = true;
//         break;
//      }
//   }
//
//   if (trouve)
//      return true;
//   else
//      return false;
//
//   return trouve;
//*/
//
//   for (int diviseur = 2; diviseur<valeur/2; ++diviseur) {
//      if (valeur % diviseur == 0)
//         return true;
//   }
//   return false;
//}
//
//string jour(int j) {
//   switch(j) {
//      case 1 : return "lundi";
//      case 2 : return "mardi";
//      default : return string();
//   }
//}
//
//void posSurChiffre(const string& text, size_t& pos) {
//
//   while(text.at(pos) < '0' or text.at(pos) > '9') {
//      ++pos;
//   }
//
//   for ( ; pos < text.size(); ++pos)
//      if (text.at(pos) >= '0' and text.at(pos) > '9')
//         return;
//}
//
//int moche(int a) {
//   cout << "knhjh";
//   return;
//}

// avec RW
int& minimum(int& ref_g, int& ref_d) {
   cout << "mini RW : ";
   return ref_g < ref_d ? ref_g : ref_d;
}

// avec RO
const int& minimum(const int& ref_g, const int& ref_d) {
   cout << "mini RO : ";
   return ref_g < ref_d ? ref_g : ref_d;
}

int main() {

   int a = 12;
   int b = 11;

   const int c = 4;
   const int d = 5;

   cout << "a : " << a << " b : " << b << endl;
   cout << minimum(a, b) << endl;                  // lecture
   cout << "a : " << a << " b : " << b << endl;
   minimum(a, b) = 20;
   cout << "a : " << a << " b : " << b << endl;
   cout << minimum(a, b) << endl;                  // lecture

   string chaine = "toto";
   chaine.at(2) = 'A'; chaine[3] = 'B';            // ecriture
   cout << chaine.at(2) << chaine[2] << endl;      // lecture

   // const ou variable
   cout << minimum(a, b) << endl;
   minimum(a, b) = 20;

   cout << minimum(c, d) << endl;
//   minimum(c, d) = 20;

   return EXIT_SUCCESS;

//   //                   0123456789 123456789
//   const string text = "bon1jo3ur à t4ous";
//   size_t pos=0;
//
//   int valeur = 12;
//
//   cout << "valeur  de valeur        " <<  valeur << endl;
//   cout << "adresse de valeur        " << &valeur << endl;
//   int* ptr;
//   cout << "valeur  de ptr           " <<     ptr << endl;
//   cout << "adresse de ptr           " <<    &ptr << endl;
//   cout << "valeur pointee par ptr   " <<    *ptr << endl;
//
//   ptr = &valeur;
//   cout << "valeur  de ptr           " <<     ptr << endl;
//   cout << "adresse de ptr           " <<    &ptr << endl;
//   cout << "valeur pointee par ptr   " <<    *ptr << endl;
//
//   return EXIT_SUCCESS;
//
//
//   double resultat = 3;
//   operation(3, 4, '+', resultat);
//   operation(3, 4, '?', resultat);
//
//   bool ok;
//   resultat = operation(3, 4, '+', ok);
//   resultat = operation(3, 4, '?', ok);
//
//   f0;
//   0x120;
//   cout << (void*)f0 << endl;
//   f0();
//
//   const int  constante = 12;
//   int        entier    = 12;
//   double     reel      = 3.14;
//
//   f1(3);
//   f1(constante);
//   f1(entier);
//   f1(reel);
//
//   f2(3);
//   f2(constante);
//   f2(entier);
//   f2(reel);
//
//   f3(3);
//   f3(constante);
//   f3(entier);
//   f3(reel);
//
//   unsigned int i = -12;
//   cout <<      i << endl;
//
//   char         c = 127;
//   cout << (int)c << endl;
//   c = c + 1;
//   cout << (int)c << endl;

//   const string message_cst = "Hello";
//   string message = "Salut";

//   afficher("bienvenu ...");
//   afficher(message_cst);
//   afficher(message);
}

