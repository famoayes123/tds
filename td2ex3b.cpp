#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int* pointeur = tableau;
    
    cout << "veuillez Entrez 10 nombres entiers : " << endl;
    
    for (int i = 0; i < 10; i++) {
        cin >> *pointeur ; 
    }
    
    int max = *pointeur, min = *pointeur;
    
    for (int i = 1; i < 10; i++) {
        if (*pointeur > max) {
            max = *pointeur;
        }
        if (*pointeur < min) {
            min = *pointeur;
        }
    }
    
    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;
    
    return 0;
}
