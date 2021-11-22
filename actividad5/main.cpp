#include "alumno.hpp"
#include <iostream>

int main(){
    alumno erno;
    erno.setNombre("Ernesto Miranda");
    erno.setMatricula("A01656828");
    erno.setEdad(18);
    erno.setSemestre("Primero");
    alumno sergio ("A01655789", "Sergio Ramos", 18, "Primero");
    erno.imprimeAlumno();
    erno.cumpleanios();
    erno.imprimeAlumno();
    std::string matriculaSergio = "A01567919";
    sergio.setMatricula(matriculaSergio);
    std::cout << "Datos:" <<std::endl
    << erno.getNombre() << std::endl 
    << erno.getMatricula() << std::endl
    << erno.getEdad() << std::endl
    << erno.getSemestre() << std::endl;
}