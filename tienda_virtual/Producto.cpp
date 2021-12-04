#include "Producto.hpp"
#include <iostream>

/**
 * @brief Destroy the Producto:: Producto object
 * 
 */
Producto::~Producto(){}

/**
 * @brief Setter de precio
 * 
 * @param precio 
 */
void Producto::setPrecio(double precio){
    this -> precio = precio;
}

/**
 * @brief Setter del nombre
 * 
 * @param nombre 
 */
void Producto::setNombre(std::string nombre){
    this -> nombre = nombre;
}

/**
 * @brief Setter de la clave
 * 
 * @param clave 
 */
void Producto::setClave(std::string clave){
    this -> clave = clave;
}

/**
 * @brief Setter de los detalles
 * 
 * @param detalles 
 */
void Producto::setDetalles(std::string detalles){
    this -> detalles = detalles;
}

void Producto::setDescuento(double descuento){
    this -> descuento = descuento;
}

/**
 * @brief Setter de cantidad
 * 
 * @param cantidad 
 */
void Producto::setCantidad(int cantidad){
    this -> cantidad = cantidad;
}


/**
 * @brief Construct a new Producto:: Producto object
 * 
 */
Producto::Producto() : precio(0), nombre("Vacio"), descuento(0), detalles("Sin detalles"), clave("DEFAULT"), cantidad(0) {}

/**
 * @brief Construct a new Producto:: Producto object
 * 
 * @param p precio
 * @param n nombre
 * @param c clave
 */
Producto::Producto(double p, std::string n, std::string c) : precio(p), nombre(n), clave(c), descuento(0), detalles("Sin detalles"), cantidad(1){}


/**
 * @brief Construct a new Producto:: Producto object
 * 
 * @param p precio
 * @param n nombre
 * @param c clave
 * @param descuento 
 */
Producto::Producto(double p, std::string n, std::string c, double descuento) : Producto(p, n, c) {
    setDescuento(descuento);
}

/**
 * @brief Construct a new Producto:: Producto object
 * 
 * @param p precio
 * @param n nombre
 * @param c clave
 * @param detalles 
 * @param d descuento
 */
Producto::Producto(double p, std::string n, std::string c, std::string detalles, double d) : Producto(p, n, c, d) {
    setDetalles(detalles);
}

/**
 * @brief Construct a new Producto:: Producto object
 * 
 * @param p precio
 * @param n nombre
 * @param c clave
 * @param d detalles
 * @param desc descuento
 * @param cantidad 
 */
Producto::Producto(double p, std::string n, std::string c, std::string d, double desc, int cantidad) : Producto(p, n, c, d, desc){
    setCantidad(cantidad);
}


/**
 * @brief Getter de precio
 * 
 * @return double precio
 */
double Producto::getPrecio(){
    return precio;
}

/**
 * @brief Getter de nombre
 * 
 * @return std::string 
 */
std::string Producto::getNombre(){
    return nombre;
}

/**
 * @brief Getter de clave
 * 
 * @return std::string 
 */
std::string Producto::getClave(){
    return clave;
}

/**
 * @brief Getter de detalles
 * 
 * @return std::string 
 */
std::string Producto::getDetalles(){
    return detalles;
}

/**
 * @brief Getter de descuento
 * 
 * @return double 
 */
double Producto::getDescuento(){
    return descuento;
}

/**
 * @brief Getter de cantidad
 * 
 * @return int 
 */
int Producto::getCantidad(){
    return cantidad;
}

/**
 * @brief Imprime la informacion del producto
 * 
 */
void Producto::imprimeProducto(){
    std::cout << cantidad << ' '<< nombre << " $" << precio << " Descuento: " << descuento * 100 << '%' << std::endl
    << "+ Detalles\n" << detalles << std::endl;
}

/**
 * @brief Calcula el subtotal dependiendo de la cantidad y el precio
 * 
 * @return double subtotal
 */
double Producto::subtotal(){
    return (double) cantidad * precio * (1-descuento);
}

/**
 * @brief Aumenta la cantidad especifica de productos de un tipo
 * 
 * @param cantidad a aumentar
 */
void Producto::aumentarCantidad(int cantidad){
    this -> cantidad += cantidad;
}

/**
 * @brief Disminuye la cantidad especificada
 * 
 * @param cantidad a disminuir
 */
void Producto::disminuirCantidad(int cantidad){
    if (this -> cantidad >= cantidad){
        this -> cantidad -= cantidad;
    } else{
        std::cout << "+ Cantidad a disminuir mayor a cantidad original, estableciendo como 0\n";
        setCantidad(0);
    }
}