#ifndef FRACCION_HPP
#define FRACCION_HPP

class Fraccion
{
private:
    int num, den;
public:
    Fraccion();
    Fraccion(int num, int den);

    /**
     * @brief Destroy the Fraccion object
     * 
     */
    ~Fraccion() {}
    int getNum();
    int getDen();
    void setNum();
    void setDen();
    double calcValorReal();
    Fraccion sumaFracciones(Fraccion frac1, Fraccion frac2);
    void imprimeFraccion();
};

#endif 