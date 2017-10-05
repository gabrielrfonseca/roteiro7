#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();
        float calcularPagamento(int horas);
    protected:

    private:
        int horas;
};

#endif // TRABALHADORPORHORA_H
