#include <string>

class Categoria
{
private:
    std::string nombre;
    int id;
    std::string color;

public:
    Categoria();
    Categoria(std::string, int, std::string);
    ~Categoria();

    std::string getNombre();
    int getId();
    std::string getColor();

    void setNombre(std::string);
    void setId(int);
    void setColor(std::string);

    void imprimeCategoria();
};
