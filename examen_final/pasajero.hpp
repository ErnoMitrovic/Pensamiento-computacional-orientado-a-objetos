#include <string>
class Pasajero
{
private:
    std::string nombre, apellidoPaterno, apellidoMaterno;
    bool ocupado;
public:
    Pasajero(void);
    Pasajero(std::string, std::string, std::string);
    ~Pasajero();

    std::string getNombre(void);
    std::string getApellidoMaterno(void);
    std::string getApellidoPaterno(void);
    bool getOcupado(void);

    void setNombre(std::string);
    void setApellidoPaterno(std::string);
    void setApellidoMaterno(std::string);
    void setOcupado(bool);
    void imprimirPasajero(void);
};