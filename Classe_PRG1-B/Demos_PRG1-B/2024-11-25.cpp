#include <iostream>
#include <cstdlib>
#include <vector>
#include "2024-11-25_header.h"

using namespace std;


ostream& operator<< (ostream& os, const vector<int>& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i) cout << ", ";
      os << v[i];
   }
   os << "]";
   return os;
}


int main() {

   Pair<int> p {1, 2};

   cout << p.first << " " << p.second << endl;
   echanger(p);
   cout << p.first << " " << p.second << endl;

   cout << endl;

   Vector<int> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

   parcourir<int>(v, afficher<int>);
   parcourir<int>(v, echanger<int>);
   parcourir<int>(v, afficher<int>);

   cout << endl;

   vector<int> v2 {1, 2, 3, 4, 5, 6};
   cout << v2 << endl;

   cout << endl;
   return EXIT_SUCCESS;
}

