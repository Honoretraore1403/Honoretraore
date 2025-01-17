#include <iostream>

using namespace std;

int main() {
    const int LIGNES = 3;
    const int COLONNES = 3;
    int matrice[LIGNES][COLONNES]; // Déclaration de la matrice 3x3
    int scalaire;                 // Déclaration du scalaire

    // Lecture de la matrice 3x3
    cout << "Entrez les éléments de la matrice 3x3 :" << endl;
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            cout << "Élément [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrice[i][j];
        }
    }
    cout << "Entrez un entier scalaire : ";
    cin >> scalaire;

    // Multiplication de chaque élément de la matrice par le scalaire
    cout << "La nouvelle matrice après multiplication par " << scalaire << " est :" << endl;
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            matrice[i][j] *= scalaire; // Multiplication par le scalaire
            cout << matrice[i][j] << "\t"; // Affichage de l'élément
        }
        cout << endl; // passage la ligne suivante
    }

    return 0;
}