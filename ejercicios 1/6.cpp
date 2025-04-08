#include <iostream>
using namespace std;

int main() {
    int cantidadA;
    double costoA, costoTotal, rentaBus = 4000;

    cout << " Bienvenido al programa para organizar un viaje academico" << endl;
    cout << "Ingrese la cantidad de alumnos que van al viaje: ";
    cin >> cantidadA;

   
    if (cantidadA >= 100) {
        costoA = 65;
    } else if (cantidadA >= 50) {
        costoA = 70;
    } else if (cantidadA >= 30) {
        costoA = 95;
    } else {
        costoA = 120;
       
        costoA = rentaBus / cantidadA;
    }

    
    if (cantidadA >= 30) {
        costoTotal = cantidadA * costoA;
    } else {
        costoTotal = rentaBus; 
    }

    
    cout << "\n El costo por alumno individual es: " << costoA << " euros" << endl;
    cout << " El pago total a la compañia de buses es: " << costoTotal << " euros" << endl;

    cout << "\n Gracias por usar este porograma" << endl;
    return 0;
}
