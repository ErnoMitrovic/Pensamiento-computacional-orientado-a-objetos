#include "point.hpp"
#include <cmath>

class triangle
{
private:
    point vertex1, vertex2, vertex3; // Podria ser un array
public:
    triangle();
    triangle(point vertex1, point vertex2, point vertex3);
    /**
     * @brief Destroy the triangle object
     * 
     */
    double perimeter();
    double area();
};

/**
 * @brief Construct a new triangle::triangle object
 * 
 */
triangle::triangle(){
    vertex1 = point(0, 0);
    vertex2 = point(50, 30);
    vertex3 = point(25, 10);
}

/**
 * @brief Construct a new triangle::triangle object
 * 
 * @param v1 
 * @param v2 
 * @param v3 
 */
triangle::triangle(point v1, point v2, point v3) : vertex1(v1), vertex2(v2), vertex3(v3) {}

/**
 * @brief Calcula el perimetro del triangulo
 * 
 * @return double 
 */
double triangle::perimeter(){
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
double triangle::area(){
    double a, b, c, s;
    a = vertex1.distancia(vertex2);
    b = vertex2.distancia(vertex3);
    c = vertex1.distancia(vertex3);
    s = (a + b + c) / 2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));
}