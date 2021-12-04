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
    Producto(double precio, std::string nombre, std::string clave);
    Producto(double precio, std::string nombre, std::string clave, double descuento);
    Producto(double precio, std::string nombre, std::string clave, std::string detalles, double descuento);
    Producto(double precio, std::string nombre, std::string clave, std::string detalles, double descuento, int cantidad);
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
    void aumentarCantidad(int cantidad);
    void disminuirCantidad(int cantidad);
};