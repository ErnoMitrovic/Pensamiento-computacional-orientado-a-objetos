#include <cmath>

class point
{
private:
    float x, y;
public:
    /**
     * @brief Construct a new point object
     * 
     */
    point(){}
    point(float x, float y);

    /**
     * @brief Destroy the point object
     * 
     */
    ~point(){}
    float getX();
    float getY();
    void setX(float newX);
    void setY(float newY);
    double distancia(point p2);
};

/**
 * @brief Construct a new point::point object
 * 
 * @param x value
 * @param y value
 */
point::point(float x, float y){
    this -> x = x;
    this -> y = y;
}

/**
 * @brief Getter of X
 * 
 * @return float 
 */
float point::getX(){
    return x;
}

/**
 * @brief Getter of Y
 * 
 * @return float 
 */
float point::getY(){
    return y;
}

/**
 * @brief Setter of X
 * 
 * @param newX 
 */
void point::setX(float newX) {
    x = newX;
}

/**
 * @brief Setter of Y
 * 
 * @param newY 
 */
void point::setY(float newY) {
    y = newY;
}

/**
 * @brief Calcula la distancia
 * 
 * @param p1 punto 1
 * @param p2 punto 2
 * @return double 
 */
double point::distancia(point p2){
    double a, b;
    a = std::pow(x - p2.getX(), 2);
    b = std::pow(y - p2.getY(), 2);
    return std::sqrt(a + b);
}