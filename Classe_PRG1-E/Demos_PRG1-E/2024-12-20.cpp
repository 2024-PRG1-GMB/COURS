#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//------------------------------------------------------------
// Date
//------------------------------------------------------------
class Date {
   friend ostream& operator<< (ostream& os, const Date& date);

public:
   Date() : Date(1, 1, 1970)                                {}
   Date(int j, int m, int a) : jour(j), mois(m), annee(a)   {}

private:
   int jour;
   int mois;
   int annee;
};

//------------------------------------------------------------
// Personne
//------------------------------------------------------------
class Personne {
   friend ostream& operator<< (ostream& os, const Personne& personne);

public:
   Personne(string nom, const Date& date, int age) : nom(nom), date_naissane(date), age(age) {}

   void        methode_de_objet() const;
   static void methode_static() ;

private:
   static string commun;

   string nom;
   Date   date_naissane;
   int    age;
};

//------------------------------------------------------------
// Date
//------------------------------------------------------------
//------------------------------------------------------------
ostream& operator<< (ostream& os, const Date& date) {
   return os << date.jour << "." << date.mois << "." << date.annee;
}

//------------------------------------------------------------
// Personne
//------------------------------------------------------------
string Personne::commun = "commun";

//------------------------------------------------------------
ostream& operator<< (ostream& os, const Personne& personne) {
   return os << personne.nom << " " << personne.date_naissane << " " << personne.age << endl;
}

//------------------------------------------------------------
void Personne::methode_de_objet() const {
   cout << commun       << endl;    // élément static
   cout << this->nom    << endl;    // élément de l'objet
}

//------------------------------------------------------------
 void Personne::methode_static()  {
   cout << commun       << endl;    // élément static
// cout << this->nom    << endl;    // pas possible car appelable par la classe sans passer par l'objet
}

//------------------------------------------------------------
template <typename T>
class C {
public:
   C(const T& t) : propriete(t) {}
private:
   T propriete;
};

//------------------------------------------------------------
int main() {

   Date date(20, 12, 2024);
   cout << date << endl;

   Personne Cedric("Cedric", date, 23);
   cout << Cedric << endl;

   Cedric.methode_de_objet();
// Personne::methode_de_objet();

   Cedric.methode_static();
   Personne::methode_static();

   C c(date);

   return EXIT_SUCCESS;
}

