#include "Triangle.hpp"
#include <iostream>

/*
Caso 1:
- Crear triangulo con constructor por defecto
- Imprimir valores del triangulo

Caso 2: 
- Crear triangulo con valores introducidos por el usuario
- Imprimir valores del usuario

Caso 3:
- Crear vertices colineales
- Imprimir el resultado

Caso 4:
- Crear 2 vertices coincidentes
- Imprimir el resultado

*/

/**
 * @brief Inicializa e imprime un triangulo por defecto
 * 
 */
void casoUno(){
    Triangle def;
    def.printTriangle();
}

/**
 * @brief Inicializa e imprime un triangulo del usuario
 * 
 */
void casoDos(){
    Point puntos [3];
    for(int i = 0; i < 3; i++){
        float x, y;
        std::cout << "Vertice " << i+1 << " x: ";
        std::cin >> x;
        std::cout << "Vertice " << i+1 << " y: ";
        std::cin >> y;
        puntos[i] = Point(x, y);
    }
    Triangle user(puntos[0], puntos[1], puntos[2]);
    user.printTriangle();
}

/**
 * @brief Test case para un puntos colineales
 * 
 */
void casoTres(){
    Triangle tColineal(Point(2,5), Point(2, 1), Point(2, 10));
    tColineal.printTriangle();
}

/**
 * @brief Test case para puntos coincidentes
 * 
 */
void casoCuatro(){
    Triangle tCoincidente(Point(2, 5), Point(2, 5), Point(8, 4));
    tCoincidente.printTriangle();
}

void ejecucion(){
    int opcion;
    std::cout << "Ingresa el test case a analizar (1-4): ";
    do {
        std::cin >> opcion;
        switch (opcion){
            case 1:
                casoUno();
                break;
            case 2: 
                casoDos();
                break;
            case 3:
                casoTres();
                break;
            case 4:
                casoCuatro();
                break;
            default:
                std::cout << "Invalido\n";
                break;
        }
    } while(opcion < 1 || opcion > 4);
}
int main(){
    ejecucion();
}