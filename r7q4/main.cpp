#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado assalariado;
    assalariado.setSalario(500);
    cout << "Trabalhador assalariado: " << assalariado.calcularPagamento(40) << endl;

    TrabalhadorPorHora porhora;
    porhora.setSalario(500);
    cout << "Trabalhador por hora: " << porhora.calcularPagamento(50) << endl;

    return 0;
}
