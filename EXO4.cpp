
#include <iostream>
using namespace std;

int main() {
    const int LIGNES = 2;
    const int COLONNES = 2;

    int matrice1[LIGNES][COLONNES]; // Première matrice
    int matrice2[LIGNES][COLONNES]; // Deuxième matrice
    int resultat[LIGNES][COLONNES]; // Matrice résultante

    // Lecture des éléments de la première matrice
    cout << "Entrez les éléments de la première matrice 2x2 :" << endl;
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            cout << "Élément [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matrice1[i][j];
        }
    }

    // Lecture des éléments de la deuxième matrice
    cout << "Entrez les éléments de la deuxième matrice 2x2 :" << endl;
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            cout << "Élément [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matrice2[i][j];
        }
    }

    // Calcul de la somme des deux matrices
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            resultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }

    // Affichage de la matrice résultante
    cout << "La matrice résultante après addition est :" << endl;
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            cout << resultat[i][j] << "\t";
        }
        cout << endl; // Passage à la ligne suivante
    }

    return 0;
}