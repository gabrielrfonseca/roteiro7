#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}
void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}
int Funcionario::getMatricula(){
    return matricula;
}
void Funcionario::setNome(string nome){
    this->nome = nome;
}
string Funcionario::getNome(){
    return nome;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}
float Funcionario::getSalario(){
    return salario;
}
