#include <string>

class Alumno
{
private:
    std::string matricula;
    std::string nombre;
    int edad;
    std::string carrera;
public:
    Alumno();
    ~Alumno();
    Alumno(std::string matricula, std::string nombre, int edad, std::string carrera);
    std::string getMatricula();
    std::string getNombre();
    int getEdad();
    std::string getCarrera();
    void setMatricula(std::string matricula);
    void setNombre(std::string nombre);
    void setEdad(int edad);
    void setCarrera(std::string carrera);
    void imprimeAlumno();
    void cumpleanios();
};