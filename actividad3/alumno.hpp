#include <string>

class alumno
{
private:
    std::string matricula;
    std::string nombre;
    int edad;
    std::string semestre;
public:
    alumno();
    ~alumno();
    alumno(std::string matricula, std::string nombre, int edad, std::string semestre);
    std::string getMatricula();
    std::string getNombre();
    int getEdad();
    std::string getSemestre();
    void setMatricula(std::string matricula);
    void setNombre(std::string nombre);
    void setEdad(int edad);
    void setSemestre(std::string semestre);
    void imprimeAlumno();
    void cumpleanios();
};