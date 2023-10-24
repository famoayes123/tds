#include<iostream>
using namespace std;

int main() {
    int taille;

    cout << "veuillez Entrez la taille du tableau : ";
    cin >> taille;

    int* tableau1 = new int[taille];

    cout << "Entrez " << taille << " nombres entiers : ";
    for (int i = 0; i < taille; i++) {
        cin >> tableau1[i];
    }

    int* tableau2 = new int[taille];

    for (int i = 0; i < taille; i++) {
        tableau2[i] = tableau1[i] * tableau1[i];
    }

    delete[] tableau1;

    cout << "Carres des nombres du premier tableau : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau2[i] << " ";
    }
    cout << endl;

    delete[] tableau2;

    return 0;
}


