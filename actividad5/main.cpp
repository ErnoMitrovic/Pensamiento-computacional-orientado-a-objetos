#include "alumno.hpp"
#include <string>

int main(){
    alumno erno = alumno();
    erno.setNombre("Ernesto Miranda");
    erno.setMatricula("A01656828");
    erno.setEdad(18);
    erno.setSemestre("Primero");
    alumno sergio = alumno("A01655789", "Sergio Ramos", 18, "Primero");
    erno.imprimeAlumno();
    erno.cumpleanios();
    erno.imprimeAlumno();
    std::string matriculaSergio = "A01567919";
    sergio.setMatricula(matriculaSergio);
}