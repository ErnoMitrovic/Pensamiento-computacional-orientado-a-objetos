#include "pasajero.hpp"
#include <iostream>

/**
 * @brief Setter de nombre
 * 
 * @param nombre 
 */
void Pasajero::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Setter de apellido paterno
 * 
 * @param apellidoPaterno 
 */
void Pasajero::setApellidoPaterno(std::string apellidoPaterno){
    this -> apellidoPaterno = apellidoPaterno;
}

/**
 * @brief Setter del apellido materno
 * 
 * @param apellidoMaterno 
 */
void Pasajero::setApellidoMaterno(std::string apellidoMaterno){
    this -> apellidoMaterno = apellidoMaterno;
}

/**
 * @brief Setter de ocupado
 * 
 * @param ocupado 
 */
void Pasajero::setOcupado(bool ocupado){
    this -> ocupado = ocupado;
}

/**
 * @brief Construct a new Pasajero:: Pasajero object
 * 
 */
Pasajero::Pasajero(): nombre("Sin nombre"), apellidoPaterno("Sin apellido paterno"), apellidoMaterno("Sin apellido materno") {
    setOcupado(false);
}

/**
 * @brief Construct a new Pasajero:: Pasajero object
 * 
 * @param nombre 
 * @param apellidoPaterno 
 * @param apellidoMaterno 
 */
Pasajero::Pasajero(std::string nombre, std::string apellidoPaterno, std::string apellidoMaterno){
    setNombre(nombre);
    setApellidoPaterno(apellidoPaterno);
    setApellidoMaterno(apellidoMaterno);
    setOcupado(true);
}

/**
 * @brief Destroy the Pasajero:: Pasajero object
 * 
 */
Pasajero::~Pasajero(){}

/**
 * @brief Getter de nombre
 * 
 * @return std::string 
 */
std::string Pasajero::getNombre(){
    return nombre;
}

/**
 * @brief Getter de apellido paterno
 * 
 * @return std::string 
 */
std::string Pasajero::getApellidoPaterno(){
    return apellidoPaterno;
}

/**
 * @brief Getter de apellid materno
 * 
 * @return std::string 
 */
std::string Pasajero::getApellidoMaterno(){
    return apellidoMaterno;
}

/**
 * @brief Getter de ocupado
 * 
 * @return true si esta ocupado
 * @return false si no esta ocupado
 */
bool Pasajero::getOcupado(){
    return ocupado;
}

void Pasajero::imprimirPasajero(){
    std::cout << "+ Nombre: " << nombre << std::endl
    << "+ Apellido paterno: " << apellidoPaterno << std::endl
    << "+ Apellido materno: " << apellidoMaterno << std::endl;
}