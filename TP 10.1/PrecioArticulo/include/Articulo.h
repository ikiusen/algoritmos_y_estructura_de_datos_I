#ifndef ARTICULO_H
#define ARTICULO_H


class Articulo
{
    public:
        Articulo();
        Articulo(float val);
        float GetcostoBase();
        void SetcostoBase(float val);
        float PrecioPorMayor();
        float PrecioDetalle();

    private:
        float costoBase;
};

#endif // ARTICULO_H
