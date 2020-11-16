#ifndef OVIPARO_H
#define OVIPARO_H

#include "Animal.h"


class Oviparo : public Animal
{
    public:
        Oviparo();
        virtual ~Oviparo();
        virtual void comer() = 0;
        virtual void dormir() = 0;
        virtual void nacer() = 0;
        virtual void ponerHuevo() = 0;
};

#endif // OVIPARO_H
