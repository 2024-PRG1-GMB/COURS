## Jeu d'échec

### Objectif
- Présentation du code aussi propre que possible
- Architecture informatique
    - Structure de données
    - Class
    - Sous-programmes
    - Librairie(s)

### A faire
Nous disposons de fichiers correspondants à desparties d'échec intéressantes que nous souhaitons interpréter et transcrire sur une représentation graphique à l'écran.

Pour simplifier, les fichiers sont au format SAN (Standard Algebraic Notation) simplifié.

#### Exemples de fichier

<details>
<summary>game1.txt</summary>

~~~
e2-e4
e7-e5
g1-f3
b8-c6
f1-c4
f8-c5
c2-c3
g8-f6
d2-d4
e5xd4    // capture
c3xd4    // capture
c5-b4
b1-c3
d7-d6
e1-g1    // petit roque des blancs
e8-g8    // petit roque des noirs
h2-h3    // empêche Ng4
c8-e6
d1-d3
e6xc4    // capture
d3xc4    // capture
b4xc3    // capture
b2xc3    // capture
d6-d5
c4-c5
d5xe4    // capture
f3xe5    // capture
c6xe5    // capture
d4xe5    // capture
f6xd5    // capture
c5-c4
d5xc3    // capture
a2-a4    // prépare l'attaque à l'aile-dame
c3xe4    // capture
c4xe4    // capture
d8-d1+   // échec avec la dame
f1xd1    // capture de la dame en d1
a7-a5    // pousse le pion pour attaquer
c3-c4    // avance le pion pour bloquer
a8-e8    // la tour se centralise
c1-a3    // le fou prend une meilleure position
e4-c6    // positionnement stratégique du pion
e8-e6    // tour menace sur la 6ème rangée
a3-c5    // le fou contrôle les cases noires
f7-f5    // avance le pion pour libérer la tour
c5-d6    // fou menace la tour et contrôle la diagonale
e6xd6    // capture du fou
e4xd6    // capture de la tour
g7-g6    // crée une structure défensive
d6xc7    // capture, menace la tour en a8
g8-f7    // le roi noir s'active pour protéger
c7xb8=Q  // promotion en dame
f7-e6    // le roi s'approche pour tenter de bloquer
b8-b6+   // échec avec la dame
e6-f7    // le roi s'écarte
b6-f6+   // échec
f7-g8    // le roi fuit
f6-f8#   // mat avec la dame
~~~

</details>

<details>
<summary>game2.txt</summary>

~~~
e2-e4    // Les blancs occupent le centre
e7-e5    // Les noirs répondent symétriquement
g1-f3    // Les blancs attaquent le pion e5
b8-c6    // Les noirs protègent le pion e5
f1-c4    // Les blancs développent le fou et visent la case f7
f8-c5    // Les noirs développent leur fou et attaquent le centre
b1-c3    // Les blancs développent leur cavalier pour renforcer la pression
g8-f6    // Les noirs développent leur cavalier pour attaquer e4
d2-d4    // Les blancs ouvrent le centre
e5-d4    // Les noirs capturent le pion en d4
c3-d5    // Les blancs menacent le fou noir en c5 et la case f7
d4-d3    // Les noirs avancent leur pion pour attaquer la dame blanche
c1-g5    // Les blancs développent leur fou et attaquent le cavalier f6
d3-c2    // Les noirs capturent le pion et attaquent la dame blanche
d1-c2    // La dame blanche capture le pion noir en c2
h7-h6    // Les noirs menacent le fou blanc en g5
g5-f6    // Le fou blanc capture le cavalier noir en f6
g7xf6    // Le pion noir capture le fou blanc (capture)
c4xf7+   // Le fou blanc capture le pion f7 et donne échec au roi noir (capture et échec)
e1-g1    // Les blancs réalisent un petit roque pour sécuriser leur roi (petit roque)
c2-c1=Q  // Le pion noir se promeut en dame sur c1 (promotion en dame)
f3xe5+   // Le cavalier blanc capture le pion en e5 et donne échec au roi noir (capture et échec)
c1xf1+   // La dame noire capture la tour blanche en f1 et donne échec au roi blanc (capture et échec)
g1xf1    // Le roi blanc capture la dame noire en f1
f8xf1#   // La tour noire capture la tour blanche en f1 et donne échec et mat (capture et mat)
~~~

</details>

#### Syntaxe des coups

| **Concept**        | **Exemple**              | **Signification**                   | **Technique**                       |
|--------------------|--------------------------|-------------------------------------|-------------------------------------|
| Mouvement de base  | `e2-e4`                  | Déplacement d’un pion ou pièce.     | Simple avancée d’une pièce.         |
| Capture            | `d5xe4`                  | La pièce capture une autre en `e4`. | `x` indique une capture.            |
| Échec              | `d8-d1+`                 | Echec au roi.                       | `+` indique un échec.               |
| Échec et mat       | `f6-f8#`                 | Echec et mat au roi.                | `#` indique un mat.                 |
| Promotion          | `c7xb8=Q`                | Un pion est promu en dame.          | `=` pour une promotion.             |
| Double échec       | `b6-f6++`                | Double échec.                       | `++` pour signaler un double échec. |
| Capture en passant | `exd6 e.p.`              | Capture en passant d’un pion.       | `e.p.` pour capture en passant.     |
| Commentaire        | `f6-f8# // echec et mat` | Commmentaire.                       | Commentaire dans le fichier         |

