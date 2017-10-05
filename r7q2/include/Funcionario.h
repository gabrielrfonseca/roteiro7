#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        void setMatricula(int matricula);
        void setNome(string nome);
        void setSalario(float salario);
        int getMatricula();
        string getNome();
        float getSalario();
    protected:
        float salario;
    private:
        int matricula;
        string nome;
};

#endif // FUNCIONARIO_H
