#include <iostream>
using namespace std;

int main() {

    double base, altura, area;

    cout << " Bienvenido al programa para calcular el area de un rectangulo " << endl;
    cout << "Ingresa la base del rectangulo: ";
    cin >> base;

    cout << "Ingresa la altura del rectangulo: ";
    cin >> altura;


    if (base > 0 && altura > 0) {
        area = base * altura;

        cout << "\nEl area del rectangulo es: " << area << endl;

       
        if (area > 100) {
            cout << " El area es grande >" << endl;
        } else {
            cout << " El area es pequenia <" << endl;
        }
    } else {
        cout << "Deben ser valores positivos, intenta de nuevo." << endl;
    }

    cout << "Gracias por usar este programa" << endl;
    return 0;
}
