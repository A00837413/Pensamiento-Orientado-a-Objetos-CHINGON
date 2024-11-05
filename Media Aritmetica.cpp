#include <iostream>
#include <string>
using namespace std;

// Función que calcula la media aritmética de los números ingresados
void mediaAritmetica() {
    int cantidadNumeros; // Variable para almacenar la cantidad de números
    double suma = 0;     // Variable para acumular la suma de los números

    // Pedir al usuario la cantidad de números que desea introducir
    cout << "¿Con cuántos números quieres trabajar? ";
    cin >> cantidadNumeros;

    // Bucle para leer todos los números ingresados por el usuario
    for (int i = 1; i <= cantidadNumeros; i++) {
        double numero;   // Variable para almacenar cada número ingresado
        cout << "Introduce el número " << i << ": ";
        cin >> numero;
        suma += numero;  // Sumar el número ingresado a la variable 'suma'
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
