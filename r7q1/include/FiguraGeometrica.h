#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica(string nome);
        virtual ~FiguraGeometrica();
        void calcularArea();
    protected:

    private:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
