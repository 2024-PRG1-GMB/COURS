#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int addition_de(int a, int b);
void afficher(const string& msg);

bool   operation(double gauche, double droite, char operateur, double& resultat) {return true;}
double operation(double gauche, double droite, char operateur, bool&   ok)       {return 3.0;}

/*
int f1(){
   if (true)
      return;
   return 2;
}

void f2(){
   if (true)
      return;
   cout << "ici" << endl;
   //   return 2;
}
*/
void chiffre(const string& text, size_t& pos){
   for (char c : text)
      if (text.at(pos) >= '0' and text.at(pos) <= '9')
         return;
      else
         ++pos;
/*
   while(text.at(pos) > 'a' and text.at(pos) < 'z')
      ++pos;
*/
}

int main() {
            //    0123456789 123456
   string text = "bon1jour à to2us";
   size_t pos = 0;
   chiffre(text, pos);
   cout << pos << endl;

   text.at(3) = '9';    // écriture
   cout << text.at(3);  // lecture

   return EXIT_SUCCESS;

   double result;
   bool ok;
   operation(1.0, 2.0, '+', result);         // 1
   result = operation(1.0, 2.0, '+', ok);    // 2

   int a, b, c, d = 12;

   afficher("coucou");
   cout << (void*)afficher << endl;

   // paramètres                 nom
   operation(1.0,       // 1.0 => gauche
             2.0,       // 2.0 => droite
             '+',       // '+' => operateur
             result);   // ??  => resultat

   //int variable <= expression;

   if(a%7 == 0) return 10; // multiple de 7
   if(a%5 == 0) return 12; //    .. 5

   return EXIT_SUCCESS;
}


int addition_de(int a, int b) {
   return a + b;
}

void afficher(const string& msg) {
   cout << addition_de(2, 3) << endl;
   cout << msg;
}
