#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        virtual ~Quadrado();
        void setQuadrado(float lado1, float lado2);
        float calcularArea();
    protected:

    private:
        float lado1, lado2;
};

#endif // QUADRADO_H
