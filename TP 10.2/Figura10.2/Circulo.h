#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"


class Circulo : public Figura
{
    public:
        Circulo();
        virtual ~Circulo();

        float Getradio();
        void Setradio(float val);
        virtual void Dibujar();
        virtual void Borrar();

    private:
        float radio;
};

#endif // CIRCULO_H
