#include "Retangulo.hpp"

Retangulo::Retangulo(string n, float b, float a)
{
    nome = n;
    base = b;
    altura = a;
}

void Retangulo::setBase(float b)
{
    base = b;
}

void Retangulo::setAltura(float a)
{
    altura = a;
}

void Retangulo::calculaArea()
{
    area = (altura*base);
    cout << "Area do Retangulo " << nome << " = " << area << endl;
}



