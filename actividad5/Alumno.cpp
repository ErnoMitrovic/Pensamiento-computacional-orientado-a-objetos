#include "Alumno.hpp"
#include <iostream>

/**
 * @brief Constructor defecto para Alumno::Alumno objeto
 * 
 */
Alumno::Alumno(){}

/**
 * @brief Constructor para Alumno::Alumno objeto
 * 
 * @param m matricula del Alumno
 * @param n nombre del Alumno
 * @param e edad del Alumno
 * @param s semestre del Alumno
 */
Alumno::Alumno(std::string m, std::string n, int e, std::string c) : 
matricula(m), nombre(n), edad(e), carrera(c) {}

/**
 * @brief Destroy the Alumno::Alumno object
 * 
 */
Alumno::~Alumno (){
    std::cout << this -> nombre << " destruido.\n";
}

/**
 * @brief Getter para la matricula
 * 
 * @return std::string matricula
 */
std::string Alumno::getMatricula(){
    return matricula;
}

/**
 * @brief Getter para el nombre
 * 
 * @return std::string nombre
 */
std::string Alumno::getNombre(){
    return nombre;
}

/**
 * @brief Getter para la edad
 * 
 * @return int 
 */
int Alumno::getEdad(){
    return edad;
}
/**
 * @brief Getter para la carrera
 * 
 * @return std::string 
 */
std::string Alumno::getCarrera(){
    return carrera;
}

/**
 * @brief Setter del nombre 
 * 
 * @param nombre del Alumno
 */
void Alumno::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Setter de la matricula
 * 
 * @param matricula del Alumno
 */
void Alumno::setMatricula(std::string matricula){
    this -> matricula = matricula;
}

/**
 * @brief Setter de la edad
 * 
 * @param edad del Alumno
 */
void Alumno::setEdad(int edad){
    this -> edad = edad;
}

/**
 * @brief Setter para el semestre
 * 
 * @param semestre del Alumno
 */
void Alumno::setCarrera(std::string carrera){
    this -> carrera = carrera;
}

/**
 * @brief Imprime los datos del Alumno
 * 
 */
void Alumno::imprimeAlumno(){
    std::cout << "Nombre: " << nombre << std::endl
    << "Matricula: " << matricula << std::endl 
    << "Edad: " << edad << std::endl
    << "Carrera: " << carrera << std::endl;
}

/**
 * @brief incrementa la edad del Alumno por 1 anio
 * 
 */
void Alumno::cumpleanios(){
    std::cout << nombre << " cumple anios!" << std::endl;
    edad ++;
}