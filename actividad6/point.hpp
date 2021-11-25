#include <cmath>

class Point
{
private:
    float x, y;
public:
    /**
     * @brief Construct a new point object
     * 
     */
    Point(){}
    Point(float x, float y);

    /**
     * @brief Destroy the Point object
     * 
     */
    ~Point(){}
    float getX();
    float getY();
    void setX(float);
    void setY(float);
    double distancia(Point);
};

/**
 * @brief Construct a new Point::Point object
 * 
 * @param x value
 * @param y value
 */
Point::Point(float x, float y){
    this -> x = x;
    this -> y = y;
}

/**
 * @brief Getter of X
 * 
 * @return float 
 */
float Point::getX(){
    return x;
}

/**
 * @brief Getter of Y
 * 
 * @return float 
 */
float Point::getY(){
    return y;
}

/**
 * @brief Setter of X
 * 
 * @param x el nuevo valor de x 
 */
void Point::setX(float x) {
    this-> x = x;
}

/**
 * @brief Setter of Y
 * 
 * @param y 
 */
void Point::setY(float y) {
    this->y = y;
}

/**
 * @brief Calcula la distancia
 * 
 * @param p1 punto 1
 * @param p2 punto 2
 * @return double 
 */
double Point::distancia(Point p2){
    double a, b;
    a = std::pow(x - p2.getX(), 2);
    b = std::pow(y - p2.getY(), 2);
    return std::sqrt(a + b);
}