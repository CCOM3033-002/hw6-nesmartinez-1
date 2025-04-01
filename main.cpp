/*
HW6: Figuras 3D
Néstor A. Martínez Rivera
802-22-3069
*/

//incluir librerías necesarias
#include <iostream>
#include <iomanip> //para fijas los dígitos decimales
#include <cmath> //para calcular numeros cuadrados
using namespace std;

//inicializar la variable constante PI
const double pi = 3.14159;

//función para calcular el volumen del cilindro
double calcularVolumenCilindro(double radio, double altura) {
    return pi * pow(radio, 2) * altura;
}


//función para calcular el volumen de la esfera
double calcularVolumenEsfera(double radio) {
    return (4.0 / 3.0) * pi * pow(radio, 3);
}


//función para calcular el volumen de la prisma
double calcularVolumenPrisma(double largo, double ancho, double altura) {
    return largo * ancho * altura;
}


//función para calcular el area del cilindro
double calcularAreaCilindro(double radio, double altura) {
    return 2 * pi * radio * (radio + altura);
}

//función para calcular el area de la esfera
double calcularAreaEsfera(double radio) {
    return 4 * pi * pow(radio, 2);
}

//función para calcular el area de la prisma
double calcularAreaPrisma(double largo, double ancho, double altura) {
    return 2 * (largo * ancho + largo * altura + ancho * altura);
}


int main() {
    //declarar variables para almacenar las opciones del usuario
    char figura, opcion;

    //desplegar instrucciones al usuario 
    cout << "Este programa calcula el volumen y el área de la supercicie de tres figuras.\n\n";

    //desplegar instrucciones para escoger una letra
    cout << "Escoga una figura:\na. Cilindro\nb. Esfera\nc. Prisma rectangular\nSelección: ";
    cin >> figura;

    //input validation
    while (figura != 'a' && figura != 'b' && figura != 'c') {
        cout << "Opción invalida. Intente nuevamente: ";
        cin >> figura;
    }

    //desplegar instrucciones para escoger una letra
    cout << "\nEscoga entre las siguientes opciones:\na. Volumen\nb. Area de la superficie\nSelección:";
    cin >> opcion;

    //input validation
    while (opcion != 'a' && opcion != 'b') {
        cout << "Opción invalida. Intente nuevamente: ";
        cin >> opcion;
    }

    //fijar los resultados a dos dígitos decimales
    cout << fixed << setprecision(2);

    //switch/case para manejar los cálculos respecto a la opción del usuario
    switch (figura) {
        //en el caso de que el usuario escogió cilindro:
        case 'a': {
            //declarar variables
            double radio, altura;
            do {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;
            } while (radio <= 0); //input validation 
            do {
                cout << "Entre la altura del cilindro: ";
                cin >> (altura); //input validation 
            } while (altura <= 0);
            if (opcion == 'a') {
                cout << "\nEl volumen del cilindro es: " << calcularVolumenCilindro(radio, altura) << endl; //desplegar cálculos
            } else {
                cout << "\nEl area del cilindro es: " << calcularAreaCilindro(radio, altura) << endl; //desplegar cálculos
            }
            break; //romper el ciclo
        }
        //en el caso de que el usuario escogió esfera:
        case 'b': {
            double radio; //declarar variable
            do {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;
            } while (radio <= 0); //input validation 
            if (opcion == 'a') {
                cout << "\nEl volumen de la esfera es: " << calcularVolumenEsfera(radio) << endl; //desplegar resultado
            } else {
                cout << "\nEl area de la esfera es : " << calcularAreaEsfera(radio) << endl; //desplegar resultado
            }
            break; //romper ciclo
        }
        case 'c': {
            double largo, ancho, altura; //declarar variables 
            do {
                cout << "Entre la longitud de la prisma: ";
                cin >> largo;
            } while (largo <= 0); //input validation 
            do {
                cout << "Entre el ancho de la prisma: ";
                cin >> ancho;
            } while (ancho <= 0); //input validation 
            do {
                cout << "Entre la altura de la prisma: ";
                cin >> altura;
            } while (altura <= 0); //input validation 
            if (opcion == 'a') {
                cout << "\nEl volumen de la prisma es: " << calcularVolumenPrisma(largo, ancho, altura) << endl; //desplegar resultados
            } else {
                cout << "\nEl area de la prisma es: " << calcularAreaPrisma(largo, ancho, altura) << endl; //desplegar resultados
            }
            break; //romper ciclo
        }
    }

    return 0;
}
