#include "Forma.hpp"

#ifndef Circulo_hpp
#define Circulo_hpp


class Circulo : public Forma
{
public:
    void calculaArea();

    void setRaio(float raio);


private:
    float raio;
};

#endif

