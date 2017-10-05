#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica("Quadrado")
{
    lado1 = 0;
    lado2 = 0;
}

Quadrado::~Quadrado()
{
    //dtor
}

void Quadrado::setQuadrado(float lado1, float lado2){
    this->lado1 = lado1;
    this->lado2 = lado2;
}
float Quadrado::calcularArea(){
    float area;
    area=lado1*lado2;
    return area;
}
