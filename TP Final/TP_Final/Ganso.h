#ifndef GANSO_H
#define GANSO_H

#include <string>
using namespace std;
#include "Oviparo.h"

class Ganso : public Oviparo
{
    public:
        Ganso();
        virtual ~Ganso();
        void comer();
        void dormir();
        void nacer();
        void ponerHuevo();

    private:
        int numero;
        string nombre;
};

#endif // GANSO_H
