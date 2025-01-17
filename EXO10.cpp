
#include <iostream>
using namespace std;

// Fonction pour calculer la moyenne d'un tableau
double calculerMoyenne(int* tableau, int taille) {
    int somme = 0;

    // Parcourir le tableau avec des pointeurs
    for (int i = 0; i < taille; i++) {
        somme += *(tableau + i);  // Accès via pointeur
    }

    // Calcul de la moyenne
    return static_cast<double>(somme) / taille;
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

    // Appel de la fonction pour calculer la moyenne
    double moyenne = calculerMoyenne(tableau, taille);

    // Affichage de la moyenne
    cout << "La moyenne des éléments du tableau est : " << moyenne << endl;

    // Libération de la mémoire allouée dynamiquement
    delete[] tableau;

    return 0;
}