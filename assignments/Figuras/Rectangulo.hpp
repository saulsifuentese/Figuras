#pragma once
#include "Figura.hpp"

class Rectangulo:Figura{
    public:
        Rectangulo();
        Rectangulo(int, int, int, int);
        int getAncho() const;
        void setAncho(int);
        int getLargo() const;
        void setLargo(int);
        double area();
        double perimetro();
        void imprime();

    private:
        int ancho;
        int largo;
};