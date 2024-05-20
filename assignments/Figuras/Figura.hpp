#pragma once    
#include <iostream>

class Figura{
    public:
        Figura();
        Figura(int,int);
        int getX() const;
        int getY() const;
        void setX(int);
        void setY(int);
        std::string dibuja();
        void imprime();
    private:
        int x, y;
};