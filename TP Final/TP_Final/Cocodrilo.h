#ifndef COCODRILO_H
#define COCODRILO_H

#include <string>
using namespace std;
#include "Oviparo.h"

class Cocodrilo : public Oviparo
{
    public:
        Cocodrilo();
        virtual ~Cocodrilo();
        void comer();
        void dormir();
        void nacer();
        void ponerHuevo();

    protected:

    private:
        int numero;
        string name;
};

#endif // COCODRILO_H
