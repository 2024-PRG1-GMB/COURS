//---------------------------------------------------------
// Demo           : 08_Tri_Generique
// Fichier        : triImpl.hpp
// Version        : 02 - 2020-09-18
// Auteur(s)      : (C) BREGUET Guy-Michel
// But            : tri générique
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#ifndef triImpl_h
#define triImpl_h

//--------------------------------------------------------------
template <typename T>
void echanger (T& gauche, T& droite) {
   T temp = gauche;
   gauche = droite;
   droite = temp;
}

//--------------------------------------------------------------
// NB : depend de "<" du type considéré
template <typename T>
void trier(T& v) {
   // type "auto" nécessaire
   for (auto i = v.begin()+1; i < v.end(); ++i)
      for (auto j = v.begin(); j < i; ++j)
         if (*i < *j)
            echanger(*i, *j);
}

#endif /* triImpl_h */
