#include <iostream>
using namespace std;

#ifndef Forma_hpp
#define Forma_hpp


class Forma{
public:
    virtual void calculaArea() = 0;

    void setNome(string nome);

protected:
    float area;

    string nome;

};

#endif
