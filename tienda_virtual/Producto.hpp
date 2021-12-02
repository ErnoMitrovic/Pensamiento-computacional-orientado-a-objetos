#include <iostream>

class Producto
{
private:
    double precio;
    std::string nombre;
    std::string clave;
    std::string detalles;
    double descuento;
    int cantidad;
public:
    Producto();
    Producto(double, std::string, std::string);
    Producto(double, std::string, std::string, double);
    Producto(double, std::string, std::string, std::string, double);
    Producto(double, std::string, std::string, std::string, double, int);
    ~Producto();

    double getPrecio();
    std::string getNombre();
    std::string getClave();
    std::string getDetalles();
    double getDescuento();
    int getCantidad();

    void setPrecio(double);
    void setNombre(std::string);
    void setClave(std::string);
    void setDetalles(std::string);
    void setDescuento(double);
    void setCantidad(int);

    void imprimeProducto(void);
    double subtotal(void);
};