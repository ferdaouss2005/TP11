
#include <iostream>
using namespace std;

// Classe abstraite
class Paiement {
public:
    virtual void effectuerPaiement(double montant) = 0;

    virtual ~Paiement() {}
};

// Paiement par carte bancaire
class PaiementCarte : public Paiement {
public:
    void effectuerPaiement(double montant) override {
        cout << "Paiement de " << montant
             << " DH par carte bancaire." << endl;
    }
};

// Paiement en especes
class PaiementEspece : public Paiement {
public:
    void effectuerPaiement(double montant) override {
        cout << "Paiement de " << montant
             << " DH en especes." << endl;
    }
};

int main() {
    // Tableau de pointeurs vers Paiement
    Paiement* paiements[4];

    // Creation des objets
    paiements[0] = new PaiementCarte();
    paiements[1] = new PaiementEspece();
    paiements[2] = new PaiementCarte();
    paiements[3] = new PaiementEspece();

    double montants[4] = {250, 100, 500, 75};

    // Simulation des paiements
    cout << "===== Simulation des paiements =====" << endl;

    for (int i = 0; i < 4; i++) {
        paiements[i]->effectuerPaiement(montants[i]);
    }

    // Liberation de la memoire
    for (int i = 0; i < 4; i++) {
        delete paiements[i];
    }

    cout << "\nMemoire liberee avec succes !" << endl;

    return 0;
}

