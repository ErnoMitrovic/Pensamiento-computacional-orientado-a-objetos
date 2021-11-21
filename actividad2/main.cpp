#include "main_funs.hpp"
#include <iostream>

int menu(){
    int opcion;
    do{
        std::cout << (char) 168 << "Qu" << (char) 130 << " ejercicio quieres ver? (del 1 al 8): ";
        std::cin >> opcion;
        if (opcion < 1 || opcion > 8){
            std::cout << "Input inv\u00A0lido\n";
        }
    } while(opcion < 1 || opcion > 8);
    return opcion;
}

int main(){
    switch(menu()){
        case 1: 
            operaNumeros();
            break;
        case 2:
            numeroImpar();
            break;
        case 3:
            sumaPares();
            break;
        case 4:
            mediaAritmetica();
            break;
        case 5: 
            numeroMagico();
            break;
        case 6: 
            conversionCelsiusFarenheit();
            break;
        case 7: 
            // No lo debe de introducir el usuario
            serieAritmetica(1., 3., 25);
            break;
        case 8:
            mediasGeometricaArmonica();
            break;
    }
}