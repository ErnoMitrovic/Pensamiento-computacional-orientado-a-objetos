#include "Carrito.hpp"
#include "Categoria.hpp"
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>

/**
 * @brief Valida si se ingresa un entero
 * 
 * @return int validado
 */
int validInt(){
    int num;
    for (;;) {
        if (std::cin >> num) {
            break;
        } else {
            std::cout << "Ingresa un entero\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return num;
}

std::vector<Categoria> defCategorias(){
    std::vector <Categoria> categorias;
    categorias.push_back(Categoria("Ciencia")); 
    categorias.push_back(Categoria("Tecnologia"));
    categorias.push_back(Categoria("Ingenieria")); 
    categorias.push_back(Categoria("Matematicas"));

    categorias[0].agregarProducto(Producto(500, "Matraz", "BF23R", "Instrumento para laboratorio", 0, 20));
    categorias[0].agregarProducto(Producto(200, "Telescopio", "XFLR1", "Instrumento para astronomia", 0.15, 30));
    categorias[0].agregarProducto(Producto(700, "Probeta", "ABR12", "Instrumento para medir volumenes", 0.1, 50));
    categorias[0].agregarProducto(Producto(200, "Placa de Petri", "FJR31", "Recipiente redondo para analizar bacterias", 0, 25));

    
    categorias[1].agregarProducto(Producto(10500, "Celular", "IOS2123", "Iphone 23", 0.05, 15));
    categorias[1].agregarProducto(Producto(400, "Cargador", "JKLX21", "Cargador tipo-C", 0.15, 30));
    categorias[1].agregarProducto(Producto(23000, "Computadora", "COM75", "Computadora marca ASUS", 0, 10));
    categorias[1].agregarProducto(Producto(12000, "Tableta", "XDRT2", "Tableta marca Samsung", 0.3, 50));   
    
    categorias[2].agregarProducto(Producto(800, "Libro arquitectura", "LBR40", "El manual del ingeniero", 0.40, 60));
    categorias[2].agregarProducto(Producto(700, "Cautin", "CAYT81", "Cautin para soldadura", 0, 40));
    categorias[2].agregarProducto(Producto(3200, "Graficadora", "GU2R", "Graficadora moderna", 0, 10));
    categorias[2].agregarProducto(Producto(34000, "Maqueta", "MAQ73", "Maqueta de biblioteca jose vasconcelos", 0, 5));

    categorias[3].agregarProducto(Producto(800, "Geometria baldor", "LBR21", "La clasica geometria de baldor", 0.10, 30));
    categorias[3].agregarProducto(Producto(70, "Juego de geometria", "ABC23", "Juego de geometria sencillo", 0, 40));
    categorias[3].agregarProducto(Producto(4000, "Ejercicios pearson", "LBRU1", "Libro de ejercicios pearson", 0.05, 40));
    categorias[3].agregarProducto(Producto(100, "Libro tablas", "LBFR2", "Libro de tablas de primaria", 0.3, 50));   
    return categorias;
}

void imprimeCategorias(std::vector <Categoria> categorias){
    std::cout << " - Tenemos las categorias con sus productos -\n";
    for(int i =0; i < categorias.size(); i++){
        std::cout << i + 1 << ")";
        categorias[i].imprimeCategoria();
    }
}

/**
 * @brief Metodo para modificar alguna categoria
 * 
 * @param categorias 
 * @return std::vector<Categoria> 
 */
std::vector<Categoria> modificarCategorias(std::vector <Categoria> categorias){
    int eleccion, tamanioCat, cantidad;
    std::string nombreCat, nombreProd, clave, detalles;
    double precio, descuento;
    do {
        std::cout << "+ Ingresa la categoria a modificar (0 para cancelar): ";
        eleccion = validInt();
        if(eleccion < 0) {
            std::cout << "+ Input invalido\n";
        }
    } while (eleccion < 0);
    if (eleccion == 0){
        return categorias;
    }
    eleccion --;
    std::cout << "Nuevo nombre: ";
    std::cin >> nombreCat;
    std::cout << "+ Cuantos productos tendra la categoria: ";
    tamanioCat = validInt();
    Categoria catNueva (nombreCat);
    for(int i = 0; i < tamanioCat; i++){
        std::cout << "+ Ingresa los datos del producto " << i+1 << std::endl;
        std::cout << "+ Nombre: ";
        std::cin >> nombreProd;
        std::cout << "+ Precio: ";
        for (;;) {
            if (std::cin >> precio) {
                break;
            } else {
                std::cout << "Ingresa un double\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        std::cout << "+ Clave: ";
        std::cin >> clave;
        std::cout << "+ Detalles: ";
        std::cin >> detalles;
        std::cout << "+ Descuento (en decimal): ";
        for (;;) {
            if (std::cin >> descuento) {
                break;
            } else {
                std::cout << "Ingresa un double\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        std::cout << "+ Cantidad: ";
        cantidad = validInt();
        catNueva.agregarProducto(Producto(precio, nombreProd, clave, detalles, descuento, cantidad));
    }
    if(eleccion >= categorias.size()){
        categorias.push_back(catNueva);
    } else if(0 == catNueva.getTamanio()){
        categorias.erase(categorias.begin() + eleccion + 1);
    }
    else{
        categorias[eleccion] = catNueva;
    }
    return categorias;
}



/**
 * @brief Ejecucion completa del codigo
 * 
 * @param cats referencia del vector con las categorias
 */
void execution(std::vector<Categoria> & cats){
    Carrito carrito;
    std::vector<Categoria> categorias = cats;
    std::cout << "-----------------------------\n"
    << "- Les presentamos la tienda con mayores descuentos -\n";
    int opcion, ccv;
    Cliente cl;
    Admin admin;
    std::string nombre, contrasenia, eleccion;
    do {
        std::cout << "- Login como \n1) Cliente\n2) Administrador\n3) Salir\n";
        opcion = validInt();
        switch (opcion){
            case 1:
                std::cout << "Ingresa tu nombre: ";
                std::cin >> nombre;
                std::cout << "Ingresa tu CCV: ";
                ccv = validInt();
                cl = Cliente(nombre, ccv);
                do{
                    std::cout << "Que hacer?\n"
                    << "1) Ver categorias\n2) Agregar productos al carrito\n3) Quitar productos del carrito\n4) Ver carrito\n5) Pagar\n";
                    std::cin >> opcion;
                    std::string nombreProd;
                    switch(opcion){
                    case 1: 
                        imprimeCategorias(categorias);
                        break;
                    case 2:
                        int categoria, producto, cantidad;
                        do{
                            std::cout << "- Ingresa la categoria (0 para cancelar)\n";
                            categoria = validInt();
                        }while (categoria < 0 || categoria > categorias.size());
                        if (categoria == 0){
                            break;
                        }
                        categoria --;
                        do{
                            categorias.at(categoria).imprimeCategoria();
                            std::cout << "- Ingresa el producto (1 .. " << categorias[categoria].getTamanio() << ")\n";
                            producto = validInt();
                        } while(producto < 1 || producto > categorias[categoria].getTamanio());
                        producto--;
                        std::cout << "- Ingresa la cantidad: ";
                        cantidad = validInt();
                        nombreProd = categorias.at(categoria).getProducto(producto).getNombre();
                        // Agrega un producto dependiendo del input del usuario
                        carrito.agregarProducto(categorias.at(categoria).getProducto(producto), cantidad);
                        categorias.at(categoria).eliminarProducto(categorias.at(categoria).getProducto(producto), cantidad, producto);
                        std::cout << "Agregaste " << nombreProd << "!\n";
                        break;
                    case 3:
                        int el;
                        carrito.imprimeCarrito();
                        do{
                            el = validInt();
                        } while(el < 0 || el >= carrito.getTamanio() + 1);
                        if(el == 0){
                            break;
                        }
                        el--;
                        std::cout << "- Ingresa la cantidad a quitar: ";
                        std::cin >> cantidad;
                        if(carrito.quitarProducto(carrito.getProductos()[el], cantidad, el)){
                            std::cout << "+ Producto eliminado con exito!\n";
                        }
                        break;
                    case 4:
                        carrito.imprimeCarrito();
                        break;
                    case 5:
                        std::cout << "Estas seguro? (SI/NO)\n";
                        std::cin >> eleccion;
                        std::for_each(eleccion.begin(), eleccion.end(), [](char & c) {
                            c = ::toupper(c);
                        });
                        if (eleccion == "NO"){
                            break;
                        }
                        std::cout << "- Introduce nuevamente tu CCV: ";
                        std::cin >> ccv;
                        if (carrito.pagarCarrito(cl, Tarjeta(cl.getNombre(), ccv))){
                            std::cout << "+ Carrito pagado con exito!\n";
                        } else{
                            std::cout << "+ Error de validacion, pago cancelado\n";
                            eleccion = "NO";
                        }
                        break;
                    default:
                        std::cout << "Ingresa un numero valido (1 .. 5)\n";
                        break;
                    }
                } while (opcion != 5 || eleccion == "NO");
                break;
            case 2:
                admin.imprimeAdmin();
                do{
                    std::cout << "+ Que hacer?\n"
                    << "1) Cambiar usuario\n2) Ver categorias\n3) Modificar categoria\n4) Regresar\n";
                    opcion = validInt();
                    switch(opcion){
                        case 1:
                            std::cout << "+ Ingresa nombre: ";
                            std::cin >> nombre;
                            std::cout << "+ Ingresa contrasenia: ";
                            std::cin >> contrasenia;
                            admin = Admin(nombre, contrasenia);
                            break;
                        case 2:
                            imprimeCategorias(categorias);
                            break;
                        case 3: 
                            std::cout << "+ Ingresa tu contrasenia: ";
                            std::cin >> contrasenia;
                            if (admin.validarCredenciales(admin.getNombre(), contrasenia)){
                                categorias = modificarCategorias(categorias);
                            } else {
                                std::cout << "+ Credenciales incorrectas\n";
                            }
                            break;
                        case 4:
                            std::cout << "--- Cambios guardados ---";
                            break;
                    }
                } while (opcion != 4);
                break;
            case 3: 
                std::cout << "--- Gracias por su visita! ---\n";
                break;
            default:
                std::cout << "Invalid input (1 .. 3)\n";
                break;
        }
    } while(opcion != 3);
}

int main(){
    std::vector<Categoria> categoriasDef = defCategorias();
    execution(categoriasDef);
}