# TP11

EXERCICE1

<img width="290" height="335" alt="image" src="https://github.com/user-attachments/assets/e12e2341-9c83-4066-b993-08403674c83a" />


Dans cet exercice, j’ai créé une classe abstraite `Forme` contenant une méthode virtuelle pure `aire()`. J’ai ensuite créé deux classes dérivées `Cercle` et `Rectangle`, qui redéfinissent cette méthode pour calculer leurs propres aires. Dans la fonction `main`, j’ai demandé à l’utilisateur le nombre de formes à créer, puis j’ai utilisé un tableau dynamique de pointeurs `Forme**` pour stocker les objets créés avec `new`. Grâce au polymorphisme, j’ai pu appeler la méthode `aire()` à travers les pointeurs de la classe mère. Enfin, j’ai libéré chaque objet avec `delete`, puis le tableau avec `delete[]`.

EXERCICE2


<img width="324" height="167" alt="image" src="https://github.com/user-attachments/assets/5c754a93-bb7f-4454-8eb8-205b406f84dd" />

Dans cet exercice, j’ai créé une classe abstraite `Paiement` contenant une méthode virtuelle pure `effectuerPaiement(double montant)`. J’ai ensuite créé deux classes dérivées : `PaiementCarte` et `PaiementEspece`, qui redéfinissent cette méthode pour afficher le type de paiement correspondant. Dans la fonction `main`, j’ai créé un tableau de pointeurs vers `Paiement` contenant différentes instances des deux classes. J’ai utilisé le polymorphisme pour effectuer plusieurs paiements à travers une même méthode. Enfin, j’ai libéré la mémoire en supprimant chaque objet avec `delete`.

EXERCICE3

<img width="287" height="254" alt="image" src="https://github.com/user-attachments/assets/e4c14929-d0e5-488d-8c9f-d72e64a62b96" />


Dans cet exercice, j’ai créé une classe abstraite `Animal` contenant une méthode virtuelle pure `crier()` et une méthode non abstraite `info()`. J’ai ensuite créé trois classes dérivées : `Chien`, `Chat` et `Vache`, qui redéfinissent la méthode `crier()` avec leur propre comportement. Dans la fonction `main`, j’ai utilisé un vecteur de pointeurs `Animal*` pour stocker les différents animaux. J’ai parcouru ce vecteur pour appeler les méthodes `info()` et `crier()` en utilisant le polymorphisme. Enfin, j’ai libéré la mémoire de chaque objet avec `delete` et vidé le vecteur avec `clear()`.


EXERCICE4

<img width="224" height="182" alt="image" src="https://github.com/user-attachments/assets/9b7d0270-8d09-47e9-985c-6d186071b73d" />


# Exercice 4 : Système de fichiers virtuel

Dans cet exercice, j'ai réalisé un système de fichiers virtuel en C++ en utilisant les classes abstraites et l'héritage. J'ai créé une classe abstraite `NoeudFichier` contenant les méthodes `nom()` et `taille()`, puis deux classes dérivées : `Fichier`, qui représente un fichier avec un nom et une taille, et `Dossier`, qui contient une liste de pointeurs vers des fichiers et des sous-dossiers. La taille d'un dossier est calculée automatiquement en additionnant les tailles de tous ses enfants. J'ai également ajouté un menu interactif permettant à l'utilisateur de créer des fichiers, de créer des sous-dossiers, de sélectionner un dossier et d'afficher sa taille totale. Enfin, j'ai utilisé un destructeur pour libérer la mémoire dynamique.
