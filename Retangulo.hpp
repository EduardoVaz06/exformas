#include "Formas.hpp"


#include <iostream>
using namespace std;

#ifndef Retangulo_hpp
#define Retangulo_hpp


class Retangulo : public Formas
{
public:
    Retangulo(){};
    Retangulo(string n, float b, float h);

    void calculaArea();

    void setBase(float b);
    void setAltura(float a);


private:
    float base;
    float altura;
};

#endif



