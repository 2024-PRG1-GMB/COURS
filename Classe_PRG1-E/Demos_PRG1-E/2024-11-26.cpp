#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>

using namespace std;

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

//------------------------------------------------
template <int valeur>
int add_valeur(int n) {
   return n + valeur;
}

//------------------------------------------------
int put(int n) {
   cout << n;
   return n;
}

//------------------------------------------------
template <typename T, typename Fct>
void parcourir(vector<T>& v, Fct fct){
   for (size_t i=0; i< v.size(); ++i) {
      v[i] = fct(v[i]);
   }
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

