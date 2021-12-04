#include "Usuario.hpp"
#include <iostream>

/**
 * @brief Setter de nombre
 * 
 * @param nombre del usuario
 */
void Usuario::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Construct a new Usuario:: Usuario object
 * Por defecto el nombre está como "Sin nombre"
 * 
 */
Usuario::Usuario(){
    setNombre("Sin nombre");
}

/**
 * @brief Construct a new Usuario:: Usuario object
 * 
 * @param nombre del usuario
 */
Usuario::Usuario(std::string nombre){
    setNombre(nombre);
}

/**
 * @brief Destroy the Usuario:: Usuario object
 * 
 */
Usuario::~Usuario(){}

std::string Usuario::getNombre(){
    return nombre;
}

/**
 * @brief Imprime nombre del usuario con bienvenida
 * 
 */
void Usuario::imprimeUsuario(){
    std::cout << "+ Hola " << nombre << ", bienvenido! +";
}