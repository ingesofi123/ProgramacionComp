
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipoAuto;
    double distancia;
    int paradasPits;
    double desgasteNeumaticos;
    double consumoPorKm = 0, costoLitro = 5000, costoPitStop = 0, costoCambioNeumaticos = 0;
    double litrosNecesarios = 0, costoCombustible = 0, totalPitStops = 0, totalNeumaticos = 0, totalFinal = 0;

    cout << "Ingrese el tipo de auto (ligero / alta): ";
    cin >> tipoAuto;
    cout << "Ingrese la distancia de la carrera (km): ";
    cin >> distancia;
    cout << "Ingrese el numero de paradas en pits: ";
    cin >> paradasPits;
    cout << "Ingrese el porcentaje de desgaste de neumaticos por parada (0-100): ";
    cin >> desgasteNeumaticos;

    if (tipoAuto == "ligero") {
        consumoPorKm = 0.1;
        costoPitStop = 20000;
        costoCambioNeumaticos = 50000;
    } else if (tipoAuto == "alta") {
        consumoPorKm = 0.2;
        costoPitStop = 20000;
        costoCambioNeumaticos = 100000;
    } else {
        cout << "Tipo de auto no valido." << endl;
        return 1;
    }

    litrosNecesarios = distancia * consumoPorKm;
    costoCombustible = litrosNecesarios * costoLitro;
    totalPitStops = paradasPits * costoPitStop;

    if (desgasteNeumaticos > 50) {
        totalNeumaticos = paradasPits * costoCambioNeumaticos;
    } else {
        totalNeumaticos = 0;
    }

    totalFinal = costoCombustible + totalPitStops + totalNeumaticos;

    cout << "\n--- Resumen de Costos ---" << endl;
    cout << "Combustible necesario: " << litrosNecesarios << " litros" << endl;
    cout << "Costo de combustible: $" << costoCombustible << endl;
    cout << "Costo por paradas en pits: $" << totalPitStops << endl;
    cout << "Costo por cambio de neumaticos: $" << totalNeumaticos << endl;
    cout << "Costo total de la carrera: $" << totalFinal << endl;

    return 0;
}
