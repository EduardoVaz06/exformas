#include "Formas.hpp"


#include <iostream>
using namespace std;

#ifndef Circulo_hpp
#define Circulo_hpp


class Circulo : public Formas
{
public:
    Circulo(){};
    Circulo(string n, float r);

    void calculaArea();

    void setRaio(float r);


private:
    float raio;
};

#endif
