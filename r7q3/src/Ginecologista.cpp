#include "Ginecologista.h"
using namespace std;

Ginecologista::Ginecologista() : Medico()
{

}

Ginecologista::~Ginecologista()
{
    //dtor
}

void Ginecologista::consultaGineco(){
    cout << "Fazendo consulta ginecologista" << endl;
}