#### Tableau des promotions

| **Pièce**  | **Symbole** | **Exemple de notation**           |
|------------|:-----------:|-----------------------------------|
| Dame       | Q           | `e8=Q` (promotion en dame)        |
| Tour       | R           | `e8=R` (promotion en tour)        |
| Cavalier   | N           | `e8=N` (promotion en cavalier)    |
| Fou        | B           | `e8=B` (promotion en fou)         |


#### Pièces d'échecs en UTF-8

| **Pièce**            | **Symbole** | **Code UTF-8**  | **Nom Unicode**            |
|----------------------|:-----------:|:---------------:|----------------------------|
| **Roi blanc**        | ♔           | U+2654          | WHITE CHESS KING           |
| **Reine blanche**    | ♕           | U+2655          | WHITE CHESS QUEEN          |
| **Tour blanche**     | ♖           | U+2656          | WHITE CHESS ROOK           |
| **Fou blanc**        | ♗           | U+2657          | WHITE CHESS BISHOP         |
| **Cavalier blanc**   | ♘           | U+2658          | WHITE CHESS KNIGHT         |
| **Pion blanc**       | ♙           | U+2659          | WHITE CHESS PAWN           |
| **Roi noir**         | ♚           | U+265A          | BLACK CHESS KING           |
| **Reine noire**      | ♛           | U+265B          | BLACK CHESS QUEEN          |
| **Tour noire**       | ♜           | U+265C          | BLACK CHESS ROOK           |
| **Fou noir**         | ♝           | U+265D          | BLACK CHESS BISHOP         |
| **Cavalier noir**    | ♞           | U+265E          | BLACK CHESS KNIGHT         |
| **Pion noir**        | ♟           | U+265F          | BLACK CHESS PAWN           |


Sur cette base, écrire le programme permettant d'interpreter les fichiers proposés.

<details>
<summary>Déroulé d'une partie</summary>

~~~
Ce programme ...

  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ ♟ ♟ ♟ ♟
6 . . . . . . . .
5 . . . . . . . .
4 . . . . . . . .
3 . . . . . . . .
2 ♙ ♙ ♙ ♙ ♙ ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖

  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ ♟ ♟ ♟ ♟
6 . . . . . . . .
5 . . . . . . . .
4 . . . . ♙ . . .
3 . . . . . . . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖



  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . . . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖



  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . . . .
5 . . . . ♟ . . .
4 . . ♗ . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . . . .
5 . . ♝ . ♟ . . .
4 . . ♗ . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . . . .
5 . . ♝ . ♟ . . .
4 . . ♗ . ♙ . . .
3 . . ♙ . . ♘ . .
2 ♙ ♙ . ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♝ . ♟ . . .
4 . . ♗ . ♙ . . .
3 . . ♙ . . ♘ . .
2 ♙ ♙ . ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♝ . ♟ . . .
4 . . ♗ ♙ ♙ . . .
3 . . ♙ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♝ . . . . .
4 . . ♗ ♟ ♙ . . .
3 . . ♙ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖

capture


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♝ . . . . .
4 . . ♗ ♙ ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖

capture


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ . ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ . ♗ ♕ ♔ . . ♖



  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . . ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ . ♗ ♕ . . ♔ ♖

petit roque des blancs


  A B C D E F G H
8 ♜ . ♝ ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . .
2 ♙ ♙ . . . ♙ ♙ ♙
1 ♖ . ♗ ♕ . . ♔ ♖

petit roque des noirs


  A B C D E F G H
8 ♜ . ♝ ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ ♕ . . ♔ ♖

empêche Ng4


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ ♝ ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ . . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ ♕ . . ♔ ♖



  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ ♝ ♞ . .
5 . . . . . . . .
4 . ♝ ♗ ♙ ♙ . . .
3 . . ♘ ♕ . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖



  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♝ ♙ ♙ . . .
3 . . ♘ ♕ . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . ♝ ♕ ♙ ♙ . . .
3 . . ♘ . . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . . ♕ ♙ ♙ . . .
3 . . ♝ . . ♘ . ♙
2 ♙ ♙ . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ ♟ . ♞ . .
5 . . . . . . . .
4 . . ♕ ♙ ♙ . . .
3 . . ♙ . . ♘ . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . . ♟ . . . .
4 . . ♕ ♙ ♙ . . .
3 . . ♙ . . ♘ . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖



  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♕ ♟ . . . .
