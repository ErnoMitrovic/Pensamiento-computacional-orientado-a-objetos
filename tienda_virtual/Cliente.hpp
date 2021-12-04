#include "Tarjeta.hpp"
#include "Usuario.hpp"

class Cliente : public Usuario
{
private:
    Tarjeta tarjeta;
public:
    Cliente();
    Cliente(std::string, int cvc);
    ~Cliente();
    bool validarPago(std::string, int);
};