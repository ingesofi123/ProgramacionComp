#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, promedio;

    cout << "Programa que calcula el promedio de un estudiante " << endl;

    // Pedimos las tres notas
    cout << "Ingresa la primera nota: ";
    cin >> nota1;

    cout << "Ingresa la segunda nota: ";
    cin >> nota2;

    cout << "Ingresa la tercera nota: ";
    cin >> nota3;

    
    if (nota1 >= 0 && nota2 >= 0 && nota3 >= 0) {
        promedio = (nota1 + nota2 + nota3) / 3.0;

        cout << "\nEl promedio del estudiante es: " << promedio << endl;

        
        if (promedio >= 5) {
            cout << "El alumno aprobo" << endl;
        } else {
            cout << "El alumno no fue aprobado" << endl;
        }
    } else {
        cout << " hubo un error vuelve a intentarlo." << endl;
    }

    cout << "Gracias por usar est programa" << endl;
    return 0;
}
