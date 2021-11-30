#include "Categoria.hpp"
#include <vector>

class Producto
{
private:
    double precio;
    std::string name;
    std::string clave;
    std::vector<Categoria> categorias;
    // Categoria categorias [];
public:
    Producto();
    Producto(double, std::string, std::string);
    Producto(double, std::string, std::string, std::vector<Categoria>);
    ~Producto();

    double getPrecio();
    std::string getName();
    std::string getClave();
};
