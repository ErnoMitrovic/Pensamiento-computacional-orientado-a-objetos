#include "Carrito.hpp"
#include "Categoria.hpp"
#include <string>

void execution(){
    Carrito carrito;
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

    std::cout << "-----------------------------\n"
    << "- Les presentamos la tienda STEM con mayores descuentos -\n"
    << "--- Science\tTechnology\tEngineering\tMathematics ---\n";
    int opcion;
    do{
        std::cout << "Que hacer?\n"
        << "1) Ver categorias\n2) Agregar productos al carrito\n3) Ver carrito\n4) Pagar\n";
        std::cin >> opcion;
        switch(opcion){
            case 1: 
                std::cout << " - Tenemos las categorias con sus productos -\n";
                for(int i = 0; i < categorias.size(); i++){
                    std::cout << i + 1 << ")";
                    categorias[i].imprimeCategoria();
                }
                break;
            case 2:
                int categoria, producto, cantidad;
                do{
                    std::cout << "- Ingresa la categoria (1 .. " << categorias.size() << ")\n";
                    std::cin >> categoria;
                }while (categoria < 1 || categoria > categorias.size());
                categoria --;
                do{
                    categorias.at(categoria).imprimeCategoria();
                    std::cout << "- Ingresa el producto (1 .. " << categorias[categoria].getTamanio() << ")\n";
                    std::cin >> producto;
                } while(producto < 1 || producto > categorias[categoria].getTamanio());
                producto--;
                std::cout << "- Ingresa la cantidad: ";
                std::cin >> cantidad;
                // Agrega un producto dependiendo del input del usuario
                categorias.at(categoria).eliminarProducto(categorias.at(categoria).getProducto(producto), cantidad, producto);
                carrito.agregarProducto(categorias.at(categoria).getProducto(producto), cantidad);
                std::cout << "Agregaste " << categorias.at(categoria).getProducto(producto).getNombre() << "!\n";
                break;
            case 3:
                carrito.imprimeCarrito();
                break;
            case 4:
                std::cout << carrito.calcularTotal() << std::endl;
                break;
            default:
                std::cout << "Ingresa un numero valido (1 .. 4)\n";
                break;
        }
    } while (opcion != 4);
}

int main(){
    execution();
}