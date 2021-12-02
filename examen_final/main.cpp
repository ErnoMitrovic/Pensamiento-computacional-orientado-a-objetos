#include <iostream>
#include "camion.hpp"

/**
 * @brief Ejecucion completa del programa
 * 
 */
void ejecucion(){
    std::string destino, nombre, apellidoPaterno, apellidoMaterno;
    std::cout << "------ Bienvenido al camion ------\n"
    << "+ Ingresa el destino: " ;
    std::cin >> destino;
    Camion camion(destino);
    int eleccion, ganancia, asiento;
    do{
        std::cout << "------ Que hacer? ------\n"
        << "1) Cerrar camion\n" 
        << "2) Agregar pasajero\n"
        << "3) Imprimir datos del camion\n";
        std::cin >> eleccion;
        bool condition;
        switch(eleccion){
            // Para cerrar el camion
            case 1: 
                camion.cerrar();
                break;
            case 2: 
                std::cout << "+ Ingresa el nombre: ";
                std::cin >> nombre;
                std::cout << "+ Ingresa el apellido paterno: ";
                std::cin >> apellidoPaterno;
                std::cout << "+ Ingresa el apellido materno: ";
                std::cin >> apellidoMaterno;
                do{
                    std::cout << "+ Ingresa el asiento (0-50): ";
                    std::cin >> asiento;
                    condition = camion.agregarPasajero(Pasajero(nombre, apellidoPaterno, apellidoMaterno), asiento);
                } while(!condition); // en caso de que esté ocupado el camión, revisar el metodo agregarPasajero
                break;
            case 3:
                camion.imprimirDatos();
                break;
            default:
                std::cout << "+ Input invalido! Es entre 1 y 3\n";
                break;
        }
    } while(eleccion == 2 || eleccion == 3);
}

int main(){
    ejecucion();
    return 0;
}