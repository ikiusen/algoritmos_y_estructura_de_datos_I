#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"


class Cuadrado : public Figura
{
    public:
        Cuadrado();
        virtual ~Cuadrado();

        int Getlado();
        void Setlado(int val);
        virtual void Dibujar();
        virtual void Borrar();

    private:
        int lado;
        int lado1;
        int lado2;
        int lado3;
};

#endif // CUADRADO_H
