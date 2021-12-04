#include "Producto.hpp"
#include <vector>

class Carrito
{
private:
    std::vector<Producto> productos;
public:
    Carrito();
    ~Carrito();

    std::vector<Producto> getProductos(void);
    int getTamanio(void);

    void setProductos(std::vector<Producto>);

    void imprimeCarrito(void);

    void agregarProducto(Producto, int cantidad);
    bool quitarProducto(Producto, int cantidad, int index);
    double calcularTotal(void);
};