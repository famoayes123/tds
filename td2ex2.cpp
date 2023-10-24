#include <iostream>
using namespace std;
// Fonction 1
int multiplede2(int nombre) {
    if (nombre%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}3

// Fonction 2 
int multiplede3(int nombre) {
    if (nombre%3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int nombre;
    cout<< "veuillez entrer un nombre entier : ";
    cin>> nombre;

    if (multiplede2(nombre)) {
        cout<< "Il est pair" <<endl;
    }
    if (multiplede3(nombre)) {
        cout<< "Il est multiple de 3" <<endl;
    }
    if (multiplede2(nombre) && multiplede3(nombre)) {
        cout<< "Il est divisible par 6" <<endl;
    }

    return 0;
}
