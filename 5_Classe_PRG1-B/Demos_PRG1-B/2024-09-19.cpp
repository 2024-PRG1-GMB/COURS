#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
   cout << "il fait beau dans ma maison" << endl;

   string msg = "coucou";
   cout << msg << endl;

   cout << msg.at(0) << msg.at(1) << msg.at(12) << endl;

   return EXIT_SUCCESS;
}

