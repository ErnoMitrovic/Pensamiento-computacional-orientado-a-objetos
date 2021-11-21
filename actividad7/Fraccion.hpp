#ifndef FRACCION_HPP
#define FRACCION_HPP

class Fraccion
{
private:
    int num, den;
    int mcm(int den1, int den2);
    int gcd(int den1, int den2);
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
    void setNum(int num);
    void setDen(int den);
    double calcValorReal();
    Fraccion sumaFracciones(const Fraccion &frac1, const Fraccion &frac2);
    void imprimeFraccion();
};

#endif 