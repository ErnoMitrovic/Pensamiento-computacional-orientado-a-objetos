#include "Point.hpp"
#include <cmath>

class Triangle
{
private:
    Point vertex1, vertex2, vertex3; // Podria ser un array
public:
    Triangle();
    Triangle(Point vertex1, Point vertex2, Point vertex3);
    /**
     * @brief Destroy the Triangle object
     * 
     */
    double perimeter();
    double area();
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
 * @brief Construct a new Triangle::Triangle object
 * 
 * @param v1 
 * @param v2 
 * @param v3 
 */
Triangle::Triangle(Point v1, Point v2, Point v3) : vertex1(v1), vertex2(v2), vertex3(v3) {}

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