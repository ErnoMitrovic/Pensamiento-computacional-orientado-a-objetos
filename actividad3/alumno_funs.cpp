#include "alumno.hpp"
#include <string>
#include <iostream>

/**
 * @brief Constructor defecto para alumno::alumno objeto
 * 
 */
alumno::alumno(){}

/**
 * @brief Constructor para alumno::alumno objeto
 * 
 * @param m matricula del alumno
 * @param n nombre del alumno
 * @param e edad del alumno
 * @param s semestre del alumno
 */
alumno::alumno(std::string m, std::string n, int e, std::string s) : 
matricula(m), nombre(n), edad(e), semestre(s) {}

/**
 * @brief Destroy the alumno::alumno object
 * 
 */
alumno::~alumno (){
    std::cout << this -> nombre << " destruido.\n";
}

/**
 * @brief Getter para la matricula
 * 
 * @return std::string 
 */
std::string alumno::getMatricula(){
    return matricula;
}

/**
 * @brief Getter para el nombre
 * 
 * @return std::string 
 */
std::string alumno::getNombre(){
    return nombre;
}

/**
 * @brief Getter para la edad
 * 
 * @return int 
 */
int alumno::getEdad(){
    return edad;
}
/**
 * @brief Getter para el semestre
 * 
 * @return std::string 
 */
std::string alumno::getSemestre(){
    return semestre;
}

/**
 * @brief Setter del nombre 
 * 
 * @param nombre del alumno
 */
void alumno::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Setter de la matricula
 * 
 * @param matricula del alumno
 */
void alumno::setMatricula(std::string matricula){
    this -> matricula = matricula;
}

/**
 * @brief Setter de la edad
 * 
 * @param edad del alumno
 */
void alumno::setEdad(int edad){
    this -> edad = edad;
}

/**
 * @brief Setter para el semestre
 * 
 * @param semestre del alumno
 */
void alumno::setSemestre(std::string semestre){
    this -> semestre = semestre;
}

/**
 * @brief Imprime los datos del alumno
 * 
 */
void alumno::imprimeAlumno(){
    std::cout << "Nombre: " << nombre << std::endl
    << "Matricula: " << matricula << std::endl 
    << "Edad: " << edad << std::endl
    << "Semestre: " << semestre << std::endl;
}

/**
 * @brief incrementa la edad del alumno por 1 anio
 * 
 */
void alumno::cumpleanios(){
    std::cout << nombre << " cumple anios!" << std::endl;
    edad ++;
}