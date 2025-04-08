#include <iostream>
using namespace std;

int main() {
    double inversionI, tasaInteres, interesGanado, montoFinal;

    cout << " Bienvenido al simulador anual de un banco " << endl;
    cout << "Ingrese el valor de su inversion inicial: $";
    cin >> inversionI;

    
    if (inversionI < 10000) {
        tasaInteres = 0.02; 
    } else if (inversionI <= 50000) {
        tasaInteres = 0.035; 
    } else if (inversionI <= 100000) {
        tasaInteres = 0.045; 
    } else {
        tasaInteres = 0.06; 
    }

    
    interesGanado = inversionI * tasaInteres;

    
    montoFinal = inversionI + interesGanado;

    cout << "\n Tasa de interes aplicada: " << tasaInteres * 100 << "%" << endl;
    cout << " Interes ganado después de un año: $" << interesGanado << endl;
    cout << " Monto final después de un año: $" << montoFinal << endl;

    cout << "\nGracias porn usar este programa" << endl;

    return 0;
}
