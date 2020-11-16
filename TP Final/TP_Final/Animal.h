#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:
        Animal();
        virtual ~Animal();
        virtual void comer() = 0;
        virtual void dormir() = 0;
        virtual void nacer() = 0;
};

#endif // ANIMAL_H
