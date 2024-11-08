## Base de données clients

### Objectif
- Fichiers texte in/out
- enum, struct, ...
- string, ...
- tableau, ...
- architecture informatique

### A faire

Ecrire un programme permettant de gérer les transactions commerciales d'un magasin.
Cette application simple gère une liste de clients, de produits et les achats de produits.

Le menu principal de l'application permet d'aller dans les menus spécifiques qui peuvent être différents les uns des autres.

| Section     | Menu                 |
|:------------|:---------------------|
| Customer    | `ADD`, `LIST`, `EXIT`|
| Product     | `ADD`, `LIST`, `EXIT`|
| Transaction | `ADD`, `LIST`, `EXIT`|
| Quit        | `QUIT`               |

| Menu    | Actions                                                                                   |
|:--------|:------------------------------------------------------------------------------------------|
| `ADD`   | Ajouter un enregistrement                                                                 |
| `LIST`  | Lister à l'écran tous les enregistrements                                                 |
| `EXIT`  | Revenir au menu principal                                                                 |
| `QUIT`  | Inviter l'utilisateur à sauver ses données sur fichier et à confirmer la fin du programme |


#### Customers

Un client est connu avec les éléments suivants

| Field       | Comment              |
|:------------|:---------------------|
| customer_id | no unique du client  |
| name        | nom du client        |
| birthdate   | au format dd-mm-yyyy |
| email       | son email            |

#### Products

Un produit est défini par

| Field       | Comment                 |
|:------------|:------------------------|
| product_id  | no unique du produit    |
| name        | le nom du produit       |
| details     | détails complémentaires |
| price       | le prix du produit      |

#### Transactions

Une transaction liste les achats de produits par les clients avec les données suivantes

| Field          | Comment                     |
|:---------------|:----------------------------|
| transaction_id | no unique de la transaction |
| customer_id    | id du client                |
| product_id     | id du produit               |
| date           | date d'achat                |

<br>
Au début du programme, l'utilisateur est invité à saisir le nom du fichier `.csv` contenant les informations à charger dans des tableaux.

Un seul fichier `.csv` (comma separated value) contient toutes les données des customers, des products et des transactions afin d'assurer la cohérence de données. Il est formaté comme suit : 

| Data        | Format                                                 |
|:------------|:-------------------------------------------------------|
| customer    | `1`,`customer_id`,`name`,`birthdate`,`email`           |
| product     | `2`,`product_id`,`name`,`details`,`price`              |
| transaction | `3`,`transaction_id`,`customer_id`,`product_id`,`date` |

<details>
<summary>Exemple de fichier</summary>

