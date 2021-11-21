#include <string>

class Fecha
{
private:
    int dia;
    int mes;
public:
    Fecha(/* args */);
    ~Fecha();
    int getDia();
    int getMes();
    void setDia(int dia);
    void setMes(int mes);
};

class Empleado
{
private:
    std::string nombreEmp;
    float sueldoEmp;
public:
    Empleado(/* args */) {}
    ~Empleado() {}
};