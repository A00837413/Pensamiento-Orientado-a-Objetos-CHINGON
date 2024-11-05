#include <iostream>
#include <string>
using namespace std;

void celsiusafahrenheit() {
    int numeroconversiones = 0;
    double conversion = 0 ;

  
    cout << "¿Cúantas conversiones quieres hacer? ";
    cin >> numeroconversiones;

    int numeros[numeroconversiones]; 

    // Asigna valores a cada elemento del arreglo
    for (int i = 0; i < 8; i++) {
        cout << "Introduce un valor para numeros[" << i << "]: ";
        cin >> numeroconversiones[i];
    }

    //Meter valores al arreglo
    for (int i = 0; i <= numeroconversiones; i++) {
        cout << "Introduce el valor de temperatura en Celsius" << i+1 << i+1 << ": ";
        cin >> numeroconversiones[i];
        conversion = (numeroconversiones[i]*9)/5 + 32;
    }

    // Calcular la media aritmética
    double media = suma / cantidadNumeros;

    // Mostrar el resultado al usuario
    cout << "El promedio es: " << media << endl;
}

int main() {
    mediaAritmetica(); // Llamar a la función para calcular la media aritmética
    return 0;
}
