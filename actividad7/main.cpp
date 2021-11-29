#include "Fraccion.hpp"
#include <iostream>
#include <vector>

/**
 * @brief Imprime fracciones 
 * 
 * @param fracciones para imprimir
 */
void imprimirFracciones(std::vector<Fraccion> fracciones){
    for (int i = 0; i < fracciones.size(); i++)
    {
        std::cout << "Fraccion " << i+1 << std::endl;
        fracciones.at(i).imprimeFraccion();
    }
}

/**
 * @brief Construye un vector de fracciones insertadas por el usuario
 * 
 * @param n tamaño del vector
 * @return std::vector<Fraccion> 
 */
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

/**
 * @brief Test case 1
 * @details 
 * 1. Ingresa cuantas fracciones se van a ingresar
 * 2. Construye un vector de fracciones
 * 3. Aplicar 3 sumas con los indices que diga el usuario (0..n-1)
 * 4. Imprimir las sumas
 * 
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

/**
 * @brief Test case 2
 * @details 
 * 1. Ingresa denominador 0
 * 2. Revisar el comportamiento del programa
 * 3. Ingresar un denominador diferente de cero
 * 4. Imprimir las fracciones
 * 
 */
void casoDos(){
    Fraccion fracError (2,0), fracValid (4, 5);
    fracError.imprimeFraccion();
    fracValid.imprimeFraccion();
}

/**
 * @brief Test case 3
 * @details 
 * 1. Ingresa un numerador negativo 
 * 2. Revisar si el programa realiza una resta de fracciones
 * 3. Imprimir el resultado
 */
void casoTres(){
    Fraccion fracNeg (-3,4), fracPos (2,5);
    Fraccion suma = Fraccion::sumaFracciones(fracNeg, fracPos);
    suma.imprimeFraccion();
}

/**
 * @brief Menu de ejecucion de los test cases
 * 
 */
void ejecucion(){
    int eleccion;
    std::cout << "Ingresa el test case (1 .. 3): ";
    do {
        std::cin >> eleccion;
        switch(eleccion){
            case 1:
                casoUno();
                break;
            case 2:
                casoDos();
                break;
            case 3:
                casoTres();
                break;
            default:
                std::cout << "Input invalido\n";
                break;
        }
    } while (eleccion < 1 || eleccion > 3);
}

int main(){
    ejecucion();
}