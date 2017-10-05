#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Quadrado quad;
    quad.setQuadrado(10, 5);
    cout << "Area do quadrado: " << quad.calcularArea() << endl;

    Triangulo triang;
    triang.setTriangulo(2, 5);
    cout << "Area do triangulo: " << triang.calcularArea() << endl;

    Circulo circ;
    circ.setCirculo(5);
    cout << "Area do circulo: " << circ.calcularArea() << endl;

    return 0;
}
