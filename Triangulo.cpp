#include "Triangulo.hpp"

Triangulo::Triangulo(string n, float b, float a)
{
    nome = n;
    base = b;
    altura = a;
}

void Triangulo::setBase(float b)
{
    base = b;
}

void Triangulo::setAltura(float a)
{
    altura = a;
}

void Triangulo::calculaArea()
{
    area = ((altura*base)/2);
    cout << "Area do Triangulo " << nome << " = " << area << endl;
}


