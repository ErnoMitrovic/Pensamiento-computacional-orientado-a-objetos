#include "Empleado.hpp"
#include <iostream>

/**
 * @brief Construct a new Fecha:: Fecha object
 * 
 */
Fecha::Fecha(){}

/**
 * @brief Construct a new Fecha:: Fecha object
 * 
 * @param d dia 
 * @param m mes
 */
Fecha::Fecha(int d, int m) : dia(d), mes(m) {}

/**
 * @brief Getter del dia
 * 
 * @return int 
 */
int Fecha::getDia(){
    return dia;
}

/**
 * @brief Getter del mes
 * 
 * @return int 
 */
int Fecha::getMes(){
    return mes;
}

/**
 * @brief Setter del dia
 * 
 * @param dia 
 */
void Fecha::setDia(int dia){
    this -> dia = dia;
}

/**
 * @brief Setter del mes
 * 
 * @param mes 
 */
void Fecha::setMes(int mes){
    this -> mes = mes;
}

/**
 * @brief Construct a new Empleado:: Empleado object
 * 
 */
Empleado::Empleado(){}

/**
 * @brief Construct a new Empleado:: Empleado object
 * 
 * @param nombre 
 * @param sueldo 
 * @param cumpleAnios 
 */
Empleado::Empleado(std::string nombre, float sueldo, Fecha cumpleAnios) : 
nombreEmp(nombre), sueldoEmp(sueldo), cumpleAniosEmp(cumpleAnios) {}

/**
 * @brief Getter del nombre del empresario
 * 
 * @return std::string 
 */
std::string Empleado::getNombreEmp(){
    return nombreEmp;
}

/**
 * @brief Getter del sueldo del empresario
 * 
 * @return float 
 */
float Empleado::getSueldoEmp(){
    return sueldoEmp;
}

/**
 * @brief Getter de la fecha de cumpleaños del empresario
 * 
 * @return Fecha 
 */
Fecha Empleado::getCumpleAniosEmp(){
    return cumpleAniosEmp;
}

/**
 * @brief Setter del nombre del empresario
 * 
 * @param nombreEmp 
 */
void Empleado::setNombreEmp(std::string nombreEmp){
    this -> nombreEmp = nombreEmp;
}

/**
 * @brief Setter del sueldo del empleado
 * 
 * @param sueldoEmp 
 */
void Empleado::setSueldoEmp(float sueldoEmp){
    this -> sueldoEmp = sueldoEmp;
}

/**
 * @brief Setter de la fecha de cumpleaños del empresario
 * 
 * @param cumpleAniosEmp 
 */
void Empleado::setCumpleAniosEmp(Fecha cumpleAniosEmp){
    this -> cumpleAniosEmp = cumpleAniosEmp;
}

/**
 * @brief Sube el sueldo del empleado si el incremento esta entre 0 y 10%
 * 
 * @param incremento el porcentaje a incrementar
 */
void Empleado::subeSueldo(float incremento){
    if (incremento < 0 || incremento > 10){
        std::cout << "Porcentaje invalido, no hay incremento salarial\n";
    } else{
        sueldoEmp *= 1 + incremento / 100;
    }
}