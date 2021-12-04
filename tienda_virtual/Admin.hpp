#include "Usuario.hpp"

class Admin : public Usuario
{
private:
    std::string contrasenia;
public:
    Admin();
    Admin(std::string nombre, std::string contrasenia);
    ~Admin();

    void setContrasenia(std::string);
    
    void imprimeAdmin(void);
    bool validarCredenciales(std::string nombre, std::string contrasenia);
};