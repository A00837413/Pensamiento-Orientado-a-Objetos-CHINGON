#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cantidadNumeros = 0;  
    double numero; 
    double producto = 1;
    double sumaReciprocos = 0;

    cout << "Introduce los números, con los que quieres calcular la Media Armónica y la Media Aritmética (cuando desees dejar de ingresar números teclea 0):" << endl;

    while (true) {
        cin >> numero;
        if (numero == 0) {
            break; 
        }

        
        if (numero != 0) {
            producto *= numero;          
            sumaReciprocos += 1.0 / numero;
            cantidadNumeros++;
        }
    }

   
    if (cantidadNumeros > 0) {
        
        double mediaGeometrica = 1;
        for (int i = 0; i < cantidadNumeros; i++) {
            mediaGeometrica *= producto;
        }
        mediaGeometrica = pow(producto, 1.0 / cantidadNumeros);

       
        double mediaArmonica = cantidadNumeros / sumaReciprocos;

        
        cout << "Media Geométrica: " << mediaGeometrica << endl;
        cout << "Media Armónica: " << mediaArmonica << endl;
    } else {
        cout << "No se ingresaron números válidos para calcular las medias." << endl;
    }

    return 0;
}
