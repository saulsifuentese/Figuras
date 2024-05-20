#include "Rectangulo.hpp"

Rectangulo::Rectangulo(){
 ancho = 4;
 largo = 5;
}

Rectangulo::Rectangulo(int _x, int _y, int _ancho, int _largo): Figura(_x, _y), ancho(_ancho), largo(_largo) {}

int Rectangulo::getAncho() const {
    return ancho;
}

void Rectangulo::setAncho(int _ancho) {
    ancho = _ancho;
}

int Rectangulo::getLargo() const {
    return largo;
}

void Rectangulo::setLargo(int _largo) {
    largo = _largo;
}

double Rectangulo::area(){
    return ancho * largo;
}

double Rectangulo::perimetro(){
    return 2 * ancho + 2 * largo;
}

void Rectangulo::imprime(){
    Figura::imprime();
    std::cout << "rectangulo de: " << ancho << "," << largo << std::endl;
} 