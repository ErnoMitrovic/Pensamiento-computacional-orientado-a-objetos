#include "camion.hpp"
#include <iostream>

/**
 * @brief Setter de destino 
 * 
 * @param destino 
 */
void Camion::setDestino(std::string destino){
    this -> destino = destino;
}

/**
 * @brief Agrega el pasajero y regresa si se agrego con exito
 * 
 * @param pasajero 
 * @param asiento 
 * @return true si se agrego con exito
 * @return false si no se pudo agregar (estaba ocupado)
 */
bool Camion::agregarPasajero(Pasajero pasajero, int asiento){
    if (pasajeros[asiento].getOcupado()){
        std::cout << "--- Asiento ocupado ---\nIngresa otro asiento\n";
        return false;
    } else{
        pasajeros[asiento] = pasajero;
        return true;
    }
}

/**
 * @brief Construct a new Camion:: Camion object
 * 
 */
Camion::Camion(){
    setDestino("Sin destino");
}

/**
 * @brief Construct a new Camion:: Camion object
 * 
 * @param destino 
 */
Camion::Camion(std::string destino){
    setDestino(destino);
}

/**
 * @brief Destroy the Camion:: Camion object
 * 
 */
Camion::~Camion(){}

/**
 * @brief Getter de pasajero en un indice
 * 
 * @param indice 
 * @return Pasajero 
 */
Pasajero Camion::getPasajeroAt(int indice){
    return pasajeros[indice];
}

/**
 * @brief Getter del destino
 * 
 * @return std::string 
 */
std::string Camion::getDestino(){
    return destino;
}

/**
 * @brief Ganancia del camion
 * 
 * @return int ganancia 
 */
int Camion::ganancia(){
    int precioBoleto = 600, boletosVendidos = 0;
    for (int i = 0; i < 51; i++){
        if(pasajeros[i].getOcupado()){
            boletosVendidos ++;
        }
    }
    std::cout << "+ Se vendieron " << boletosVendidos << " boletos\n";
    return boletosVendidos * precioBoleto;
}

/**
 * @brief Imprime los datos del camion de los pasajeros que tiene
 * 
 */
void Camion::imprimirDatos(){
    std::cout << "+ Para el camion que va a " << destino << std::endl;
    for(int i = 0; i < 51; i++){
        if(pasajeros[i].getOcupado()){
            std::cout << "--- En el asiento "<< i <<" esta el pasajero ---\n";
            pasajeros[i].imprimirPasajero();
        }
    }
}

void Camion::cerrar(){
    int gain = ganancia();
    std::cout << "+ La ganancia del camion es de: $" << gain << std::endl;
}