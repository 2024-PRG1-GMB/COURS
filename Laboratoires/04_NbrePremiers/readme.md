## Nombres 1er

### Objectif
Ecrire un programme qui affiche tous les nombres premiers compris entre 1 et une valeur saisie par l’utilisateur.

### A faire
1. Saisir une valeur `limite` comprise entre `2` et `1'000`.
	- Si `limite ` est en dehors des bornes, l'utilisateur est invité à refaire sa saisie.
	- Nous partons du principe qu'il n'y a pas d'erreur de saisie (`a` par exemple).
2. Calculer et afficher sur 5 colonnes tous les nombres 1er compris dans l'intervalle `[1 .. N]`
    - La mise en page peut être simplement gérée avec une tabulation `cout << '\t' << nbre << " ";`
3. Un menu `Voulez-vous recommencer [O/N]` pour quitter ou recommencer.
	- Seuls les caractères `O` ou `N` sont acceptés, sinon une nouvelle saisie est faite.

<br>
L'affichage suivant est attendu

~~~cpp
Ce programme ...

entrer une valeur [2-1000] : 1 
entrer une valeur [2-1000] : 1001
entrer une valeur [2-1000] : 55

Voici la liste des nombres premiers
        2       3       5       7       11 
        13      17      19      23      29 
        31      37      41      43      47 
        53 

Voulez-vous recommencer [O/N] : a
Voulez-vous recommencer [O/N] : N

Fin de programme
~~~

### Remarques
- Pensez à faire l'analyse avant de coder
- La présentation de code est à soigner tout particulièrement
- Ne pas utiliser de sous-programme

### Modalités
- 4 périodes
- **à faire seul(e)**
- à rendre dans le git classroom selon les indications des assistants

---
Bon travail