~~~
1,0,Megan Robinson,18-06-1995,megan.robinson@example.com
1,1,John Smith,21-05-1990,john.smith@example.com
1,2,Emily Johnson,14-03-1985,emily.johnson@example.com
1,3,Michael Brown,18-07-1992,michael.brown@example.com
1,4,Linda Williams,30-09-1980,linda.williams@example.com
1,5,David Jones,01-11-1995,david.jones@example.com
1,6,Jessica Garcia,25-12-1988,jessica.garcia@example.com
1,7,Daniel Miller,12-01-1991,daniel.miller@example.com
1,8,Sarah Davis,07-04-1993,sarah.davis@example.com
1,9,James Martinez,20-02-1986,james.martinez@example.com
1,10,Amy Wilson,15-10-1994,amy.wilson@example.com
1,11,Andrew Moore,08-02-1987,andrew.moore@example.com
1,12,Laura Taylor,03-08-1990,laura.taylor@example.com
1,13,Matthew Anderson,22-12-1993,matthew.anderson@example.com
1,14,Nicole Thomas,05-09-1982,nicole.thomas@example.com
1,15,Christopher Jackson,29-06-1994,christopher.jackson@example.com
1,16,Karen White,10-11-1989,karen.white@example.com
1,17,Jason Harris,19-03-1991,jason.harris@example.com
1,18,Patricia Martin,24-07-1983,patricia.martin@example.com
1,19,Anthony Thompson,15-02-1986,anthony.thompson@example.com
2,0,Sous Vide Machine,Precision sous vide machine,99.990000
2,1,Widget Pro,High-quality widget with advanced features,29.990000
2,2,Gizmo Plus,Versatile gizmo suitable for multiple applications,19.490000
2,3,Widget Mini,Compact widget designed for portability,14.990000
2,4,Gadget X,Next-gen gadget with smart capabilities,49.990000
2,5,Gizmo Lite,Lightweight gizmo for everyday use,9.990000
2,6,Widget XL,Extra-large widget for industrial purposes,59.990000
2,7,Accessory Kit,Complete accessory kit for all devices,24.990000
2,8,Adapter Pro,Universal adapter compatible with most models,12.990000
2,9,Charger Max,High-capacity charger for quick recharges,17.990000
2,10,Battery Pack,Extended-life battery pack for long use,22.490000
2,11,Screen Guard,Durable screen guard with anti-glare,4.990000
2,12,Protective Case,Rugged case for extreme protection,15.990000
2,13,Stylus Pen,High-precision stylus pen,9.490000
2,14,Mount Holder,Adjustable mount holder for easy viewing,11.990000
2,15,Keyboard Pad,Ergonomic keyboard pad for comfort,8.990000
2,16,Wireless Mouse,High-speed wireless mouse with ergonomic design,13.990000
2,17,Smart Light,Wi-Fi enabled smart light bulb,12.490000
2,18,USB Hub,Compact USB hub with four ports,10.490000
2,19,Webcam HD,High-definition webcam for video calls,39.990000
2,20,External Drive,Portable external hard drive,79.990000
2,21,Power Bank,High-capacity power bank,29.990000
2,22,Charging Cable,Durable fast-charging cable,6.990000
2,23,Headphones Pro,Noise-cancelling headphones,49.990000
2,24,Earbuds Lite,Compact and wireless earbuds,24.990000
2,25,Smart Watch,Feature-rich smart watch,99.990000
2,26,Fitness Tracker,Lightweight fitness tracker with app integration,59.990000
2,27,Portable Speaker,Wireless speaker with deep bass,44.990000
2,28,VR Headset,Immersive VR headset,129.990000
2,29,Microphone Studio,Professional-grade microphone,74.990000
2,30,Tablet Stand,Adjustable tablet stand,15.490000
2,31,HDMI Cable,High-speed HDMI cable for 4K,7.990000
2,32,Surge Protector,6-outlet surge protector,12.990000
2,33,Wireless Charger,Qi-certified wireless charger,18.990000
2,34,Portable Projector,Compact projector with HD quality,149.990000
2,35,Noise Blocker,Earplugs designed to reduce noise,3.990000
2,36,Flash Drive 64GB,High-speed 64GB USB flash drive,9.990000
2,37,Compact Tripod,Mini tripod with flexible legs,13.490000
2,38,Phone Holder,Car phone holder with magnetic grip,11.990000
2,39,Smart Thermostat,Energy-saving smart thermostat,199.990000
2,40,Robot Vacuum,Automatic robot vacuum cleaner,249.990000
2,41,Blender Pro,High-performance blender,59.990000
2,42,Electric Kettle,Fast-boil electric kettle,29.490000
2,43,Air Purifier,HEPA air purifier for cleaner air,89.990000
2,44,Pressure Cooker,Multi-functional electric pressure cooker,79.990000
2,45,Slow Cooker,Programmable slow cooker,39.990000
2,46,Food Processor,High-power food processor,99.990000
2,47,Toaster,2-slice toaster with browning control,19.990000
2,48,Coffee Maker,Automatic coffee maker with timer,49.990000
2,49,Electric Grill,Indoor electric grill,54.990000
3,0,10,13,02-01-2024
3,1,12,27,04-01-2024
3,2,5,14,08-01-2024
3,3,18,33,11-01-2024
3,4,7,8,12-01-2024
3,5,15,22,16-01-2024
3,6,3,41,19-01-2024
3,7,9,37,24-01-2024
3,8,12,15,25-01-2024
3,9,11,29,27-01-2024
3,10,4,19,02-02-2024
3,11,17,45,10-02-2024
3,12,8,24,13-02-2024
3,13,2,11,19-02-2024
3,14,14,6,21-02-2024
3,15,10,35,01-03-2024
3,16,16,9,04-03-2024
3,17,6,28,10-03-2024
3,18,13,3,15-03-2024
3,19,1,17,18-03-2024
3,20,19,23,22-03-2024
3,21,7,31,01-04-2024
3,22,15,10,05-04-2024
3,23,5,46,12-04-2024
3,24,18,20,19-04-2024
3,25,9,12,25-04-2024
3,26,11,38,30-04-2024
3,27,3,4,03-05-2024
3,28,2,44,10-05-2024
3,29,14,26,15-05-2024
~~~

