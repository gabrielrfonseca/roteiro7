#include "Circulo.h"

Circulo::Circulo() : FiguraGeometrica("Circulo")
{
    raio=0;
}

Circulo::~Circulo()
{
    //dtor
}

void Circulo::setCirculo(float raio){
    this->raio = raio;
}

float Circulo::calcularArea(){
    float area;
    area = (raio * raio) * 3.14;
    return area;
}
