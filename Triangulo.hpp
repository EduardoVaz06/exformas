#include "Formas.hpp"


#include <iostream>
using namespace std;

#ifndef Triangulo_hpp
#define Triangulo_hpp


class Triangulo : public Formas
{
public:
    Triangulo(){};
    Triangulo(string n, float b, float h);

    void calculaArea();

    void setBase(float b);
    void setAltura(float a);


private:
    float base;
    float altura;
};

#endif


