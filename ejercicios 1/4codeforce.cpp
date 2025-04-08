#include <iostream>
#include <string>
using namespace std;

int main() {
    string temporada, tipoHabitacion;
    bool esFidelizado;
    int noches;
    int tarifaNoche = 0;

    cout << "Ingrese la temporada (alta, media, baja): ";
    cin >> temporada;

    cout << "Ingrese el tipo de habitacion (estandar o suite): ";
    cin >> tipoHabitacion;

    cout << "Ingrese el numero de noches: ";
    cin >> noches;

    char respuesta;
    cout << "¿Es miembro del programa de fidelidad? (s/n): ";
    cin >> respuesta;
    esFidelizado = (respuesta == 's');

    if (temporada == "alta") {
        if (tipoHabitacion == "estandar") {
            tarifaNoche = 300000;
        } else if (tipoHabitacion == "suite") {
            tarifaNoche = 600000;
        }   
    } else if (temporada == "media") {
        if (tipoHabitacion == "estandar") {
            tarifaNoche = 250000;
        } else if (tipoHabitacion == "suite") {
            tarifaNoche = 500000;
        }
    } else if (temporada == "baja") {
        if (tipoHabitacion == "estandar") {
            tarifaNoche = 200000;
        } else if (tipoHabitacion == "suite") {
            tarifaNoche = 400000;
        }
    } else {
        cout << "Temporada no valida." << endl;
        return 1;
    }

    if (tarifaNoche == 0) {
        cout << "Tipo de habitación no valido." << endl;
        return 1;
    }

    int totalBase = tarifaNoche * noches;
    float descNoches = totalBase  * 0.10; 
    double totalDescNoches = totalBase - descNoches; 
    float totalDescFideli = totalDescNoches * 0.05; 
    double totalFinal = totalDescNoches - totalDescFideli;
    



    if (noches > 5) {
        descNoches;
    }


    if (esFidelizado) {
        totalDescFideli;
    }

    cout << "\n--- Detalle del Precio Final ---" << endl;
    cout << "Tarifa por noche: $" << tarifaNoche << endl;
    cout << "Total sin descuentos: $" << totalBase << endl;
    cout << "total descuento por noches" << totalDescNoches << endl;
    cout << "total descuento por noches" << totalDescFideli << endl;
    cout << "total final" << totalFinal << endl;

    
    

    return 0;
}