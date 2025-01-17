
#include <iostream>
using namespace std;

// Déclaration de la fonction
int rechercherIndice(int tableau[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return i; // Retourne l'indice si l'élément est trouvé
        }
    }
    return -1; // Retourne -1 si l'élément n'est pas trouvé
}

int main() {
    const int TAILLE = 10; // Taille du tableau
    int tableau[TAILLE];   // Déclaration du tableau
    int element;           // Élément à rechercher

    // Lecture des éléments du tableau
    cout << "Entrez les 10 éléments du tableau :" << endl;
    for (int i = 0; i < TAILLE; i++) {
        cout << "Élément " << i + 1 << ": ";
        cin >> tableau[i];
    }

    // Lecture de l'élément à rechercher
    cout << "Entrez l'élément à rechercher : ";
    cin >> element;

    // Appel de la fonction et affichage du résultat
    int indice = rechercherIndice(tableau, TAILLE, element);
    if (indice != -1) {
        cout << "L'élément " << element << " se trouve à l'indice " << indice << "." << endl;
    } else {
        cout << "L'élément " << element << " n'existe pas dans le tableau." << endl;
    }

    return 0;
}