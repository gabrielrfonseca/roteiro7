#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista : public Medico
{
    public:
        Oftalmologista();
        virtual ~Oftalmologista();
        void consultaOftal();
    protected:
    private:
};

#endif // OFTALMOLOGISTA_H
