
#include <iostream>
using namespace std;

// Fonction pour trier un tableau en utilisant des pointeurs
void trierTableau(int* tableau, int taille) {
    for (int* i = tableau; i < tableau + taille; i++) {
        for (int* j = i + 1; j < tableau + taille; j++) {
            if (*i > *j) {
                // Échange des valeurs en utilisant des pointeurs
                int temp = *i;
                *i = *j;
                *j = temp;
            }
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
        cin >> *(tableau + i);
    }

    // Tri du tableau
    trierTableau(tableau, taille);

    // Affichage du tableau trié
    cout << "Le tableau trié en ordre croissant est :" << endl;
    for (int i = 0; i < taille; i++) {
        cout << *(tableau + i) << " ";
    }
    cout << endl;

    // Libération de la mémoire allouée dynamiquement
    delete[] tableau;

    return 0;
}