#include "Circulo.hpp"

Circulo::Circulo(string n, float r)
{
    nome = n;
    raio = r;
}

void Circulo::setRaio(float r)
{
    raio = r;
}

void Circulo::calculaArea()
{
    area = (3.14*(raio*raio));
    cout << "Area do circulo " << nome << " = " << area << endl;
}
