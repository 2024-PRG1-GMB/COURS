#ifndef ECHANGER
#define ECHANGER

#include <utility>

//----------------------------------------
// déclarations
//----------------------------------------
template <typename T>
using Pair   = std::pair<T, T>;

//----------------------------------------
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
std::ostream& operator<< (std::ostream& os, const Pair<T>& p);

//----------------------------------------
template <typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& v);

//----------------------------------------
// définitions
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
   std::cout << p;
}

//----------------------------------------
template <typename T, typename Fct>
void parcourir(Vector<T>& v, Fct fct) {
   for (Pair<T>& p : v)
      fct(p);
}

//----------------------------------------
template <typename T>
std::ostream& operator<< (std::ostream& os, const Pair<T>& p) {
   os << "(" << p.first << ", " << p.second << ")";
   return os;
}

//----------------------------------------
template <typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i) os << ", ";
      os << v[i];
   }
   os << "]";
   return os;
}
#endif