#ifndef FRACCION_HPP
#define FRACCION_HPP

class Fraccion
{
private:
    int num, den;
    static int gcd(int, int);
public:
    Fraccion(void);
    Fraccion(int num, int den);

    /**
     * @brief Destroy the Fraccion object
     * 
     */
    ~Fraccion() {}
    int getNum(void);
    int getDen(void);
    void setNum(int);
    void setDen(int);
    double calcValorReal(void);
    static Fraccion sumaFracciones(Fraccion &, Fraccion &);
    void imprimeFraccion(void);
};

#endif 