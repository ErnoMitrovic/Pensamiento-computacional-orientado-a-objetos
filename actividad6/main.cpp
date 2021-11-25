#include "Triangle.hpp"
#include <iostream>

int main(){
    Triangle def;
    Triangle user (Point(-1, -1), Point(30, 40), Point(30, -5));
    std::cout << "Default perimeter: " << def.perimeter() << std::endl
    << "Default area: " << def.area() << std::endl;

    std::cout << "User perimeter: " << user.perimeter() << std::endl
    << "User area: " << user.area() << std::endl;
}