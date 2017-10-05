#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"


class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        virtual ~Circulo();
        void setCirculo(float raio);
        float calcularArea();
    protected:

    private:
        float raio;
};

#endif // CIRCULO_H
