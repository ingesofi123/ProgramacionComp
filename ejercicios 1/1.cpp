#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio;
    double area;
    cout << "Programa que calcula el area de un circulo" << endl;
    cout << "Ingresa el valor del radio: ";
    cin >> radio;
    if (radio > 0) {
        area = PI * radio * radio;
        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    } else if (radio == 0) {
        cout << "No se puede dividir entre 0" << endl;
    } else {
        cout << "El radio no puede ser negativo, intenta con un numero positivo porfa." << endl;
    }

    cout << "Gracias por usar el programa" << endl;
    return 0;
}