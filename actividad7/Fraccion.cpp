#include "Fraccion.hpp"
#include <iostream>

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
 * @brief Construct a new Fraccion:: Fraccion object
 * 
 */
Fraccion::Fraccion(){
    setNum(1);
    setDen(2);
}

/**
 * @brief Construct a new Fraccion:: Fraccion object
 * 
 * @param n numerador
 * @param d denominador
 */
Fraccion::Fraccion(int num, int den) : Fraccion() {
    if (den == 0){
        std::cerr << "Denominador cero, usar constructor por defecto\n";
    } else{
        this -> num = num;
        this -> den = den;
    }
}

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
 * @brief Calcular valor decimal de la fraccion
 * 
 * @return double 
 */
double Fraccion::calcValorReal(){
    return (double) num / den;
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
 * @brief Suma de fracciones con minimo comun denominador
 * 
 * @param f1 
 * @param f2 
 * @return Fraccion 
 */
Fraccion Fraccion::sumaFracciones(Fraccion &f1, Fraccion &f2){
    int numerador = f1.getNum()*f2.getDen() + f1.getDen()*f2.getNum();
    int denominador = f1.getDen()*f2.getDen();
    // Maximo comun divisor
    int mcd = gcd(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
    return Fraccion(numerador, denominador);
}

/**
 * @brief Imprime la fraccion en forma @code {.cpp}
 * f = num/den;
 * @endcode
 * junto con su valor decimal
 * 
 */
void Fraccion::imprimeFraccion(){
    std::cout << "Fraccion: " << this ->num << '/' << this ->den << std::endl
    << "Valor decimal: " << calcValorReal() << std::endl;
}