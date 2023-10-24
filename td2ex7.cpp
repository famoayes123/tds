#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int* tableau = (int*)malloc(10 * sizeof(int));

    cout << "Entrez 10 entiers : ";
    for (int i = 0; i < 10; i++) {
        cin >> tableau[i];
    }

    int nombre = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    cout << "Tableau trie par ordre croissant : ";
    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    free(tableau);

    return 0;
}
