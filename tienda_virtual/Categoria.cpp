#include "Categoria.hpp"

/**
 * @brief Setter del nombre
 * 
 * @param nombre 
 */
void Categoria::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Construct a new Categoria:: Categoria object
 * 
 */
Categoria::Categoria() : nombre("Sin categoria") {}

/**
 * @brief Construct a new Categoria:: Categoria object
 * 
 * @param nombre 
 */
Categoria::Categoria(std::string nombre){
    setNombre(nombre);
}

/**
 * @brief Destroy the Categoria:: Categoria object
 * 
 */
Categoria::~Categoria(){}

/**
 * @brief Getter del nombre
 * 
 * @return std::string 
 */
std::string Categoria::getNombre(){
    return nombre;
}

/**
 * @brief Getter de producto en un indice
 * 
 * @param indice 
 * @return Producto 
 */
Producto Categoria::getProducto(int indice){
    return productos.at(indice);
}

int Categoria::getTamanio(){
    return productos.size();
}

/**
 * @brief Imprime la informacion de categoria
 * 
 */
void Categoria::imprimeCategoria(){
    std::cout << "--- La categoria " << nombre << " tiene los productos:\n";
    for(int i = 0; i < productos.size(); i++){
        std::cout << i + 1 << ")\n"; 
        productos[i].imprimeProducto();
        std::cout << '\n';
    }
}

/**
 * @brief Agrega un producto a la categoria
 * 
 * @param producto 
 */
void Categoria::agregarProducto(Producto producto){
    productos.push_back(producto);
}

/**
 * @brief Elimina el producto indicado con alguna cantidad si al eliminar la cantidad termina con cero
 * 
 * @param producto 
 * @param cantidad 
 * @return true 
 * @return false 
 */
void Categoria::eliminarProducto(Producto producto, int cantidad, int index){
    productos.at(index).disminuirCantidad(cantidad);
    if(productos.at(index).getCantidad() == 0){
        productos.erase(productos.begin() + index + 1);
    }
}
