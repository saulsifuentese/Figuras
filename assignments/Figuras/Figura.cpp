#include "Figura.hpp"

Figura::Figura(){
    x = 0;
    y = 0;
}

Figura::Figura(int x_,int y_){
    x = x_;
    y = y_;
}

int Figura::getX() const {
    return x;
}

int Figura::getY() const{
    return y;
}
void Figura::setX(int x_){
    x = x_;
}
void Figura::setY(int y_){
    y = y_;
}
std::string Figura::dibuja(){
    return "Soy una figura";
}

void Figura::imprime(){
    std::cout << dibuja() << std::endl;
}
