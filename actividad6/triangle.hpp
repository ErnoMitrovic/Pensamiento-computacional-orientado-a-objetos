#include "Point.hpp"
#include <cmath>
#include <iostream>
class Triangle
{
private:
    Point vertex1, vertex2, vertex3; // Podria ser un array
    bool colineal(Point , Point, Point);
    bool coincidente(Point, Point, Point);
public:
    Triangle();
    Triangle(Point vertex1, Point vertex2, Point vertex3);
    /**
     * @brief Destroy the Triangle object
     * 
     */
    ~Triangle(){}
    double perimeter();
    double area();
    void printTriangle();
};

/**
 * @brief Construct a new Triangle::Triangle object
 * 
 */
Triangle::Triangle(){
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}

/**
 * @brief Revisa si los puntos son colineales
 * 
 * @param vertex1 
 * @param vertex2 
 * @param vertex3 
 * @return true si todos los puntos son colineales
 * @return false si no hay puntos colineales o maximo 2
 */
bool Triangle::colineal(Point vertex1, Point vertex2, Point vertex3){
    if(vertex1.getX() == vertex2.getX() && vertex2.getX() == vertex3.getX()){
        return true;
    } else if(vertex1.getY() == vertex2.getY() && vertex2.getY() == vertex3.getY()){
        return true;
    }
    return false;
}

/**
 * @brief Revisa si al menos 2 de los puntos son coincidentes
 * 
 * @param vertex1 
 * @param vertex2 
 * @param vertex3 
 * @return true si 2 de los puntos son coincidentes
 * @return false si ningun punto es coincidente
 */
bool Triangle::coincidente(Point vertex1, Point vertex2, Point vertex3){
    if (vertex1.getX() == vertex2.getX() && vertex1.getY() == vertex2.getY()){
        return true;
    } else if(vertex2.getX() == vertex3.getX() && vertex2.getY() == vertex3.getY()){
        return true;
    } else if (vertex1.getX() == vertex3.getX() && vertex1.getY() == vertex3.getY()){
        return true;
    }
    return false;
}

/**
 * @brief Construye un triangulo si los puntos no son colineales o al menos dos no son coincidentes
 * 
 * @param vertex1 
 * @param vertex2 
 * @param vertex3 
 */
Triangle::Triangle(Point vertex1, Point vertex2, Point vertex3) : Triangle::Triangle(){
    if (!colineal(vertex1, vertex2, vertex3) && !coincidente(vertex1, vertex2, vertex3)){
        this-> vertex1 = vertex1;
        this-> vertex2 = vertex2;
        this-> vertex3 = vertex3;
    } else{
        std::cout << "Triangulo invalido, declarando con constructor por defecto...\n";
    }
}

/**
 * @brief Calcula el perimetro del triangulo
 * 
 * @return double 
 */
double Triangle::perimeter(){
    double a, b, c;
    a = vertex1.distancia(vertex2);
    b = vertex2.distancia(vertex3);
    c = vertex1.distancia(vertex3);
    return a + b + c;
}

/**
 * @brief Calcula el area del triangulo
 * 
 * @return double 
 */
double Triangle::area(){
    double a, b, c, s;
    a = vertex1.distancia(vertex2);
    b = vertex2.distancia(vertex3);
    c = vertex1.distancia(vertex3);
    s = (a + b + c) / 2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));
}

/**
 * @brief Imprime los valores del triangulo
 * 
 */
void Triangle::printTriangle(){
    std::cout << "Triangle vertices:\n" 
    << "1.- (" << vertex1.getX() << ", " << vertex1.getY() << ")\n"
    << "2.- (" << vertex2.getX() << ", " << vertex2.getY() << ")\n"
    << "3.- (" << vertex3.getX() << ", " << vertex3.getY() << ")\n"
    << "Perimetro: " << perimeter() << " u\n"
    << "Area: " << area() << " u" << (char) 253 << std::endl;
}