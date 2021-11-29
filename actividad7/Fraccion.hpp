#ifndef FRACCION_HPP
#define FRACCION_HPP

class Fraccion
{
private:
    int num, den;
    static int mcm(int den1, int den2);
    static int gcd(int den1, int den2);
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
    void setNum(int);
    void setDen(int);
    double calcValorReal();
    static Fraccion sumaFracciones(Fraccion &frac1, Fraccion &frac2);
    void imprimeFraccion();
};

#endif 