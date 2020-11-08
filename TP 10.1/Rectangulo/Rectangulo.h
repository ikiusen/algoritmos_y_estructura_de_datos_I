#ifndef RECTANGULO_H
#define RECTANGULO_H


class Rectangulo
{
    public:
        Rectangulo();
        Rectangulo(float ancho, float alto);
        float Getancho();
        void Setancho(float val);
        float Getalto();
        void Setalto(float val);
        float calcularPerimetro();
        float calcularArea();

    private:
        float ancho;
        float alto;
};

#endif // RECTANGULO_H
