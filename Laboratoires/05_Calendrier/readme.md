## Calendrier

### Objectif
- Mise en page soignée
- Interface utilisateur
- Structures de controles
- Sous-programmes
- Compilation séparée

### A faire
Ecrire un programme qui affiche pour une année [1800 – 2100] saisie par
l’utilisateur le calendrier complet en tenant compte des années bissextiles.

~~~
ce programme ...
entrer une valeur [1800 - 2100] : 1754
/!\ erreur de saisie
entrer une valeur [1800 - 2100] : 2024
janvier 2024
 L  M  M  J  V  S  D
                1  2 
 3  4  5  6  7  8  9 
10 11 12 13 14 15 16 
17 18 19 20 21 22 23 
24 25 26 27 28 29 30 
31 

février 2024
 L  M  M  J  V  S  D
    1  2  3  4  5  6 
 7  8  9 10 11 12 13 
14 15 16 17 18 19 20 
21 22 23 24 25 26 27 
28 29 

...

decembre 2024
 L  M  M  J  V  S  D
             1  2  3 
 4  5  6  7  8  9 10 
11 12 13 14 15 16 17 
18 19 20 21 22 23 24 
25 26 27 28 29 30 31 

voulez-vous continuer [O|N] : a
voulez-vous continuer [O|N] : n

le programme est termine
~~~

### Complément
- L'affichage doit correspondre à l'exemple ci-dessus.
- En cas de saisie incorrecte, l’utilisateur est invité à recommencer sa saisie.
- Une année est bissextile si elle est divisible par 400, ou par 4 et pas par 100.
- Un menu « voulez-vous recommencer [O/N] » permet de quitter ou recommencer l’opération.
- Tous les « 1 janvier » sont des lundis … à moins que vous ayiez envie de faire mieux.
  <br>La librairie [ctime](http://www.cplusplus.com/reference/ctime) peut vous aider 😉.
- Soigner particulièrement la présentation du code.
- Les erreurs de saisie ne sont pas à gérer.
- Les fonctions seront disposées dans une ou plusieurs librairies. [cf démo](https://github.com/gmbreguet/PRG1_GMB_DEMO/tree/main/04_Fonctions/04_librairie)

### Modalités
- groupe de **1 étudiants**
- 4 périodes

---
Bon travail
