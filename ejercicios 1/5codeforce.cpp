#include <iostream>
#include <string>
using namespace std;

int main() {
    string claseVuelo;
    int escalas;
    double pesoEquipaje;
    char fidelidad;
    double costoBase = 0, costoEscala = 0, costoEquipaje = 0, subtotal = 0, descuento = 0, total = 0;

    cout << "Ingrese la clase de vuelo (economica, ejecutiva, primera): ";
    cin >> claseVuelo;
    cout << "Ingrese el numero de escalas: ";
    cin >> escalas;
    cout << "Ingrese el peso del equipaje en kg: ";
    cin >> pesoEquipaje;
    cout << "¿Es miembro del programa de fidelidad? (s/n): ";
    cin >> fidelidad;

    if (claseVuelo == "economica") {
        costoBase = 300000;
        costoEscala = 50000;
        if (pesoEquipaje < 20) {
            costoEquipaje = 30000;
        } else {
            costoEquipaje = 50000;
        }
    } else if (claseVuelo == "ejecutiva") {
        costoBase = 600000;
        costoEscala = 75000;
        if (pesoEquipaje < 20) {
            costoEquipaje = 20000;
        } else {
            costoEquipaje = 40000;
        }
    } else if (claseVuelo == "primera") {
        costoBase = 1200000;
        costoEscala = 100000;
        costoEquipaje = 0; // Equipaje gratis en primera clase
    } else {
        cout << "Clase de vuelo no valida." << endl;
        return 1; // Salir del programa
    }

    subtotal = costoBase + (costoEscala * escalas) + costoEquipaje;

    if (fidelidad == 's' || fidelidad == 'S') {
        descuento = subtotal * 0.10;
    } else {
        descuento = 0;
    }

    total = subtotal - descuento;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
