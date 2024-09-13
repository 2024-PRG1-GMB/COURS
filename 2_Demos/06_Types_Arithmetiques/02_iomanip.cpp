//---------------------------------------------------------
// Demo           : 02_iomanip
// Fichier        : 02_iomanip.cpp
// Auteur(s)      : (C) BREGUET Guy-Michel
// Date           : 2021-10-01
// But            : Utilisation de iomanip
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>  // cout et cin
#include <limits>    // numeric_limits<streamsize>
#include <iomanip>   // setw(...) et setprecision(...)

using namespace std;

int main() {
   int    W;      // setwith(W)
   string MESSAGE = "Hello world";
   int    entier  = 12345;
   double reel    = 3.14159265358979323846264338327950288419716939937510582;

   //------------------------------------------------------
   cout  << "------------------------------" << endl
         << "1) affichage par default"       << endl
         << "------------------------------" << endl;
   cout  << '|' << MESSAGE   << '|' << endl     // |Hello world|
         << '|' << entier    << '|' << endl     // |12345|
         << '|' << reel      << '|' << endl;    // |3.14159|


   cout  << "------------------------------" << endl
         << "2) setprecision(10)"            << endl
         << "------------------------------" << endl;
   cout  << fixed << setprecision(10);
   cout  << '|' << MESSAGE   << '|' << endl     // |Hello world|  => aucun effet
         << '|' << entier    << '|' << endl     // |12345|        => aucun effet
         << '|' << reel      << '|' << endl;    // |3.1415926536| => 10 chiffres après la , et valeur arrondie


   cout  << "------------------------------" << endl
         << "3) setprecision(3)"             << endl
         << "------------------------------" << endl;
   cout  << fixed << setprecision(3);
   cout  << '|' << MESSAGE   << '|' << endl     // |Hello world|  => aucun effet
         << '|' << entier    << '|' << endl     // |12345|        => aucun effet
         << '|' << reel      << '|' << endl;    // |3.142|        => 3 chiffres après la . et valeur arrondie


   cout  << "------------------------------" << endl
         << "4) setw(20)+setprecision(10)"   << endl
         << "------------------------------" << endl;
   W = 20;
   cout  << fixed << setprecision(10);
   cout  << '|' << setw(W) << MESSAGE   << '|' << endl     // |         Hello world|
         << '|' << setw(W) << entier    << '|' << endl     // |               12345|
         << '|' << setw(W) << reel      << '|' << endl;    // |        3.1415926536|


   cout  << "------------------------------" << endl
         << "5) setw(20)+setprecision(10)+left" << endl
         << "------------------------------" << endl;
   W = 20;
   cout  << fixed << setprecision(10);
   cout  << '|' << left << setw(W) << MESSAGE   << '|' << endl     // |Hello world         |
         << '|'         << setw(W) << entier    << '|' << endl     // |12345               |
         << '|'         << setw(W) << reel      << '|' << endl;    // |3.1415926536        |


   cout  << "------------------------------" << endl
         << "6) setw(4)+setprecision(10)"    << endl
         << "------------------------------" << endl;
   W = 4;
   cout  << fixed << setprecision(10);
   cout  << '|' << setw(W) << MESSAGE   << '|' << endl     // |Hello world|  => force à plus
         << '|' << setw(W) << entier    << '|' << endl     // |12345|        => force à plus
         << '|' << setw(W) << reel      << '|' << endl;    // |3.1415926536| => force à plus

   //------------------------------------------------------
   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}


//      ------------------------------
//      1) affichage par default
//      ------------------------------
//      |Hello world|
//      |12345|
//      |3.14159|
//      ------------------------------
//      2) setprecision(10)
//      ------------------------------
//      |Hello world|
//      |12345|
//      |3.1415926536|
//      ------------------------------
//      3) setprecision(3)
//      ------------------------------
//      |Hello world|
//      |12345|
//      |3.142|
//      ------------------------------
//      4) setw(20)+setprecision(10)
//      ------------------------------
//      |         Hello world|
//      |12345|
//      |3.1415926536|
//      ------------------------------
//      5) setw(20)+setprecision(10)+left
//      ------------------------------
//      |Hello world         |
//      |12345               |
//      |3.1415926536        |
//      ------------------------------
//      6) setw(4)+setprecision(10)
//      ------------------------------
//      |Hello world|
//      |12345|
//      |3.1415926536|
//      Presser ENTER pour quitter
