#ifndef PELICANO_H
#define PELICANO_H

#include <string>
using namespace std;

#include "Oviparo.h"


class Pelicano : public Oviparo
{
    public:
        Pelicano();
        virtual ~Pelicano();
        void comer();
        void dormir();
        void nacer();
        void ponerHuevo();

    protected:

    private:
        int numero;
        string nombre;
};

#endif // PELICANO_H
