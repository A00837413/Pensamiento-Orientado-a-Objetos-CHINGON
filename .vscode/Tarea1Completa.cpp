#include <iostream>
#include <cstdlib>
#include <ctime>  
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
//Equipo: Carlos Villegas, Andrés Guerra

//1
void operaNumeros(){
    int x,y;

    string operacion;
    cout<<"Ingresa la operacion (s=suma,r=resta,m=multiplicacion): ";
    cin>>operacion;
    cout<<"Ingresa dos valores: ";
    cin>>x>>y;

    if (operacion == "s"){
    cout<<"El resultado de la suma es: "<<x+y<<endl;
    }else if (operacion == "r"){
    cout<<"El resultado de la resta es: "<<x-y<<endl;
    }else if (operacion == "m"){
    cout<<"El resultado de la multiplicacion es: "<<x*y<<endl;
    }else{
        cout<<"Operación ivalida"<<endl;
    }
}

//2
void numeroImpar(){
    int numero;
    cout<<"Ingresa un numero: ";
    cin>>numero;
    
    while (numero%2 == 0){
        cout<<"Ingresa un numero: ";
        cin>>numero;
        }cout<<"El numero "<<numero<<" es impar "<<endl;
}

//3
void sumaPares(){
    int numero, suma = 0;  

    for (numero = 1; numero <= 100; numero++) {
        if (numero % 2 == 0) {
            suma += numero; 
        }
    }
    cout << "La suma de todos los numeros pares enteros entre 1 y 100 es: " << suma << endl; 
}

//4
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

//5
void numeroMagico() {
    srand((unsigned) time(NULL));  

    int random = 1 + rand() % 100;  
    int numero = 0;
    int intentos = 0;
    cout << "Adivina el número magico entre 1 y 100." << endl;

    do {
    cout << "Ingresa un número: ";
    cin >> numero;
    intentos++;

    if (numero > random) {
        cout << "MENOS" << endl;
    } else if (numero < random) {
        cout << "MÁS" << endl;
    } else {
        cout << "Acertaste con el valor mágico " << random << " después de " << intentos << " intentos." << endl;
    }
    } while (numero != random);
}

//6
void conversionCelciusFarenheit() {
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


//7
void serieAritmetica() {
    int suma = 0;
    int a = 1;    
    int d = 3;    
    int n = 25;   

    for (int i = 0; i < n; i++) {
        int termino = a + i * d;  
        cout << "Término " << i + 1 << ": " << termino << endl;
        suma += termino;  
    }
    cout << "Valor total de la serie: " << suma << endl;
}

//8
void mediasGeometricaArmonica() {
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
    }

int main() {
    int programa;
    cout << "1 operaNumeros"<< endl;
    cout << "2 numeroImpar "<< endl;
    cout << "3 sumaPares"<< endl;
    cout << "4 mediaAritmetica"<< endl;
    cout << "5 numeroMagico"<< endl;
    cout << "6 conversionCelsiusFarenheit"<< endl;
    cout << "7 serieAritmetica"<< endl;
    cout << "8 mediasGeometricaArmonica"<< endl;

    cout << "Ingresa un numero para iniciar el programa: "<< endl;
    cin >> programa;

    if (programa == 1){
        operaNumeros();
    }else if (programa == 2){
        numeroImpar();
    }else if (programa == 3){
        sumaPares();
    }else if (programa == 4){
        mediaAritmetica();
    }else if (programa == 5){
        numeroMagico();
    }else if (programa == 6){
        conversionCelciusFarenheit();
    }else if (programa == 7){
        serieAritmetica();
    }else if (programa == 8){
        mediasGeometricaArmonica();
    }else{
        cout<<"Programa invalido"<<endl;
    }
    return 0;
}

