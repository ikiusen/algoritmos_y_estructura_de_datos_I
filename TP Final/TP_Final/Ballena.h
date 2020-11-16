#ifndef BALLENA_H
#define BALLENA_H

#include "Mamifero.h"
#include <string>
using namespace std;


class Ballena : public Mamifero
{
    public:
        Ballena();
        virtual ~Ballena();
        void comer();
        void dormir();
        void nacer();
        void amamantar();

    protected:

    private:
        int numero;
        string nombre;
};

#endif // BALLENA_H
