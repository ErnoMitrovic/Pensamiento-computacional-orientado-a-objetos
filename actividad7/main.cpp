#include "Fraccion.hpp"
#include <iostream>
#include <array>

int main(){
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
    Fraccion suma1 = Fraccion(), suma2 = Fraccion(), suma3 = Fraccion();
    suma1 = suma1.sumaFracciones(fracciones[1], fracciones[4]);
    suma2 = suma2.sumaFracciones(fracciones[0], fracciones[3]);
    suma3 = suma3.sumaFracciones(fracciones[6], fracciones[2]);

    suma1.imprimeFraccion();
    suma2.imprimeFraccion();
    suma3.imprimeFraccion();
}