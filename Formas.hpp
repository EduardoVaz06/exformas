#include <math.h>
#include <iostream>
using namespace std;

#ifndef Formas_hpp
#define Formas_hpp


class Formas{
public:
    virtual void calculaArea() = 0;

    void setNome(string nome);

protected:
    float area;

    string nome;

};

#endif

