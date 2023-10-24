#include <iostream>

using namespace std;

int main() {
    int a = 13;          
    int &ref_a = a;      
    int *p_a = &a;       

    cout << " a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;
    cout << "Valeur pointee par p_a : " << *p_a << endl;
    cout << " p_a : " << p_a << endl;
    cout << " ref_a : " << ref_a << endl;

    return 0;
}
