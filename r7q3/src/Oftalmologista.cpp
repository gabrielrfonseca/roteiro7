#include "Oftalmologista.h"
using namespace std;

Oftalmologista::Oftalmologista() : Medico()
{

}

Oftalmologista::~Oftalmologista()
{
    //dtor
}

void Oftalmologista::consultaOftal(){
    cout << "Fazendo consulta oftalmologista" << endl;
}
