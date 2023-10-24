#include <iostream>
using namespace std;

class nombrecomplex {
public:
    float real;
    float imag;

    nombrecomplex(float r, float i) : real(r), imag(i) {}

    nombrecomplex addition(const nombrecomplex & deux) const {
        return nombrecomplex(real + deux.real, imag + deux.imag);
    }

    nombrecomplex soustraction(const nombrecomplex & deux) const {
        return nombrecomplex(real - deux.real, imag - deux.imag);
    }

    nombrecomplex multiplication(const nombrecomplex & deux) const {
        return nombrecomplex(real * deux.real + real * deux.imag + imag * deux.real + imag * deux.imag);
    }
};

int main() {
    float real1, imag1, real2, imag2;
    int choice;

    cout << "Entrez la partie reelle et imaginaire du premier nombre complexe : ";
    cin >> real1>> imag1;
    nombrecomplex num1(real1, imag1);

    cout << "Entrez la partie reelle et imaginaire du deuxieme nombre complexe : ";
    cin >> real2>>imag2;
    nombrecomplex num2(real2, imag2);

    cout << "Menu : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "Entrez votre choix : ";
    cin >> choice;

    nombrecomplex result(0,0);

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
    }

    cout << "Resultat : " << result.real << " + " << result.imag << "i" << endl;

    return 0;
}
