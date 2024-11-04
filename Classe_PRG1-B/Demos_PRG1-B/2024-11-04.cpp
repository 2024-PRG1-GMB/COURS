#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

   string str = "0123456789";
   cout << str << endl;

   const char* ptr = "bonjour";
   cout << ptr;
   cout << ptr[3] << endl;
   cout << *(ptr+120) << endl;

   cout << str[12]      << endl;
   cout << str.at(12)   << endl;

   for (size_t i=0; i<str.size(); ++i) {
      str[i] = '3';
      cout << str[i];
   }
   cout << endl;

   for (char& c : str) {
      c = '5';
      cout << c;
   }
   cout << endl;

   cout << str << endl;

   return EXIT_SUCCESS;
}
