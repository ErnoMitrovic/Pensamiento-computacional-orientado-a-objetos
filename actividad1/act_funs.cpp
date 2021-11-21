#include <iostream>
#include "act_funs.hpp"
#include <math.h>
#include <string>

void ejercicio1(){
    std::cout << "Hola Mundo C++\n";
}

void ejercicio2(){
    int n1, n2, suma;
    std::cout << "Ingresa numero 1: ";
    std::cin >> n1;
    std::cout << "Ingresa numero 2: ";
    std::cin >> n2;
    suma = n1 + n2;
    std::cout << suma << '\n';
}

void ejercicio3(){
    float base, altura, area;
    std::cout << "Ingresa la altura: ";
    std::cin >> altura;
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    area = base * altura;
    std::cout << altura << '\n';
}

void ejercicio4(){
    std::string mi_nombre;
    std::cout << "Introduce tu nombre: ";
    std::getline(std::cin, mi_nombre);
    std::cout << "Hola " << mi_nombre << " bienvenido al mundo de C++!\n";
}

void ejercicio5(){
    float n1, n2;
    std::cout << "Ingresa n1 y n2: ";
    std::cin >> n1 >> n2;
    std::cout << "El resultado de sumar " << n1 << " y " << n2 << " es: " << n1 + n2 << '\n';
    std::cout << "El resultado de restar " << n1 << " y " << n2 << " es: " << n1 - n2 << '\n';
    std::cout << "El resultado de multiplicar " << n1 << " y " << n2 << " es: " << n1 * n2 << '\n';
    std::cout << "El resultado de dividir " << n1 << " y " << n2 << " es: " << n1 / n2 << '\n';
    std::cout << "El residuo del cociente de " << n1 << " y " << n2 << " es: " << (int)n1 % (int)n2 << '\n';
}

void ejercicio6(){
    float precio, porcentaje;
    std::cout << "Ingresa el precio del producto: ";
    std::cin >> precio;
    std::cout << "Ingresa el porcentaje de impuesto: ";
    std::cin >> porcentaje;
    porcentaje /= 100;
    precio *= porcentaje + 1;
    std::cout << "EL PRECIO DEL PRODUCTO CON EL "<< porcentaje 
    <<" DE IVA ES: " << precio << '\n';
}

void ejercicio7(){
    double n1, n2, temporal;
    std::cout << "Ingresa n1 y n2: "; 
    std::cin >> n1 >> n2;
    temporal = n1;
    n1 = n2;
    n2 = temporal;
    std::cout << "n1 y n2 respectivamente: " << n1 << ' ' << n2 << '\n'; 
}

void ejercicio8(){
    std::cout.precision(2);
    float promedio;
    std::string nombre;
    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, nombre);
    for (int i = 0; i < 3; i++){
        float temp;
        std::cout << "Ingresa la calificacion " << i + 1 << ": ";
        std::cin >> temp;
        promedio += temp;
    }
    promedio /= 3;
    std::cout << "El promedio de " << nombre << " es: " << promedio << '\n';
}

void ejercicio9(){
    float lado_a, lado_b;
    do{
        std::cout << "Ingresa lado A y lado B, debe ser mayor a cero: ";
        std::cin >> lado_a >> lado_b;
    } while (lado_a <= 0 or lado_b <= 0);
    float hipo = std::sqrt(std::pow(lado_a, 2) + std::pow(lado_a, 2));
    std::cout << "La hipotenusa del triangulo con lados " <<  lado_a << " y " << lado_b;
    std::cout << " es: " << hipo << '\n';
}

void ejercicio10(){
    double x1, y1, x2, y2;
    double lado1, lado2, dist;
    std::cout << "Ingresa los valores x1, y1, x2, y2:\n";
    std::cin >> x1 >> y1 >> x2 >> y2;
    lado1 = x2 - x1;
    lado2 = y2 - y1;
    dist = std::sqrt(std::pow(lado1, 2) + std::pow(lado2, 2));
    std::cout << "Los puntos: (" << x1 << ", " << y1 << ") y (" << x2 << ", "  << y2 << ')';
    std::cout << "\nCon distancia de: " << dist << " unidades.\n";
}