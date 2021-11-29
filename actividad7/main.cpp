#include "Fraccion.hpp"
#include <iostream>
#include <vector>

void imprimirFracciones(std::vector<Fraccion> fracciones){
    for (int i = 0; i < fracciones.size(); i++)
    {
        std::cout << "Fraccion " << i+1 << std::endl;
        fracciones.at(i).imprimeFraccion();
    }
}

std::vector<Fraccion> insertaFracciones(const int n){
    std::vector <Fraccion> fracciones;
    for (int i = 1; i <= n; i++){
        int num, den;
        std::cout<< "Fraccion " << i << " Numerador: ";
        std::cin >> num;
        std::cout << "Denominador (diferente de 0): ";
        do {
            std::cin >> den;
        } while(den == 0);
        fracciones.push_back(Fraccion(num, den));
    }
    return fracciones;
}

/*
    - Pedir 5 o más fracciones
    - Pedir 3 sumas con sus índices
    - Imprimir las sumas
*/
void casoUno(){
    int n;
    std::vector <Fraccion> fracciones;
    std::cout << "Cuantas fracciones vas a ingresar? (5 o mas): ";
    do{
        std::cin >> n;
    } while(n < 5);
    fracciones = insertaFracciones(n);
    imprimirFracciones(fracciones);
    Fraccion sumas [3];
    std::cout << "Que fracciones vas a sumar?\n";
    for (int i = 0; i < 3; i++)
    {
        int frac1, frac2;
        std::cout << "Suma " << i+1 << " fraccion (inserta indice) " ;
        std::cin >> frac1;
        std::cout << " + fraccion (inserta indice) ";
        std::cin >> frac2;
        sumas[i] = Fraccion::sumaFracciones(fracciones.at(frac1), fracciones.at(frac2)); 
    }
    for (int i = 0; i < 3; i++)
    {
        sumas[i].imprimeFraccion();
    }
    
}

void execution(){
    std::vector <Fraccion> fracciones;
    int n;
    std::cout << "Cuantas funciones vas a querer?: ";
    std::cin >> n;
    std::cout << "Ingresa las fracciones\n";
    Fraccion suma1 = Fraccion::sumaFracciones(fracciones[1], fracciones[4]);
    Fraccion suma2 = Fraccion::sumaFracciones(fracciones[0], fracciones[3]);
    Fraccion suma3 = Fraccion::sumaFracciones(fracciones[6], fracciones[2]);

    suma1.imprimeFraccion();
    suma2.imprimeFraccion();
    suma3.imprimeFraccion();
}


int main(){
    Fraccion fracciones[5];
    execution();
}