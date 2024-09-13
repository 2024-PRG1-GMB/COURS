//---------------------------------------------------------
// Demo           : 08_Tri_Generique
// Fichier        : Couleur.hpp
// Version        : 02 - 2020-09-18
// Auteur(s)      : (C) BREGUET Guy-Michel
// But            : Classe Couleur
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef COULEUR_H
#define COULEUR_H

#include <string>
#include <iostream>

class Couleur {
   // utilise string(couleur) => friend pas directement nécessaire
   friend std::ostream& operator << (std::ostream& os, const Couleur& c);

public:
   enum class Liste {BLACK,  WHITE,  RED,   GREEN,    BLUE, CYAN, MAGENTA,
                     YELLOW, LIME,   BROWN, DARKGRAY, GRAY, LIGHTGRAY,
                     OLIVE,  ORANGE, PINK,  PURPLE,   TEAL, VIOLET};

   // constructor
   Couleur(const Liste& c) : couleur(c) {};

   // operators
   bool operator < (const Couleur& c) const;
   operator std::string() const;

private:
   static const std::string COULEUR[];
   Liste couleur;
};


#endif /* COULEUR_H */
