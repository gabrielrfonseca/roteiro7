#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino : public Medico
{
    public:
        Otorrino();
        virtual ~Otorrino();
        void consultaOtorrino();
    protected:
    private:
};

#endif // OTORRINO_H
