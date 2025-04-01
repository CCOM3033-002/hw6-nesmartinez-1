/*
HW6: Figuras 3D
Néstor A. Martínez Rivera
802-22-3069
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


const double pi = 3.14159;


double calcularVolumenCilindro(double radio, double altura) {
    return pi * pow(radio, 2) * altura;
}


double calcularVolumenEsfera(double radio) {
    return (4.0 / 3.0) * pi * pow(radio, 3);
}


double calcularVolumenPrisma(double largo, double ancho, double altura) {
    return largo * ancho * altura;
}


double calcularAreaCilindro(double radio, double altura) {
    return 2 * pi * radio * (radio + altura);
}

double calcularAreaEsfera(double radio) {
    return 4 * pi * pow(radio, 2);
}

double calcularAreaPrisma(double largo, double ancho, double altura) {
    return 2 * (largo * ancho + largo * altura + ancho * altura);
}


int main() {
    char figura, opcion;

    cout << "Este programa calcula el volumen y el área de la supercicie de tres figuras.\n\n";

    cout << "Escoga una figura:\na. Cilindro\nb. Esfera\nc. Prisma rectangular\nSelección: ";
    cin >> figura;

    while (figura != 'a' && figura != 'b' && figura != 'c') {
        cout << "Opción invalida. Intente nuevamente: ";
        cin >> figura;
    }

    cout << "\nEscoga entre las siguientes opciones:\na. Volumen\nb. Area de la superficie\nSelección:";
    cin >> opcion;

    while (opcion != 'a' && opcion != 'b') {
        cout << "Opción invalida. Intente nuevamente: ";
        cin >> opcion;
    }

    cout << fixed << setprecision(2);

    switch (figura) {
        case 'a': {
            double radio, altura;
            do {
                cout << "Entre el radio del cilindro: ";
                cin >> radio;
            } while (radio <= 0);
            do {
                cout << "Entre la altura del cilindro: ";
                cin >> (altura);
            } while (altura <= 0);
            if (opcion == 'a') {
                cout << "\nEl volumen del cilindro es: " << calcularVolumenCilindro(radio, altura) << endl;
            } else {
                cout << "\nEl area del cilindro es: " << calcularAreaCilindro(radio, altura) << endl;
            }
            break;
        }
        case 'b': {
            double radio;
            do {
                cout << "Entre el radio de la esfera: ";
                cin >> radio;
            } while (radio <= 0);
            if (opcion == 'a') {
                cout << "\nEl volumen de la esfera es: " << calcularVolumenEsfera(radio) << endl;
            } else {
                cout << "\nEl area de la esfera es : " << calcularAreaEsfera(radio) << endl;
            }
            break;
        }
        case 'c': {
            double largo, ancho, altura;
            do {
                cout << "Entre la longitud de la prisma: ";
                cin >> largo;
            } while (largo <= 0);
            do {
                cout << "Entre el ancho de la prisma: ";
                cin >> ancho;
            } while (ancho <= 0);
            do {
                cout << "Entre la altura de la prisma: ";
                cin >> altura;
            } while (altura <= 0);
            if (opcion == 'a') {
                cout << "\nEl volumen de la prisma es: " << calcularVolumenPrisma(largo, ancho, altura) << endl;
            } else {
                cout << "\nEl area de la prisma es: " << calcularAreaPrisma(largo, ancho, altura) << endl;
            }
            break;
        }
    }

    return 0;
}
