#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main()
{

    Medico medico;
    medico.setNome("Gabriel");
    medico.setAltura(1.9);
    medico.setPeso(80);
    medico.setEspecialidade("Medico");
    cout << "" << medico.getEspecialidade() << endl;
    cout << "Nome: " << medico.getNome() << "\nAltura: " << medico.getAltura() << "\nPeso: " << medico.getPeso() << endl;

    Cirurgiao cirurgiao;
    cirurgiao.setNome("Claudio");
    cirurgiao.setAltura(1.7);
    cirurgiao.setPeso(68);
    cirurgiao.setEspecialidade("Cirurgiao");
    cout << "\n\n" << cirurgiao.getEspecialidade() << endl;
    cout << "Nome: " << cirurgiao.getNome() << "\nAltura: " << cirurgiao.getAltura() << "\nPeso: " << cirurgiao.getPeso() << endl;
    cirurgiao.fazCirurgia();

    Oftalmologista oftal;
    oftal.setNome("Miguel");
    oftal.setAltura(2.0);
    oftal.setPeso(100);
    oftal.setEspecialidade("Oftalmologista");
    cout << "\n\n" << oftal.getEspecialidade() << endl;
    cout << "Nome: " << oftal.getNome() << "\nAltura: " << oftal.getAltura() << "\nPeso: " << oftal.getPeso() << endl;
    oftal.consultaOftal();

    Otorrino otorrino;
    otorrino.setNome("Francisco");
    otorrino.setAltura(1.85);
    otorrino.setPeso(90);
    otorrino.setEspecialidade("Otorrinolaringologista");
    cout << "\n\n" << otorrino.getEspecialidade() << endl;
    cout << "Nome: " << otorrino.getNome() << "\nAltura: " << otorrino.getAltura() << "\nPeso: " << otorrino.getPeso() << endl;
    otorrino.consultaOtorrino();

    Ginecologista gineco;
    gineco.setNome("Pedro");
    gineco.setAltura(1.75);
    gineco.setPeso(75);
    gineco.setEspecialidade("Ginecologista");
    cout << "\n\n" << gineco.getEspecialidade() << endl;
    cout << "Nome: " << gineco.getNome() << "\nAltura: " << gineco.getAltura() << "\nPeso: " << gineco.getPeso() << endl;
    gineco.consultaGineco();

    return 0;
}
