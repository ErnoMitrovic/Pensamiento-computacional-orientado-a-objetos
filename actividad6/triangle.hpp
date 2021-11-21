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

triangle::triangle(){
    vertex1 = point(0, 0);
    vertex2 = point(50, 30);
    vertex3 = point(25, 10);
}

triangle::triangle(point vertex1, point vertex2, point vertex3){
    this -> vertex1 = vertex1;
    this -> vertex2 = vertex2;
    this -> vertex3 = vertex3;
}

double triangle::perimeter(){
    double a, b, c;
    a = distancia(vertex1, vertex2);
    b = distancia(vertex2, vertex3);
    c = distancia(vertex1, vertex3);
    return a + b + c;
}

double triangle::area(){
    double a, b, c, s;
    a = distancia(vertex1, vertex2);
    b = distancia(vertex1, vertex3);
    c = distancia(vertex2, vertex3);
    s = (a + b + c) / 2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));
}