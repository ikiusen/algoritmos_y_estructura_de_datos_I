#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"


class Triangulo : public Figura
{
    public:
        Triangulo();
        virtual ~Triangulo();

        int Getlado();
        void Setlado(int val);
        int Getlado2();
        void Setlado2(int val);
        int Getbase();
        void Setbase(int val);
        virtual void Dibujar();
        virtual void Borrar();

    private:
        int lado;
        int lado2;
        int base;
};

#endif // TRIANGULO_H
