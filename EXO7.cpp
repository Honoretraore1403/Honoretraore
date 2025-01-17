
#include <iostream>
using namespace std;

// Fonction pour trouver le maximum et le minimum d'un tableau
void trouverMaxEtMin(int tableau[], int taille, int& maximum, int& minimum) {
    // Initialisation des variables max et min
    maximum = tableau[0];
    minimum = tableau[0];

    // Parcourir le tableau
    for (int i = 1; i < taille; i++) {
        if (tableau[i] > maximum) {
            maximum = tableau[i];
        }
        if (tableau[i] < minimum) {
            minimum = tableau[i];
        }
    }
}

int main() {
    int taille;

    // Lecture de la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int* tableau = new int[taille]; // Allocation dynamique du tableau

    // Lecture des éléments du tableau
    cout << "Entrez les " << taille << " éléments du tableau :" << endl;
    for (int i = 0; i < taille; i++) {
        cout << "Élément " << i + 1 << " : ";
        cin >> tableau[i];
    }

    int maximum, minimum;

    // Appel de la fonction pour trouver le max et le min
    trouverMaxEtMin(tableau, taille, maximum, minimum);

    // Affichage des résultats
    cout << "Le maximum est : " << maximum << endl;
    cout << "Le minimum est : " << minimum << endl;

    // Libération de la mémoire allouée dynamiquement
    delete[] tableau;

    return 0;
}