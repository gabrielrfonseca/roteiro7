#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        virtual ~Triangulo();
        void setTriangulo(float base, float altura);
        float calcularArea();
    protected:

    private:
        float base, altura;
};

#endif // TRIANGULO_H
