#include "pasajero.hpp"

class Camion
{
private:
    Pasajero pasajeros [51];
    std::string destino;
public:
    Camion();
    Camion(std::string);
    ~Camion();

    Pasajero getPasajeroAt(int);
    std::string getDestino(void);

    bool agregarPasajero(Pasajero, int);
    void setDestino(std::string);

    int ganancia(void);
    void imprimirDatos(void);
    void cerrar(void);
};