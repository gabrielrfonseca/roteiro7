#include "Consultor.h"

Consultor::Consultor()
{

}

Consultor::~Consultor()
{
    //dtor
}

float Consultor::getSalario(){
    return  salario * 1.1;
}
float Consultor::getSalario(float percentual){
    return salario * (percentual/100) + salario;
}
