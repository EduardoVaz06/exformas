#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Retangulo.hpp"
#include "Formas.hpp"

int main()
{
   Circulo c1("C1", 5);
   c1.calculaArea();

   Triangulo t1("T1", 5, 7);
   t1.calculaArea();

   Retangulo r1("R1", 10, 5);
   r1.calculaArea();


}
