#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "Animal.h"


class Mamifero : public Animal
{
    public:
        Mamifero();
        virtual ~Mamifero();
        virtual void comer() = 0;
        virtual void dormir() = 0;
        virtual void nacer() = 0;
        virtual void amamantar() = 0;
};

#endif // MAMIFERO_H
