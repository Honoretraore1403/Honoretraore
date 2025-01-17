
#include <iostream>
using namespace std;

int main() {
    const int TAILLE = 3;
    int matrice[TAILLE][TAILLE];      // Matrice originale
    int transposee[TAILLE][TAILLE];  // Matrice transposée

    // Lecture des éléments de la matrice 3x3
    cout << "Entrez les éléments de la matrice 3x3 :" << endl;
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            cout << "Élément [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matrice[i][j];
        }
    }

    // Calcul de la transposée
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            transposee[j][i] = matrice[i][j];  // Échange lignes/colonnes
        }
    }

    // Affichage de la matrice transposée
    cout << "La matrice transposée est :" << endl;
    for (int i = 0; i < TAILLE; i++) {
        for (int j = 0; j < TAILLE; j++) {
            cout << transposee[i][j] << "\t";
        }
        cout << endl;  // Passage à la ligne suivante
    }

    return 0;
}