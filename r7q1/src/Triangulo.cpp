#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica("Triangulo")
{
    base = 0;
    altura = 0;
}

Triangulo::~Triangulo()
{
    //dtor
}

void Triangulo::setTriangulo(float base, float altura){
    this->base = base;
    this->altura = altura;
}
float Triangulo::calcularArea(){
    float area;
    area = (base*altura) / 2;
    return area;
}
