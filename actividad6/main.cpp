#include "triangle.hpp"
#include <iostream>

int main(){
    triangle def;
    triangle user (point(-1, -1), point(30, 40), point(40, -5));
    std::cout << "Default perimeter: " << def.perimeter() << std::endl
    << "Default area: " << def.area() << std::endl;

    std::cout << "User perimeter: " << user.perimeter() << std::endl
    << "User area: " << user.area() << std::endl;
}