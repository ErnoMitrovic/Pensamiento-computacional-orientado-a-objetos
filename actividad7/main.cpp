#include "Fraccion.hpp"
#include <iostream>
#include <array>

void execution(){
    std::array <Fraccion, 7> fracciones;
    std::cout << "Ingresa las 7 fracciones\n";
    for (int i = 0; i < fracciones.size(); i++){
        int num, den;
        std::cout << "Numerador: ";
        std::cin >> num;
        std::cout << "Denominador (diferente de 0): ";
        do {
            std::cin >> den;
        } while(den == 0);
        fracciones[i] = Fraccion(num, den);
    }
    Fraccion suma1 = Fraccion::sumaFracciones(fracciones[1], fracciones[4]);
    Fraccion suma2 = Fraccion::sumaFracciones(fracciones[0], fracciones[3]);
    Fraccion suma3 = Fraccion::sumaFracciones(fracciones[6], fracciones[2]);

    suma1.imprimeFraccion();
    suma2.imprimeFraccion();
    suma3.imprimeFraccion();
}

void debug(){
    Fraccion f1 = Fraccion(1, 2), f2 = Fraccion(8, 13);
    Fraccion suma = Fraccion::sumaFracciones(f1, f2);
    suma.imprimeFraccion();
}

int main(){
    debug();
}