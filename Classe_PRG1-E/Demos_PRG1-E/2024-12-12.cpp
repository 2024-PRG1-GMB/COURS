#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;


//------------------------------------------------------------
ostream& operator<< (ostream& os, const vector<int>& v) {
   os << "[";
   for (vector<int>::const_reverse_iterator it=v.rbegin(); it!=v.rend(); it += 2) {
      if (it != v.rbegin())
         os << ", ";
      os << *it;
   }
   os << "]";
   return os;
}

//------------------------------------------------------------
int main() {

   vector v {1, 2, 3, 4, 5, 6};

   cout << v << endl;

   return EXIT_SUCCESS;
}

