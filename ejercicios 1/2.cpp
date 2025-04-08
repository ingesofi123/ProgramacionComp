#include <iostream>
using namespace std;

int main() {
    double masa, velocidad, energiaC;

    cout << "Bienvenido al programa que calcula la energia cinetica de un objeto " << endl;
    cout << "Por favor, ingresa la masa del objeto (en kilogramos): ";
    cin >> masa;

    cout << "Ingrese la velocidad: ";
    cin >> velocidad;
    if (masa > 0 && velocidad > 0) {
        energiaC = 0.5 * masa * velocidad * velocidad; 
        cout << "La energia cinetica del objeto es: " << energiaC<<  endl;
    } else if (masa <= 0 && velocidad <= 0) {
        cout << "La masa y la velocidad no pueden tener 0, intente de nuevo" << endl;
    } else if (masa <= 0) {
        cout << "La masa debe ser un valor positivo, intente otra vez " << endl;
    } else {
        cout << "La velocidad debe ser un valor positivo,intente otra vez " << endl;
    }

    cout << "Gracias por usar este programa" << endl;
    return 0;
}