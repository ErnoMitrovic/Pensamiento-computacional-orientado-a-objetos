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
 * @brief Imprime la informacion de categoria
 * 
 */
void Categoria::imprimeCategoria(){
    std::cout << "--- La categoria " << nombre << "---\n+ Tiene los productos:\n";
    for(Producto producto : productos){
        producto.imprimeProducto();
    }
    for(int i = 0; i < productos.size(); i++){
        productos[i].imprimeProducto();
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
bool Categoria::eliminarProducto(Producto producto, int cantidad){
    for(int i = 0; i < productos.size(); i++){
        // Si es la misma clave que el producto introducido
        if(productos.at(i).getClave().compare(producto.getClave())){
            productos.at(i).disminuirCantidad(cantidad);
            if(productos.at(i).getCantidad() == 0){
                productos.erase(productos.begin() + i + 1);
            }
            return true;
        }
    } return false;
}