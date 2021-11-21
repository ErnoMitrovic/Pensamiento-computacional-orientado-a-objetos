#include "Fraccion.hpp"
#include <iostream>

/**
 * @brief Construct a new Fraccion:: Fraccion object
 * 
 */
Fraccion::Fraccion(){
    num = 1;
    den = 2;
}

/**
 * @brief Construct a new Fraccion:: Fraccion object
 * 
 * @param n numerador
 * @param d denominador
 */
Fraccion::Fraccion(int n, int d) : num(n), den(d) {}

/**
 * @brief Getter de numerador
 * 
 * @return int 
 */
int Fraccion::getNum(){
    return num;
}

/**
 * @brief Getter del denominador
 * 
 * @return int 
 */
int Fraccion::getDen(){
    return den;
}

/**
 * @brief Setter del numerador
 * 
 * @param num 
 */
void Fraccion::setNum(int num) {
    this -> num = num;
}

/**
 * @brief Setter del denominador
 * 
 * @param den 
 */
void Fraccion::setDen(int den){
    this -> den = den;
}

/**
 * @brief Calcular valor decimal de la fraccion
 * 
 * @return double 
 */
double Fraccion::calcValorReal(){
    return (double) num / (double) den;
}

/**
 * @brief Calculo del mayor comun divisor con el algoritmo euclidiano optimizado
 * 
 * @param den1 
 * @param den2 
 * @return int 
 */
int Fraccion::gcd(int den1, int den2){
    while (den2 != 0){
        int temporal = den2;
        den2 = den1 % den2;
        den1 = temporal;
    }
    return den1;
}

/**
 * @brief El calculo del minimo conum multiplo de 2 numeros
 * 
 * @param den1 
 * @param den2 
 * @return int 
 */
int Fraccion::mcm(int den1, int den2){
    return den1 * den2 / gcd(den1, den2);
}

/**
 * @brief Suma de fracciones con minimo comun denominador
 * 
 * @param f1 
 * @param f2 
 * @return Fraccion 
 */
Fraccion Fraccion::sumaFracciones(const Fraccion &f1, const Fraccion &f2){
    int commonDen = mcm(f1.getDen(), f2.getDen());
    int suma = f1.getNum() * f1.getNum() / commonDen + f2.getNum() *f2.getNum() / commonDen;
    return Fraccion(suma, commonDen);
}

void Fraccion::imprimeFraccion(){
    std::cout << "Fraccion: " << this ->num << '/' << this ->den << std::endl
    << "Valor decimal: " << calcValorReal() << std::endl;
}