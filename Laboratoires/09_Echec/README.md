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

Game: Paul Morphy vs. Duke Karl/Count Isouard (1858)

~~~
e2-e4   // Opening move, controlling the center
e7-e5   // Responding in kind, controlling the center
g1-f3   // Developing the knight, attacking the e5 pawn
d7-d6   // Supporting the pawn on e5
d2-d4   // Opening up the center, attacking the e5 pawn
f8-g4   // Pinning the knight on f3 to the queen
d4xe5   // Capturing the pawn on e5
g4xf3   // Capturing the knight, forcing a queen move
d1xf3   // Queen recaptures, staying active
f8-c4   // Developing the bishop to an aggressive square
b8-c3   // Developing the knight and adding pressure to d5
d7-c6   // Preparing to develop more pieces
f1-b5   // Attacking the pinned c6 pawn
a7-b5   // Sacrificing material to deflect the bishop
b5xb5   // Capturing the pawn, still attacking
c8-d7   // Developing the knight to defend
e1-c1   // Castling queenside, connecting the rooks
d7-d7   // Preparing for the final attack
d1-d7   // Capturing the pinned knight on d7
e8-d7   // Recapturing with the queen
f3-b8   // Check, forcing a defensive move
d7xb8   // Sacrificing the queen to deflect the defender
d7-d8#  // Checkmate using the rook
~~~

</details>

<details>
<summary>game2.txt</summary>

Real Game Example: Anderssen vs. Kieseritzky, 1851 (Immortal Game)

~~~
e2-e4 // White opens with a strong central pawn move.
e7-e5 // Black mirrors, controlling the center.
f2-f4 // White plays the King’s Gambit.
e5xf4 // Black accepts the gambit, gaining a pawn.
g1-f3 // White develops a knight to attack the pawn on f4.
d7-d6 // Black defends the f4 pawn.
d2-d4 // White strikes in the center.
g5-g4 // Black attacks the knight with a pawn.
f3-e5 // White sacrifices the knight for a strong attack.
d6xe5 // Black captures the knight.
d4xe5 // White recaptures, dominating the center.
d8-h4+ // Black checks with the queen.
e1-e2 // White blocks the check.
h4-e4+ // Black continues with a check.
f1-e2 // White blocks again, developing the bishop.
e4-e3 // Black plays aggressively with the queen.
h2-h3 // White attacks the pawn.
e3xf2+ // Black delivers another check with the queen.
e2-f2 // White captures the queen, consolidating.
c8-e6 // Black develops the bishop.
b1-c3 // White develops a knight.
b8-c6 // Black develops a knight.
c1-f4 // White brings out the bishop.
c6-d4 // Black centralizes the knight.
c3-d5 // White brings out another knight, threatening fork tactics.
d8-h4+ // Black checks the king.
g2-g3 // White defends with the pawn.
h4-g3 // Black sacrifices the queen for a pawn.
f2-g3 // White accepts the queen sacrifice.
f8-b4 // Black pins the knight with the bishop.
a2-a3 // White attacks the pinned bishop.
b4-c3 // Black sacrifices the bishop.
b2-c3 // White captures the bishop.
d4-c2+ // Black forks the king and rook with the knight.
e1-d1 // White moves the king to safety.
c2-a1 // Black captures the rook.
h1-h2 // White prepares to defend.
a1-b3 // Black places the knight aggressively.
c3-c7 // White threatens promotion.
b3-d2 // Black places the knight to defend.
c7-c8=Q // White promotes the pawn to a queen, gaining material.
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

Opening move, controlling the center


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . . . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖

Responding in kind, controlling the center


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ ♟ . ♟ ♟ ♟
6 . . . . . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Developing the knight, attacking the e5 pawn


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♟ . . .
4 . . . . ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Supporting the pawn on e5


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♟ . . .
4 . . . ♙ ♙ . . .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Opening up the center, attacking the e5 pawn


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♟ . . .
4 . . . ♙ ♙ . ♝ .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Pinning the knight on f3 to the queen


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . ♝ .
3 . . . . . ♘ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Capturing the pawn on e5


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . . . . ♝ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ ♕ ♔ ♗ . ♖

Capturing the knight, forcing a queen move


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . . . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ ♗ . ♖

Queen recaptures, staying active


  A B C D E F G H
8 ♜ ♞ ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . . . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ ♗ . ♖

Developing the bishop to an aggressive square


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ ♗ . ♖

Developing the knight and adding pressure to d5


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ ♗ . ♖

Preparing to develop more pieces


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 ♟ ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . ♗ . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ . . ♖

Attacking the pinned c6 pawn


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . ♟ . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ . . ♖

Sacrificing material to deflect the bishop


  A B C D E F G H
8 ♜ . ♝ ♛ ♚ . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ . . ♖

Capturing the pawn, still attacking


  A B C D E F G H
8 ♜ . . ♛ ♚ . ♞ ♜
7 . ♟ ♟ ♝ . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♗ . ♔ . . ♖

Developing the knight to defend


  A B C D E F G H
8 ♜ . . ♛ ♚ . ♞ ♜
7 . ♟ ♟ ♝ . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Castling queenside, connecting the rooks


  A B C D E F G H
8 ♜ . . ♛ ♚ . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Preparing for the final attack


  A B C D E F G H
8 ♜ . . ♛ ♚ . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Capturing the pinned knight on d7


  A B C D E F G H
8 ♜ . . ♛ . . ♞ ♜
7 . ♟ ♟ ♚ . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . ♕ . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Recapturing with the queen


  A B C D E F G H
8 ♜ ♕ . ♛ . . ♞ ♜
7 . ♟ ♟ ♚ . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . . . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Check, forcing a defensive move


  A B C D E F G H
8 ♜ ♚ . ♛ . . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . . . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Sacrificing the queen to deflect the defender


  A B C D E F G H
8 ♜ ♚ . . . . ♞ ♜
7 . ♟ ♟ . . ♟ ♟ ♟
6 . . . ♟ . . . .
5 . . . . ♙ . . .
4 . . . . ♙ . . .
3 . . ♞ . . . . .
2 ♙ ♙ ♙ . . ♙ ♙ ♙
1 ♖ ♘ ♔ . . . . ♖

Checkmate using the rook
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
