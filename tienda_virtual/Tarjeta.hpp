#include <string>

class Tarjeta
{
private:
    std::string duenio;
    int cvc;
public:
    Tarjeta();
    Tarjeta(std::string, int);
    ~Tarjeta();
    std::string getDuenio(void);
    int getCvc(void);
    void setDuenio(std::string);
    void setCvc(int);
    void imprimeTarjeta(void);
};