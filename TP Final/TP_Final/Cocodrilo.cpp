#include "Cocodrilo.h"
#include <iostream>
using namespace std;

Cocodrilo::Cocodrilo()
{
    //ctor
}

Cocodrilo::~Cocodrilo()
{
     delete this;//dtor
}

void Cocodrilo::comer()
{
    cout << "El cocodrilo se prepara para atacar y comer a su presa! " << endl;
    cout << "" << endl;
}

void Cocodrilo::dormir()
{
    cout << "El cocodrilo se acomoda contra las piedras y duerme! " << endl;
    cout << "" << endl;
}

void Cocodrilo::nacer()
{
    cout << "El huevo del cocodrilo ha nacido! " << endl;
    cout << "" << endl;
}

void Cocodrilo::ponerHuevo()
{
    cout << "El cocodrilo ha puesto un huevo, pronto tendra una nueva cria! " << endl;
    cout << "" << endl;
}
