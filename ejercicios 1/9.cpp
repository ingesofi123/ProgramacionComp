#include <iostream>
using namespace std;

int main() {
    int edad;
    double costoBase, descuento = 0.0, montoDescuento, primaFinal;

    cout << "Bienvenido al sistema que calcula las primas de un seguro " << endl;
    cout << "Ingrese la edad del conductor: ";
    cin >> edad;

    cout << "Ingrese el costo base de la prima anual: ";
    cin >> costoBase;

    
    if (edad < 25) {
        descuento = 0.0;
    } else if (edad <= 35) {
        descuento = 0.10; 
    } else if (edad <= 50) {
        descuento = 0.20; 
    } else {
        descuento = 0.25; 
    }

    montoDescuento = costoBase * descuento;
    primaFinal = costoBase - montoDescuento;

  
    cout << "\n Descuento aplicado: " << descuento * 100 << "%" << endl;
    cout << "Monto final del descuento: $" << montoDescuento << endl;
    cout << "Prima anual a pagar: $" << primaFinal << endl;

    return 0;
}
