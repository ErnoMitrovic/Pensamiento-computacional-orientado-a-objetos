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

    void setNombre(void);

    void imprimeCategoria(void);

    void agregarProducto(Producto);
    bool eliminarProducto(Producto, int cantidad);
};