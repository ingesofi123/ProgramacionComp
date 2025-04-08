#include <iostream>
using namespace std;

int main() {
  
    double precio1, precio2, precio3;
    int cantidad1, cantidad2, cantidad3;
    double totalSinDescuento, totalConDescuento;

    cout << "Bienvenido al programa para calcular el costo total de una compra " << endl;

    
    cout << "\nIngrese el precio del producto 1: ";
    cin >> precio1;
    cout << "Ingrese la cantidad comprada del producto 1: ";
    cin >> cantidad1;

  
    cout << "\nIngrese el precio del producto 2: ";
    cin >> precio2;
    cout << "Ingrese la cantidad comprada del producto 2: ";
    cin >> cantidad2;


    cout << "\nIngrese el precio del producto 3: ";
    cin >> precio3;
    cout << "Ingrese la cantidad comprada del producto 3: ";
    cin >> cantidad3;

  
    totalSinDescuento = (precio1 * cantidad1) + (precio2 * cantidad2) + (precio3 * cantidad3);

   
    if (totalSinDescuento > 500) {
        totalConDescuento = totalSinDescuento * 0.9; 
        cout << "\n La compra supera  $500,  10 de descuento." << endl;
        cout << "Costo total con descuento: $" << totalConDescuento << endl;
    } else {
        cout << "\n El costo total es: $" << totalSinDescuento << endl;
        cout << " No se aplica descuento esta vez" << endl;
    }

    cout << "\n Gracias por usar este programa" << endl;
    return 0;
}