4 . . . ♙ ♙ . . .
3 . . ♙ . . ♘ . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖



  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♕ . . . . .
4 . . . ♙ ♟ . . .
3 . . ♙ . . ♘ . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . ♞ . . ♞ . .
5 . . ♕ . ♘ . . .
4 . . . ♙ ♟ . . .
3 . . ♙ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . ♞ . .
5 . . ♕ . ♞ . . .
4 . . . ♙ ♟ . . .
3 . . ♙ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . ♞ . .
5 . . ♕ . ♙ . . .
4 . . . . ♟ . . .
3 . . ♙ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . ♕ ♞ ♙ . . .
4 . . . . ♟ . . .
3 . . ♙ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . ♞ ♙ . . .
4 . . ♕ . ♟ . . .
3 . . ♙ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖



  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 . . ♕ . ♟ . . .
3 . . ♞ . . . . ♙
2 ♙ . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 ♙ . ♕ . ♟ . . .
3 . . ♞ . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

prépare l'attaque à l'aile-dame


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 ♙ . ♕ . ♞ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . ♛ . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture


  A B C D E F G H
8 ♜ . . . . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ ♛ . . ♔ ♖

échec avec la dame


  A B C D E F G H
8 ♜ . . . . . ♚ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

capture de la dame en d1


  A B C D E F G H
8 ♜ . . . . . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

pousse le pion pour attaquer


  A B C D E F G H
8 ♜ . . . . . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

avance le pion pour bloquer


  A B C D E F G H
8 . . . . ♜ . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . ♗ . . . ♔ ♖

la tour se centralise


  A B C D E F G H
8 . . . . ♜ . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . . . . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . ♕ . . .
3 ♗ . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le fou prend une meilleure position


  A B C D E F G H
8 . . . . ♜ . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . ♕ . . . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . . . . .
3 ♗ . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

positionnement stratégique du pion


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . ♕ . ♜ . . .
5 ♟ . . . ♙ . . .
4 ♙ . . . . . . .
3 ♗ . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

tour menace sur la 6ème rangée


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . ♕ . ♜ . . .
5 ♟ . ♗ . ♙ . . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le fou contrôle les cases noires


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . . ♟ ♟
6 . . ♕ . ♜ . . .
5 ♟ . ♗ . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

avance le pion pour libérer la tour


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . . ♟ ♟
6 . . ♕ ♗ ♜ . . .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

fou menace la tour et contrôle la diagonale


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . . ♟ ♟
6 . . ♕ ♜ . . . .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

capture du fou


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . . ♟ ♟
6 . . ♕ . . . . .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

capture de la tour


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ ♟ . . . . ♟
6 . . ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

crée une structure défensive


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ . . . . . ♟
6 . . ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

capture, menace la tour en a8


  A B C D E F G H
8 . . . . . . . ♜
7 . ♟ . . . ♚ . ♟
6 . . ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le roi noir s'active pour protéger


  A B C D E F G H
8 . ♗ . . . . . ♜
7 . ♟ . . . ♚ . ♟
6 . . ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

promotion en dame


  A B C D E F G H
8 . ♗ . . . . . ♜
7 . ♟ . . . . . ♟
6 . . ♕ . ♚ . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le roi s'approche pour tenter de bloquer


  A B C D E F G H
8 . . . . . . . ♜
7 . ♟ . . . . . ♟
6 . ♗ ♕ . ♚ . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

échec avec la dame


  A B C D E F G H
8 . . . . . . . ♜
7 . ♟ . . . ♚ . ♟
6 . ♗ ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le roi s'écarte


  A B C D E F G H
8 . . . . . . . ♜
7 . ♟ . . . ♚ . ♟
6 . . ♕ . . ♗ ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

échec


  A B C D E F G H
8 . . . . . . ♚ ♜
7 . ♟ . . . . . ♟
6 . . ♕ . . ♗ ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

le roi fuit


  A B C D E F G H
8 . . . . . ♗ ♚ ♜
7 . ♟ . . . . . ♟
6 . . ♕ . . . ♟ .
5 ♟ . . . ♙ ♟ . .
4 ♙ . . . . . . .
3 . . . . . . . ♙
2 . . . . . ♙ ♙ .
1 ♖ . . . . . ♔ ♖

mat avec la dame
~~~

</details>

### Complément

- Utiliser au mieux ce qui a été vu au cours, y compris la généricité
- Les lignes du fichier peuvent contenir des erreurs dans le format voire dans les coordonnées, rejeter toutes les lignes ne respectant pas le format prévu.
- Les mouvements sont supposés ccorrects, il n'est donc pas nécessaire de vérifier les mouvements.
- La représentation doit correspondre aux copies d'écran proposées.
- Si vous souhaitez ralentir le déroulement du programme [sleep_for](https://cplusplus.com/reference/thread/this_thread/sleep_for/)

### Modalités
- à faire **par groupe de 2 étudiants**
- 6 périodes

Bon travail
