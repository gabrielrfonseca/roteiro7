#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario fc;
    fc.setMatricula(1215);
    fc.setNome("Carlos");
    fc.setSalario(500);
    cout << "Nome do funcionario: " << fc.getNome() << "\nMatricula: " << fc.getMatricula() << "\nSalario: " << fc.getSalario() << endl;

    Consultor cons;
    cons.setSalario(700);
    cons.setMatricula(9999);
    cons.setNome("Gabriel");
    cout << "\nNome do consultor: " << cons.getNome() << "\nMatricula: " << cons.getMatricula();
    cout << "\nSalario do consultor com percentual automatico: " << cons.getSalario();
    cout << "\nNovo salario do consultor com percentual mecanico: " << cons.getSalario(15) << endl;

    return 0;
}
