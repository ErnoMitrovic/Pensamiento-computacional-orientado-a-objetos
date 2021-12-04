#include "Categoria.hpp"
#include <iostream>
int main(){
    Categoria deb("Debugging");
    deb.agregarProducto(Producto(200, "Primero", "A01656"));
    deb.agregarProducto(Producto(50, "Segundo", "145"));
    deb.agregarProducto(Producto(200, "Tercero", "A01656"));
    deb.imprimeCategoria();
    std::cout << "Despues de borrar producto\n\n";
    deb.eliminarProducto(Producto(50, "Segundo", "145"), 1);
    deb.imprimeCategoria();
}