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
    std::vector<Categoria> getCategorias();

    void setPrecio(double);
    void setName(std::string);
    void setClave(std::string);
    // Preguntar al profesor
    void setCategorias(std::vector<Categoria>);

    void imprimeProducto();
    void agregarCategoria(Categoria);
    void eliminarCategoria(Categoria);
};
