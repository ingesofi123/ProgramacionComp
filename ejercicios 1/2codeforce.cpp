#include <iostream>
#include <string>
using namespace std;

int main() {
    double subtotal, propina = 0, descuentoMembresia = 0, descuentoAdicional = 0;
    double totalConPropina, totalDespuesMembresia, totalFinal;
    string membresia;
    double porcentajePropina, porcentajeDescuento;

    cout << "Ingrese el subtotal de la cuenta: ";
    cin >> subtotal;

    cout << "Ingrese el nivel de membresía (Bronce, Plata, Oro): ";
    cin >> membresia;

    if (membresia == "Bronce" || membresia == "bronce") {
        porcentajePropina = 0.10;
        porcentajeDescuento = 0.05;
    } else if (membresia == "Plata" || membresia == "plata") {
        porcentajePropina = 0.15;
        porcentajeDescuento = 0.10;
    } else if (membresia == "Oro" || membresia == "oro") {
        porcentajePropina = 0.20;
        porcentajeDescuento = 0.15;
    } else {
        cout << "Membresía no válida. Se asignará propina del 10% y sin descuento." << endl;
        porcentajePropina = 0.10;
        porcentajeDescuento = 0.15;
    }

    propina = subtotal * porcentajePropina;
    totalConPropina = subtotal + propina;

    descuentoMembresia = subtotal * porcentajeDescuento;
    totalDespuesMembresia = totalConPropina - descuentoMembresia;

    if (totalConPropina >= 800000) {
        descuentoAdicional = totalDespuesMembresia * 0.07;
        totalFinal = totalDespuesMembresia - descuentoAdicional;
    } else {
        totalFinal = totalDespuesMembresia ;
    }

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Propina (" << porcentajePropina * 100 << "%): $" << propina << endl;
    cout << "Total con propina: $" << totalConPropina << endl;
    cout << "Descuento por membresía (" << porcentajeDescuento * 100 << "%): $" << descuentoMembresia << endl;
    if (descuentoAdicional > 0)
        cout << "Descuento adicional (7%): $" << descuentoAdicional << endl;
    cout << "Total final a pagar: $" << totalFinal << endl;

    return 0;
}
