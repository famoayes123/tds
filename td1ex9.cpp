#include <iostream>
using namespace std;
int main() {
    int n;
    double somme = 0.0;

    cout << "veuillez Entrez une valeur de n : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i;
    }

    cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << somme <<endl;

    return 0;
}
