#include <iostream>
using namespace std;

int main()
    {
        //Declaro variables enteras, para mostrar la diferencia con los doubles.
        int c_radio,c_altura,c_volumen,pi;

        //Declaro las variable double
        double h_ancho,h_alto,h_largo,h_volumen,c_radio_d,c_altura_d,c_volumen_d,pi_d;

        //Calculo el volumen de la habitacion, con doubles, ya que quiero la precision decimal
        h_ancho = 4;
        h_largo = 5;
        h_alto = 2.5;
        h_volumen = (h_ancho * h_largo * h_alto);
        cout << "El volumen de una habitacion de 4x5x2.5 es: " << h_volumen <<" m^3" << endl;

        //Calculo el volumen del cono con enteros
        pi = 3.14;
        c_radio = 14.5;
        c_altura = 26.79;
        c_volumen = ((pi*(c_radio*c_radio)*c_altura)/3);
        cout << "El volumen de un cono de radio de base = 14.5 y de altura = 26.79 es:" << c_volumen << endl;

        //Calculo el volumen del cono con doubles
        pi_d = 3.14;
        c_radio_d = 14.5;
        c_altura_d = 26.79;
        c_volumen_d = ((pi_d*(c_radio_d*c_radio_d)*c_altura_d)/3);
        cout << "El volumen de un cono de radio de base = 14.5 y de altura = 26.79 es:" << c_volumen_d << endl;


        return 0;
    }