</details>

### Complément
- Les fichiers `.csv` sont supposés être formatés correctement.
- Le volume d'information dans le `.csv` n'est pas connu à l'avance.
- A l'affichage, les dates sont au format `DD-MON-YYYY` (ie 07-NOV-2024).
- Toutes les erreurs saisies sont traitées.
- Les menus peuvent varier d'une section à l'autre.
- les `id` sont générés automatiquement par le programme.
- ⚠️ Utiliser au mieux tout ce qui a été vu au cours.

### Copies d'écran

<details>
<summary>Lancement du programme</summary>

~~~
Welcome message ...
-------------------
Load database files
shop files : ../shop_xyz.csv

Main menu
   0 Customer
   1 Product
   2 Transaction
   3 Quit
your choice [0-3] : 
~~~

</details>

<details>
<summary>Customer</summary>

~~~
Main menu
   0 Customer
   1 Product
   2 Transaction
   3 Quit
your choice [0-3] : 0

Customer
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 2
~~~

</details>

<details>
<summary>==> Customer ADD</summary>

~~~
Customer
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 0

new customer
name     : nouveau
birthday : 30-02-2024
birthday : 28-02-2024
email    : email(at)mail.com
~~~

</details>

<details>
<summary>==> Customer LIST</summary>

~~~
Customer
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 1

id       : 0
name     : Megan Robinson
birthday : 18-JUN-1995
email    : megan.robinson@example.com

id       : 1
name     : John Smith
birthday : 21-MAI-1990
email    : john.smith@example.com

etc ... 
~~~

</details>

<details>
<summary>Product</summary>

~~~
Main menu
   0 Customer
   1 Product
   2 Transaction
   3 Quit
your choice [0-3] : 1

Product
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 2
~~~

</details>

<details>
<summary>==> Product ADD</summary>

~~~
Product
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 0

new product
name     : name
details  : details
prices   : 12.20
~~~

</details>

<details>
<summary>==> Product LIST</summary>

~~~
Product
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 1

id       : 0
name     : Sous Vide Machine
details  : Precision sous vide machine
price    : 99.99

id       : 1
name     : Widget Pro
details  : High-quality widget with advanced features
price    : 29.99

etc ...
~~~

</details>

<details>
<summary>Transcation</summary>

~~~
Main menu
   0 Customer
   1 Product
   2 Transaction
   3 Quit
your choice [0-3] : 2

Transaction
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 2
~~~

</details>

<details>
<summary>==> Transaction ADD</summary>

~~~
Transaction
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 0

new transaction
cust id [0-21] : 1
prod id [0-51] : 2
date : 12-12-2024
~~~

</details>

<details>
<summary>==> Transaction LIST</summary>

~~~
Transaction
   0 Add
   1 List
   2 Exit
Your choice [0-2] : 1

customer : Amy Wilson
product  : Stylus Pen
price    : 9.49
date     : 02-JAN-2024

customer : Laura Taylor
product  : Portable Speaker
price    : 44.99
date     : 04-JAN-2024

etc ...
~~~

</details>

<details>
<summary>QUIT</summary>

~~~
Main menu
   0 Customer
   1 Product
   2 Transaction
   3 Quit
your choice [0-3] : 3

Quit
save databases [Y/N] : n
Quit the application [Y/N] : y
~~~

</details>

### Modalités
- à faire **par groupe de deux étudiants**
    - [groupes PRG1-B](groupes_PRG1-B.md)
    - [groupes PRG1-E](groupes_PRG1-E.md)
- 6 périodes

---
Bon travail
