#include <string>

class Fecha
{
private:
    int dia;
    int mes;
public:
    Fecha();
    Fecha(int d, int mes);
    /**
     * @brief Destroy the Fecha object
     * 
     */
    ~Fecha(){}
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
    Fecha cumpleAniosEmp;
public:
    Empleado();
    Empleado(std::string nombre, float sueldo, Fecha cumpleAnios);
    /**
     * @brief Destroy the Empleado object
     * 
     */
    ~Empleado() {}
    std::string getNombreEmp();
    float getSueldoEmp();
    Fecha getCumpleAniosEmp();
    void setNombreEmp(std::string nombreEmp);
    void setSueldoEmp(float sueldoEmp);
    void setCumpleAniosEmp(Fecha cumpleAniosEmp);
    void subeSueldo(float incremento);
};