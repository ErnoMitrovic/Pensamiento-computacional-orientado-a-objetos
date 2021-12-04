#include "Cliente.hpp"

/**
 * @brief Construct a new Cliente:: Cliente object
 * 
 */
Cliente::Cliente() : Usuario(){
    tarjeta = Tarjeta(getNombre(), 0);
}

/**
 * @brief Construct a new Cliente:: Cliente object
 * 
 * @param nombre del cliente
 * @param cvc de la tarjeta
 */
Cliente::Cliente(std::string nombre, int cvc) : Usuario(nombre){
    tarjeta = Tarjeta(getNombre(), cvc);
}

/**
 * @brief Destroy the Cliente:: Cliente object
 * 
 */
Cliente::~Cliente(){}

/**
 * @brief Checar si las credenciales coinciden
 * 
 * @param duenio de tarjeta
 * @param cvc de la tarjeta
 * @return true si coinciden
 * @return false si no coinciden
 */
bool Cliente::validarPago(std::string duenio, int cvc){
    return tarjeta.getDuenio() == duenio && tarjeta.getCvc() == cvc;
}