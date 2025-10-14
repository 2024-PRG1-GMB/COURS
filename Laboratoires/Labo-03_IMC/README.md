# Exercice de Programmation en C++ et Utilisation de Git

## Objectif

L'objectif de cet exercice est d'écrire un programme en C++ qui calcule l'IMC (Indice de Masse Corporelle) d'une personne en fonction de son poids et de sa taille. Ensuite, vous utiliserez Git pour gérer le développement de votre programme. Vous apprendrez à cloner un dépôt, créer une branche, faire des commits, pousser vos changements et enfin faire un merge.

## Partie 1: Calcul de l'IMC en C++

### Instructions

1. Écrire un programme en C++ qui demande à l'utilisateur d'entrer son **poids** (en kilogrammes) et sa **taille** (en mètres).

2. Le programme doit ensuite calculer et afficher l'IMC à l'aide de la formule :

   IMC = Poids / (Taille * Taille)

3. Afficher également une interprétation du résultat :

- **IMC < 18.5** : Poids insuffisant
- **18.5 ≤ IMC < 25** : Poids normal
- **25 ≤ IMC < 30** : Surpoids
- **IMC ≥ 30** : Obésité

### Exemple de sortie

```bash
Entrez votre poids (en kg) : 70
Entrez votre taille (en mètres) : 1.75
Votre IMC est : 22.86
Vous avez un poids normal.
```



## Partie 2: Utilisation des commandes Git

Dans cette partie, vous allez utiliser Git pour gérer votre projet.

### Étapes Git

1. **Cloner le dépôt Git** Commencez par cloner le dépôt existant depuis GitHub en utilisant la commande suivante :

   git clone <URL_DU_DEPOT>

2. **Créer une nouvelle branche de développement** Pour séparer vos modifications de la branche principale, créez une nouvelle branche :

``` bash
git checkout -b develop
```

3. **Coder votre programme en C++** Implémentez le code du calcul de l'IMC dans cette branche `develop`.
4. **Créer un fichier .gitignore** qui va permettre de mettre que les fichiers utiles au projet. 
   1. Créer un fichier avec l'extension suivante : `.gitignore`
   2. Ajouter dans ce fichier les extensions des fichiers non désirés.

5. **Ajouter et valider vos changements** Une fois votre code prêt, ajoutez vos fichiers et faites un commit :

```bash
git add .	
git commit -m "Ajout du calcul de l'IMC"
```

5. **Pousser les changements sur GitHub** Envoyez vos changements sur le dépôt distant :

```bash
git push origin develop
```

6. **Créer une Pull Request et merger** Une fois que vous avez poussé les changements, allez sur GitHub et créez une Pull Request pour fusionner la branche `develop` dans `main`. Après validation, mergez les branches.

Alternativement, vous pouvez faire cela en ligne de commande :

```bash
git checkout main
git merge develop
git push origin main
```
7. **Créer un tag et le Push** Une fois que votre code est figée, vous allez créer un tag avec un numéro de version ainsi qu'un commentaire pour figer une release.
 ```bash
git tag -a V1.0.0 -m "comments"
git push --tags
 ```
## Résumé des commandes Git

- `git clone <URL_DU_DEPOT>` : Cloner le dépôt Git sur votre machine.
- `git checkout -b <nom_branche>` : Créer une nouvelle branche et se déplacer dessus.
- `git add .` : Ajouter tous les fichiers modifiés au prochain commit.
- `git commit -m "message"` : Créer un commit avec un message descriptif.
- `git push origin <nom_branche>` : Pousser les changements de la branche sur le dépôt distant.
- `git merge <nom_branche>` : Fusionner la branche spécifiée avec la branche courante.
- `git tag -a <version> -m "message"` : Création d'un tag avec un numéro de version ainsi qu'un message descriptif.

## Exercice à réaliser 

``` C++
int main() 
{
	double poids, taille,imc;					//poids en kg, taille en centimètres 
	const double LIMITE_IMC_INFERIEUR 	= 18.5;
	const double LIMITE_IMC_NORMAL 		= 25.0;
	const double LIMITE_IMC_SURPOIDS 	= 30.0;

	// Demandez le poids et la taille
		
	// Calculez l'IMC

	// Affichez l'IMC

	// Interprétation de l'IMC
	if (imc < LIMITE_IMC_INFERIEUR) {
		cout << "Vous avez un poids insuffisant." << endl;
	} else if (imc < LIMITE_IMC_NORMAL) {
		cout << "Vous avez un poids normal." << endl;
	} else if (imc < LIMITE_IMC_SURPOIDS) {
		cout << "Vous êtes en surpoids." << endl;
	} else {
		cout << "Vous êtes en situation d'obésité." << endl;
	}

	return EXIT_SUCCESS;
}
```
