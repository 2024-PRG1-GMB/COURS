#include <iostream>

using namespace std;


int oops(int i) {
   if (i<0)
      throw invalid_argument("valeur négative");
   if (i>=10)
      throw out_of_range("trop grand");
   cout << i << endl;

}

int main() {

   int i = -10;

   try {
      oops(i);
      cout << "après oops(i)" << endl;
   }

   // pas de code entre les blocs try et catch
   //   cout << "coucou"; // ne compile pas

   catch (invalid_argument e) {
      cout << e.what() << endl;
      cout << "après e.what()" << endl;
      throw out_of_range("encore ...");
   }
//   catch (out_of_range e) {
//      cout << e.what() << endl;
//      cout << "après e.what()" << endl;
//   }
   catch (...) {
      cout << "PAS BEAU !!!";
   }

   cout << endl;
   cout << "fin de programme";

}
