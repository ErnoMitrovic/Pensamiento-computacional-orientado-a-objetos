#include "Categoria.hpp"
#include <iostream>

/**
 * @brief Construct a new Categoria:: Categoria object
 * 
 */
Categoria::Categoria(){}

/**
 * @brief Construct a new Categoria:: Categoria object
 * 
 * @param n nombre
 * @param i id
 * @param c color
 */
Categoria::Categoria(std::string n, int i, std::string c) : nombre(n), id(i), color(c) {}

/**
 * @brief Getter del nombre
 * 
 * @return std::string nombre de categoria
 */
std::string Categoria::getNombre(){
    return nombre;
}

/**
 * @brief Getter del id
 * 
 * @return int id de categoria
 */
int Categoria::getId(){
    return id;
}

/**
 * @brief Getter de color 
 * 
 * @return std::string color de categoria
 */
std::string Categoria::getColor(){
    return color;
}

/**
 * @brief Setter del nombre
 * 
 * @param nombre nuevo
 */
void Categoria::setNombre(std::string nombre){
    this->nombre = nombre;
}

/**
 * @brief Setter del id
 * 
 * @param id nueva
 */
void Categoria::setId(int id){
    this -> id = id;
}

/**
 * @brief Setter del color
 * 
 * @param color nuevo
 */
void Categoria::setColor(std::string color){
    this -> color = color;
}

/**
 * @brief Imprime los atributos de la categoria
 * 
 */
void Categoria::imprimeCategoria(){
    std::cout << "Nombre: " << nombre << std::endl 
    << "Id: " << id << std::endl 
    << "Color: " << color << std::endl;
}