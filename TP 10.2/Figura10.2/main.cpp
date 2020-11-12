#include <iostream>

#include "Figura.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Circulo.h"


using namespace std;

int main()
{
    int op;
    Figura *arrayFigura[4];
    Figura *figp,*figp1,*figp2,*figp3;
    do{
        cout << "1.- Elegir: Circulo " << endl;
        cout << "2.- Elegir: Cuadrado " << endl;
        cout << "3.- Elegir: Triangulo " << endl;
        cout << "4.- Elegir: Figura " << endl;
        cout << "5.- Llenar Puntero" << endl;
        cout << "0 - Salir" << endl;
        cin >> op;

        switch(op)
        {
            case 1:
                figp = new Circulo();
                figp->Dibujar();
                break;
            case 2:
                figp1 = new Cuadrado();
                figp1->Dibujar();
                break;
            case 3:
                figp2 = new Triangulo();
                figp2->Dibujar();
                break;
            case 4:
                figp3 = new Figura();
                figp3->Dibujar();
                break;
            case 5:
                arrayFigura[0] = figp;
                arrayFigura[1] = figp1;
                arrayFigura[2] = figp2;
                arrayFigura[3] = figp3;
                for(int i = 0; i < 4; i++)
                {
                    arrayFigura[i]->Dibujar();
                }
                break;
            case 0:
                cout << "Cerrando programa..." << endl;
            break;
            default:
                cout << "Opcion desconocida!" << endl;
                break;
        }
    } while(op != 0);
    return 0;
}
