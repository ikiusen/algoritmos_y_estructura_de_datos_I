#ifndef MURCIELAGO_H
#define MURCIELAGO_H

#include "Mamifero.h"
#include <string>
using namespace std;


class Murcielago : public Mamifero
{
    public:
        Murcielago();
        virtual ~Murcielago();
        void comer();
        void dormir();
        void nacer();
        void amamantar();

    private:
        int numero;
        string nombre;
};

#endif // MURCIELAGO_H
