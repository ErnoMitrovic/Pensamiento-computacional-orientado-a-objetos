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
    point(int x, int y);

    /**
     * @brief Destroy the point object
     * 
     */
    ~point(){}
    float getX();
    float getY();
    void setX(float newX);
    void setY(float newY);
};

/**
 * @brief Construct a new point::point object
 * 
 * @param x value
 * @param y value
 */
point::point(int x, int y){
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

double distancia(point p1, point p2){
    double a, b;
    a = std::pow(p1.getX() - p2.getX(), 2);
    b = std::pow(p1.getY() - p2.getY(), 2);
    return std::sqrt(a + b);
}