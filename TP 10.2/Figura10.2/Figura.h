#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
    public:
        Figura();
        virtual ~Figura();

        int Getpunto();
        void Setpunto(int val);
        virtual void Dibujar();
        virtual void Borrar();
        void Rotar();
        void Mover();

    private:
        int punto;
};

#endif // FIGURA_H
