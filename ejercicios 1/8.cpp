#include <iostream>
#include <string>
using namespace std;

int main() {
    double totalCuenta, porcentajePropina = 0, montoP, totalPagar;
    string servicio;

    cout << " Bienvenido al sistema de propinas de un  restaurante " << endl;
    cout << "Ingrese el valor total de la cuenta: $";
    cin >> totalCuenta;

    cout << "Que le parecio el servicio? (excelente, bueno, regular, malo): ";
    cin >> servicio;

    if (servicio == "excelente") {
        porcentajePropina = 0.20;
    } else if (servicio == "bueno") {
        porcentajePropina = 0.15;
    } else if (servicio == "regular") {
        porcentajePropina = 0.10;
    } else if (servicio == "malo") {
        porcentajePropina = 0.0;
    } else {
        cout << "Intente de nuevo" << endl;
    }

   
    montoP = totalCuenta * porcentajePropina;

 
    totalPagar = totalCuenta + montoP;

    cout << "\n Propina calculada: $" << montoP << endl;
    cout << "Total a pagar (cuenta + propina): $" << totalPagar << endl;

    cout << "\n Gracias por usar este programa" << endl;


    return 0;
}
