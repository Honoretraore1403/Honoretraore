
#include <iostream>
using namespace std;

// Échange par valeur (ne modifie pas les variables originales)
void echangerParValeur(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Dans echangerParValeur : a = " << a << ", b = " << b << endl;
}

// Échange par référence (modifie les variables originales)
void echangerParReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Dans echangerParReference : a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y;

    // Lecture des deux entiers
    cout << "Entrez deux entiers : " << endl;
    cout << "x : ";
    cin >> x;
    cout << "y : ";
    cin >> y;

    // Affichage des valeurs initiales
    cout << "Avant tout échange : x = " << x << ", y = " << y << endl;

    // Échange par valeur
    echangerParValeur(x, y);
    cout << "Après echangerParValeur : x = " << x << ", y = " << y << " (pas modifié)" << endl;

    // Échange par référence
    echangerParReference(x, y);
    cout << "Après echangerParReference : x = " << x << ", y = " << y << " (modifié)" << endl;

    return 0;
}