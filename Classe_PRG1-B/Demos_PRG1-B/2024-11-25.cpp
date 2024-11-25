#include <iostream>
#include <cstdlib>
#include <vector>
#include "2024-11-25_header.h"

using namespace std;

int main() {

   Pair<int> p {1, 2};

   cout << p.first << " " << p.second << endl;
   echanger(p);
   cout << p.first << " " << p.second << endl;
   cout << endl;

   Vector<int> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

   parcourir<int>(v, afficher<int>);
   parcourir<int>(v, echanger<int>);   cout << endl;
   parcourir<int>(v, afficher<int>);   cout << endl;
   cout << endl;

   vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8};
   cout << v1 << endl;
   cout << endl;

   Vector<int> v2 {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
   cout << v2 << endl;
   parcourir<int>(v2, echanger<int>);
   cout << v2 << endl;

   return EXIT_SUCCESS;
}

