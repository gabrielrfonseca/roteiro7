#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){

}

TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}
float TrabalhadorPorHora::calcularPagamento(int horas){
    if(horas<=40){
        return salario * 1;
    }if(horas>40){
        return ((salario/40) * 1.5) * (horas-40) + salario;
    }
}
