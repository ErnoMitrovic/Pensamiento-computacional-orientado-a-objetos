#include "Producto.hpp"
#include <vector>

class Categoria
{
private:
    std::string nombre;
    std::vector <Producto> productos;
public:
    Categoria();
    Categoria(std::string nombre);
    ~Categoria();

    std::string getNombre(void);
    Producto getProducto(int indice);
    int getTamanio(void);

    void setNombre(std::string);

    void imprimeCategoria(void);

    void agregarProducto(Producto);
    void eliminarProducto(Producto, int cantidad, int index);
};