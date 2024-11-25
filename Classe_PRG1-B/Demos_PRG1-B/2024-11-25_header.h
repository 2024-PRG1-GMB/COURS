#ifndef ECHANGER
#define ECHANGER

#include <utility>

//----------------------------------------

template <typename T>
using Pair   = std::pair<T, T>;

template <typename T>
using Vector = std::vector<Pair<T>>;

//----------------------------------------
template <typename T>
void echanger(Pair<T>& p);

//----------------------------------------
template <typename T>
void afficher(const Pair<T>& p);

//----------------------------------------
template <typename T, typename Fct>
void parcourir(Vector<T>& v, Fct fct);


//----------------------------------------
template <typename T>
void echanger(Pair<T>& p) {
   T temp = p.first;
   p.first = p.second;
   p.second = temp;
}

//----------------------------------------
template <typename T>
void afficher(const Pair<T>& p) {
   std::cout << p.first << " " << p.second;
}

//----------------------------------------
template <typename T, typename Fct>
void parcourir(Vector<T>& v, Fct fct) {
   for (Pair<T>& p : v) {
      fct(p);
      std::cout << " ";
   }
}

#endif