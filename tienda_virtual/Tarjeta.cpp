#include "Tarjeta.hpp"
#include <iostream>

/**
 * @brief Setter de duenio
 * 
 * @param duenio de la tarjeta
 */
void Tarjeta::setDuenio(std::string duenio){
    this -> duenio = duenio;
}

/**
 * @brief Setter de cvc
 * 
 * @param cvc de tarjeta
 */
void Tarjeta::setCvc(int cvc){
    this -> cvc = cvc;
}

/**
 * @brief Construct a new Tarjeta:: Tarjeta object
 * 
 */
Tarjeta::Tarjeta(){
    setDuenio("Sin duenio");
    setCvc(0);
}

/**
 * @brief Construct a new Tarjeta:: Tarjeta object
 * 
 * @param duenio de la tarjeta
 * @param cvc de la tarjeta
 */
Tarjeta::Tarjeta(std::string duenio, int cvc){
    setDuenio(duenio);
    setCvc(cvc);
}

/**
 * @brief Destroy the Tarjeta:: Tarjeta object
 * 
 */
Tarjeta::~Tarjeta(){}

/**
 * @brief Getter de duenio
 * 
 * @return std::string duenio de la tarjeta
 */
std::string Tarjeta::getDuenio(){
    return duenio;
}

/**
 * @brief Getter de cvc
 * 
 * @return int 
 */
int Tarjeta::getCvc(){
    return cvc;
}

/**
 * @brief Imprime el duenio de la tarjeta y su cvc
 * 
 */
void Tarjeta::imprimeTarjeta(){
    std::cout << "--- La tarjeta es de: " << duenio << std::endl
    << "--- CVC: " << cvc << std::endl;
}