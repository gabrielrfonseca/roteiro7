#include "Cirurgiao.h"
using namespace std;

Cirurgiao::Cirurgiao() : Medico()
{

}

Cirurgiao::~Cirurgiao()
{
    //dtor
}
void Cirurgiao::fazCirurgia(){
    cout << "Fazendo cirurgia" << endl;
}
