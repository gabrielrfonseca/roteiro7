#include "Medico.h"
#include <iostream>
using namespace std;

Medico::Medico()
{
    //ctor
}

Medico::~Medico()
{
    //dtor
}
void Medico::setNome(std::string nome){
    this->nome = nome;
}
void Medico::setAltura(float altura){
    this->altura = altura;
}
void Medico::setPeso(float peso){
    this->peso = peso;
}
std::string Medico::getNome(){
    return nome;
}
float Medico::getAltura(){
    return altura;
}
float Medico::getPeso(){
    return peso;
}
void Medico::setEspecialidade(std::string especialidade){
    this->especialidade = especialidade;
}
std::string Medico::getEspecialidade(){
    return especialidade;
}
