#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    string tipoVehiculo;
    double tarifaHora = 0, tarifaDiaria = 0;
    double horasEstadia;
    double total = 0;
    double subtotal = 0;
    double penalidad = 0;
    double descuento = 0;
    int dias = 0;

    cout << "Ingrese el tipo de vehiculo (automovil, camioneta, camion): ";
    cin >> tipoVehiculo;

    cout << "Ingrese el tiempo de estadia en horas: ";
    cin >> horasEstadia;

    if (tipoVehiculo == "automovil") {
        tarifaHora = 5000;
        tarifaDiaria = 40000;
    } else if (tipoVehiculo == "camioneta") {
        tarifaHora = 8000;
        tarifaDiaria = 60000;
    } else if (tipoVehiculo == "camion") {
        tarifaHora = 12000;
        tarifaDiaria = 80000;
    } else {
        cout << "Tipo de vehiculo no valido." << endl;
        return 1;
    }

    cout << fixed << setprecision(0); 
    cout << "\n--- Detalle de cobro ---\n";

    if (horasEstadia <= 8) {
        subtotal = horasEstadia * tarifaHora;
        cout << "Tarifa por hora (" << tarifaHora << ") x " << horasEstadia << " horas = $" << subtotal << endl;
        total = subtotal;
    } else if (horasEstadia <= 24) {
        subtotal = tarifaDiaria;
        cout << "Tarifa diaria: $" << subtotal << endl;
        total = subtotal;
    } else {
        dias = horasEstadia / 24;  
        subtotal = dias * tarifaDiaria;
        cout << "Dias completos cobrados: " << dias << endl;
        cout << "Subtotal por " << dias << " dias: $" << subtotal << endl;

        penalidad = subtotal * 0.25;
        cout << "Penalidad 25% sobre subtotal: $" << penalidad << endl;
        subtotal += penalidad;

        if (horasEstadia > 48) {
            descuento = subtotal * 0.15;
            cout << "Descuento 15% por estadia > 48 horas: -$" << descuento << endl;
            subtotal -= descuento;
        }

        total = subtotal;
    }
    cout << "Total a pagar: $" << total << endl;

    return 0;
}