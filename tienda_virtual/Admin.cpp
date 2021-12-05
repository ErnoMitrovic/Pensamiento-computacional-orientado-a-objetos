#include "Admin.hpp"
#include <iostream>
#include <cctype>
#include <algorithm>

void Admin::setContrasenia(std::string contrasenia){
    this -> contrasenia = contrasenia;
}

/**
 * @brief Construct a new Admin:: Admin object
 * Las credenciales de este admin son:
 * Nombre: "ADMIN"
 * Contrasenia: "DEFECTO"
 */
Admin::Admin(){
    setNombre("ADMIN");
    setContrasenia("DEFECTO");
}

/**
 * @brief Construct a new Admin:: Admin object
 * 
 * @param nombre del usuario
 * @param contrasenia del administrador
 */
Admin::Admin(std::string nombre, std::string contrasenia) : Usuario(nombre){
    setContrasenia(contrasenia);
}

/**
 * @brief Destroy the Admin:: Admin object
 * 
 */
Admin::~Admin(){}

/**
 * @brief Imprime datos del admin y da opcion de ver contrasenia
 * 
 */
void Admin::imprimeAdmin(){
    std::string verCon;
    std::cout << "--- Bienvenido " << getNombre()<< " ---\n"
    << "Ver contrasenia?: (SI/NO) ";
    std::cin >> verCon;
    std::for_each(verCon.begin(), verCon.end(), [](char & c) {
        c = ::toupper(c);
    });
    if (verCon == "SI"){
        std::cout << "+ Contrasenia: " << contrasenia <<std::endl;
    }
}

bool Admin::validarCredenciales(std::string nombre, std::string contrasenia){
    return nombre == getNombre() && this -> contrasenia == contrasenia;
}