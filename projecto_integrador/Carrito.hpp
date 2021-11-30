#include "Producto.hpp"

class Carrito
{
private:
    std::vector<Producto> productos;
    // Producto productos [];
    int tamanio;
public:
    Carrito();
    Carrito(std::vector<Producto>);
    ~Carrito();

    std::vector<Producto> getProductos();
    int getTamanio();

    void setProductos(std::vector <Producto>);
    //TODO: Evitar poner set tamanio?

    void imprimeCarrito();
    void agregarProducto(Producto);
    void eliminarProducto(Producto);
};