#include "Carrito.hpp"



/**
 * @brief Construct a new Carrito:: Carrito object
 * 
 */
Carrito::Carrito(){}

/**
 * @brief Destroy the Carrito:: Carrito object
 * 
 */
Carrito::~Carrito(){}

/**
 * @brief Getter para el vector de productos
 * 
 * @return std::vector<Producto> 
 */
std::vector<Producto> Carrito::getProductos(){
    return productos;
}

/**
 * @brief Getter de tamanio
 * 
 * @return int 
 */
int Carrito::getTamanio(){
    return productos.size();
}

/**
 * @brief Setter de productos
 * 
 * @param productos 
 */
void Carrito::setProductos(std::vector<Producto> productos){
    this -> productos = productos;
}

/**
 * @brief Imprime los datos del carrito
 * 
 */
void Carrito::imprimeCarrito(){
    std::cout << "--- El carrito tiene los productos ---\n";
    for (int i = 0; i < productos.size(); i++){
        std::cout << i + 1 << ")\n";
        productos[i].imprimeProducto();
    }
}

/**
 * @brief Agregar producto
 * 
 * @param producto 
 * @param cantidad 
 */
void Carrito::agregarProducto(Producto producto, int cantidad){
    producto.setCantidad(cantidad);
    productos.push_back(producto);
}

/**
 * @brief Quita el producto en un indice de acuerdo a la cantidad
 * 
 * @param producto 
 * @param cantidad 
 * @param index 
 * @return true 
 * @return false 
 */
bool Carrito::quitarProducto(Producto producto, int cantidad, int index){
    if (index > productos.size() || index < 0){
        return false;
    }
    if(productos.at(index).getClave() == producto.getClave()){
        productos.at(index).disminuirCantidad(cantidad);
        if(productos.at(index).getCantidad() == 0){
            productos.erase(productos.begin() + index + 1);
        }
    return true;
    }
    return false;
}

/**
 * @brief Calcula el total a pagar
 * 
 * @return double 
 */
bool Carrito::pagarCarrito(Cliente cliente, Tarjeta tarjeta){
    double total = 0;
    if (cliente.validarPago(tarjeta.getDuenio(), tarjeta.getCvc())){
        for(Producto producto : productos){
            total += producto.subtotal();
        }
        std::cout << "Pagando... $" << total << std::endl;
        productos.clear();
        return true;
    }
    return false;
}