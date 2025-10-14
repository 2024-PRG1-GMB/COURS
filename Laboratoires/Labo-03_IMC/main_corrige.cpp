/**
 * \file main_corrige.cpp
 * \version 1.0.0
 * \author Joyce Maiamba
 * \date : 25.09.2024
 * \brief : Calculateur d'indice de masse corporelle (IMC) 
 */
 
#include <iostream>
using namespace std;

int main() 
{
    double poids, taille,imc;		//poids en kg, taille en mètres
	const double LIMITE_IMC_INFERIEUR = 18.5;
	const double LIMITE_IMC_NORMAL = 25.0;
    const double LIMITE_IMC_SURPOIDS  = 30.0;

	cout << "Entrez votre poids (en kg) : ";
    cin >> poids;
    cout << "Entrez votre taille (en metres) : ";
    cin >> taille;

    // Calcul de l'IMC
    imc = poids / (taille * taille);

    // Affichage de l'IMC
    cout << "Votre IMC est : " << imc << endl;

	// Interprétation de l'IMC
	if (imc < LIMITE_IMC_INFERIEUR) {
		cout << "Vous avez un poids insuffisant." << endl;
	} else if (imc < LIMITE_IMC_NORMAL) {
		cout << "Vous avez un poids normal." << endl;
	} else if (imc < LIMITE_IMC_SURPOIDS) {
		cout << "Vous etes en surpoids." << endl;
	} else {
		cout << "Vous etes en situation d'obesite." << endl;
	}

	return EXIT_SUCCESS;
}
