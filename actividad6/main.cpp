#include "Triangle.hpp"
#include <iostream>

int main(){
    Triangle def;
    Triangle user (Point(-1, -1), Point(30, 40), Point(30, -5));
    
    def.printTriangle();
    user.printTriangle();
}