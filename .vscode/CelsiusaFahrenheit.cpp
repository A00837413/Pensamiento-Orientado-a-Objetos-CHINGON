#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

void CelsiusaFahrenheit() {
    double tempC, incremento;
    int numConversiones;


    cout << "Introduce el valor inicial en Celsius: ";
    cin >> tempC;

    cout << "Introduce el número de conversiones: ";
    cin >> numConversiones;


    cout << "De cuánto en cuánto quires ir aumentando las temperaturas en Celsius?: ";
    cin >> incremento;

    //Título tabla
    cout << "\nConversión de grados Celsius a Fahrenheit\n";
    cout << setw(10) << "FARENHEIT" << setw(10) << "CELSIUS" << endl;


    for (int i = 0; i < numConversiones; i++) {
        double fahrenheit = (9.0 / 5.0) * tempC + 32;
        

        cout << setw(10) << fixed << setprecision(2) << fahrenheit;
        cout << setw(10) << fixed << setprecision(2) << tempC << endl;

       
        tempC += incremento;
    }
}

int main() {
    CelsiusaFahrenheit();
    return 0;
}
