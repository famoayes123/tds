#include <iostream>
using namespace std;

int compteur = 0;

void affichernumtotal() {
    compteur++;
    cout<<"appel numéro "<<compteur<<endl;
}

int main() {
    affichernumtotal();
    affichernumtotal();
    affichernumtotal();
    
    return 0;
}
