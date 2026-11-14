
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Classe abstraite
class NoeudFichier {
protected:
    string nomFichier;

public:
    NoeudFichier(string nom) {
        nomFichier = nom;
    }

    virtual string nom() const {
        return nomFichier;
    }

    virtual int taille() const = 0;

    virtual ~NoeudFichier() {}
};

// Classe Fichier
class Fichier : public NoeudFichier {
private:
    int tailleFichier;

public:
    Fichier(string nom, int taille)
        : NoeudFichier(nom) {
        tailleFichier = taille;
    }

    int taille() const override {
        return tailleFichier;
    }
};

// Classe Dossier
class Dossier : public NoeudFichier {
private:
    vector<NoeudFichier*> enfants;

public:
    Dossier(string nom) : NoeudFichier(nom) {}

    void ajouter(NoeudFichier* noeud) {
        enfants.push_back(noeud);
    }

    int taille() const override {
        int total = 0;

        for (int i = 0; i < enfants.size(); i++) {
            total += enfants[i]->taille();
        }

        return total;
    }

    void afficher() const {
        cout << "Dossier : " << nom() << endl;
        cout << "Taille totale : " << taille() << " Ko" << endl;
    }

    ~Dossier() {
        for (int i = 0; i < enfants.size(); i++) {
            delete enfants[i];
        }
    }
};

int main() {
    // Creation du dossier principal
    Dossier* documents = new Dossier("Documents");

    // Creation des fichiers
    Fichier* fichier1 = new Fichier("Cours.pdf", 500);
    Fichier* fichier2 = new Fichier("Exercice.docx", 200);

    // Creation d'un sous-dossier
    Dossier* projets = new Dossier("Projets");

    // Ajout d'un fichier dans le sous-dossier
    Fichier* fichier3 = new Fichier("Projet.cpp", 150);

    projets->ajouter(fichier3);

    // Ajout des fichiers et du sous-dossier
    documents->ajouter(fichier1);
    documents->ajouter(fichier2);
    documents->ajouter(projets);

    // Affichage
    documents->afficher();
    projets->afficher();

    // Liberation de la memoire
    delete documents;

    return 0;
}
