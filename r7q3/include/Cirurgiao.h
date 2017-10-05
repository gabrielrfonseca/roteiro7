#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico
{
    public:
        Cirurgiao();
        virtual ~Cirurgiao();
        void fazCirurgia();
    protected:
    private:
};

#endif // CIRURGIAO_H
