#include <iostream>
#include "Circulo.hpp"
#include "Rectangulo.hpp"
using namespace std;

int main() 
{
  Circulo c1;
  Circulo c2(2,2,4);
  Circulo c3(-2,0,-5);
  c1.imprime();
  c2.imprime();
  c3.imprime();
  cout << "Cordenadas del centro del Circulo 1: ()" << c1.getX() << "," << c1.getY() << ")" << endl;

return 0;

  Rectangulo r1;
  Rectangulo r2(2,4,4,2);
  Rectangulo r3(2,5,5,3);
  r1.imprime();
  r2.imprime();
  r3.imprime();

return 0;
}
