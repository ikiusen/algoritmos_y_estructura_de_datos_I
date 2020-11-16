#ifndef FOCA_H
#define FOCA_H

#include "Mamifero.h"

#include <string>
using namespace std;


class Foca : public Mamifero
{
    public:
        Foca();
        virtual ~Foca();
        void comer();
        void dormir();
        void nacer();
        void amamantar();

    private:
        int numero;
        string nombre;
};

#endif // FOCA_H
