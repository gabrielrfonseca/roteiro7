#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>


class Medico
{
    public:
        Medico();
        virtual ~Medico();
        void setNome(std::string nome);
        void setAltura(float altura);
        void setPeso(float peso);
        std::string getNome();
        float getPeso();
        float getAltura();
        void setEspecialidade(std::string especialidade);
        std::string getEspecialidade();
    protected:

    private:
        std::string nome, especialidade;
        float altura, peso;
};

#endif // MEDICO_H
