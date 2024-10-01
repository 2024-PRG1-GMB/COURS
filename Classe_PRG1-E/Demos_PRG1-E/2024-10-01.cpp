#include <iostream>
using namespace std;

int main() {

   int n; // -2, -1, 0, 1, 2, ...

   cout << (unsigned) -1 << endl;

//   cin >> n;

   switch (n) {
      case 3:
      case 1:
      case 0:  cout << "A";
      case 4:
      case 2:  cout << "B"; break;
      case 5:  cout << "C";
      default: cout << "D";
   }

   bool a;
   int val = 12;

   if (val > 10)
      a = false;
   else
      a = true;

   a = !(val>10);
   a = val<=10;
   cout << endl;

   for (int i=0; i<5; ++i)
      cout << i;
   cout << endl;
   for (int i=0; i<5; i++)
      cout << i;
   cout << endl;

   string msg = "Bonjour";
   for (size_t i = 0; i < msg.length(); ++i)
      cout << msg.at(i);

   cout << endl;

   for (const char& c : msg)
      cout << (char)toupper(c);

   cout << endl;

   for (char& c : msg)
      c = (char)toupper(c);
   cout << msg << endl;

   /*
   do {
      int i=0;
      cout << 1;
      cout << 1;
   } while (i>0);
   */

   4;
   int valeur;
   valeur = 4, 5;    // => 4
   valeur = (4, 5);  // => 5

   if (valeur > 3, valeur < 2, true)
      cout << "moche";

}