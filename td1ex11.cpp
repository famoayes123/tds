#include <iostream>
using namespace std;
int main() {
    int hauteur;
    
    cout << "Combien de lignes ? ";
    cin >> hauteur;

    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
