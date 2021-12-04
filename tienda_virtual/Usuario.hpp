#include <string>

class Usuario
{
private:
    std::string nombre;
public:
    Usuario();
    Usuario(std::string);
    ~Usuario();
    std::string getNombre(void);
    void setNombre(std::string);
    void imprimeUsuario(void);
};