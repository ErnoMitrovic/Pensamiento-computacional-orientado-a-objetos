#include "Alumno.hpp"
#include <iostream>

void casoUno(){
    Alumno erno = Alumno();
    erno.setMatricula("A01656828");
    erno.setNombre("Ernesto");
    erno.setEdad(18);
    erno.setCarrera("ITC");
    erno.imprimeAlumno();
}

void casoDos(){
    Alumno sergio("A01656783", "Sergio", 19, "Negocios");
    sergio.imprimeAlumno();
    sergio.cumpleanios();
    sergio.imprimeAlumno();
}

void casoTres(){
    Alumno al("A01656783", "Sergio", 19, "Negocios");
    std::cout << "Datos del Alumno mediante getters:\n"
    << al.getNombre() << std::endl
    << al.getMatricula() << std::endl
    << al.getEdad() << std::endl
    << al.getCarrera() << std::endl;
}

void casoCuatro(){
    /* Este no funciona
    Alumno alumnoEquis (2, true, "15", 5);
    */
   Alumno alumnoEquis("A017", "Equis", 15, "NoSe");
   alumnoEquis.imprimeAlumno();
   for (int i = 0; i < 5; i++){
       alumnoEquis.cumpleanios();
   }
   alumnoEquis.imprimeAlumno();
}

void testCases(){
    int eleccion;
    do{
    std::cout << "Ingresa el test case que desees explorar (1-4): ";
    std::cin >> eleccion;
        switch (eleccion){
            case 1: 
                casoUno();
                break;
            case 2:
                casoDos();
                break;
            case 3:
                casoTres();
                break;
            case 4:
                casoCuatro();
                break;
            default:    
                std::cout << "Input invalido\n";
                break;
        }
    } while (eleccion < 1 || eleccion > 4);
}

int main(){
    testCases();
    return 0;
}