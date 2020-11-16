#include <iostream>
#include <string>
#include "Animal.h"
#include "Oviparo.h"
#include "Cocodrilo.h"
#include "Ganso.h"
#include "Pelicano.h"
#include "Mamifero.h"
#include "Ballena.h"
#include "Murcielago.h"
#include "Foca.h"

using namespace std;

int main()
{
    int op;
    Animal *arrayAnimal[5];
    Oviparo *ovi1;
    Mamifero *mam1;
    do{
        cout << "Oviparos: (Clase abstracta aplica polimorfismo a las siguientes) " << endl;
        cout << "1.- Elegir: Cocodrilo (Pone huevo y nace) " << endl;
        cout << "2.- Elegir: Ganso (Pone huevo y nace) " << endl;
        cout << "3.- Elegir: Pelicano (Pone huevo y nace) " << endl;
        cout << "Mamiferos: (Clase abstracta aplica polimorfismo a las siguientes) " << endl;
        cout << "4.- Elegir: Foca (Nace y amamanta) " << endl;
        cout << "5.- Elegir: Ballena (Nace y amamanta) " << endl;
        cout << "6.- Elegir: Murcielago (Nace y amamanta) " << endl;
        cout << "7.- Llenar puntero para dar de comer y poner a dormir a los animales" << endl;
        cout << "0 - Salir" << endl;
        cin >> op;

        switch(op)
        {
            case 1:
                ovi1 = new Cocodrilo();
                ovi1->ponerHuevo();
                ovi1->nacer();
                break;
            case 2:
                ovi1 = new Ganso();
                ovi1->ponerHuevo();
                ovi1->nacer();
                break;
            case 3:
                ovi1 = new Pelicano();
                ovi1->ponerHuevo();
                ovi1->nacer();
                break;
            case 4:
                mam1 = new Foca();
                mam1->nacer();
                mam1->amamantar();
                break;
            case 5:
                mam1 = new Ballena();
                mam1->nacer();
                mam1->amamantar();
                break;
            case 6:
                mam1 = new Murcielago();
                mam1->nacer();
                mam1->amamantar();
                break;
            case 7:
                arrayAnimal[0] = new Cocodrilo();
                arrayAnimal[1] = new Foca();
                arrayAnimal[2] = new Ballena();
                arrayAnimal[3] = new Murcielago();
                arrayAnimal[4] = new Ganso();
                arrayAnimal[5] = new Pelicano();
                for(int i = 0; i < 5; i++)
                {
                    arrayAnimal[i]->comer();
                    arrayAnimal[i]->dormir();
                }
                break;
            case 0:
                cout << "Cerrando programa..." << endl;
                delete []arrayAnimal;
            break;
            default:
                cout << "Opcion desconocida!" << endl;
                break;
        }
    } while(op != 0);
    return 0;
}
