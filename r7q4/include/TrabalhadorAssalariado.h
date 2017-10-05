#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();
        float calcularPagamento(int horas);
    protected:

    private:
        int horas;
};

#endif // TRABALHADORASSALARIADO_H
