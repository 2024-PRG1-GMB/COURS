#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>

using namespace std;
#include "2024-11-26_fichier.hpp"

using Pair = pair<int, int>;

//------------------------------------------------
ostream& operator<< (ostream& os, const Pair& p) {
   os << "(" << p.first << ", " << p.second << ")";
   return os;
}

//------------------------------------------------
template <typename T>
ostream& operator<< (ostream& os, const vector<T>& v) {
   os << "[";
   for (size_t i=0; i< v.size(); ++i) {
      if (i) cout << ", ";
      os << v[i];
   }
   os << "]";
   return os;
}

//------------------------------------------------
template <typename T>
ostream& operator<< (ostream& os, const vector<vector<T>>& m) {
   for (const vector<T>& v : m)
      os << v << endl;
   return os;
}


using Vecteur = vector<int>;
using Matrice = vector<Vecteur>;

int main() {

   vector vi         {1, 2, 3, 4, 5, 6, 7, 8};
   vector<Pair> vp   { {1, 2}, {3, 4}, {5, 6}};

   Matrice m =  {{1, 2, 3, 4, 5, 6, 7, 8},
                 {1, 2, 3, 4, 5, 6, 7, 8},
                 {1, 2, 3, 4, 5, 6, 7, 8}};

//   Pair p = {1, 2};
//   cout << p      << endl;
//
//   cout << vp << endl;
//   cout << endl;
//
   cout << vi << endl;
   parcourir(vi, add_valeur<3>);
   cout << vi << endl;

   cout << endl;
   cout << m << endl;
}

