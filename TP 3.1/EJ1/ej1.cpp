#include <iostream>
#include <ctime>
#include <string>
using namespace std;

typedef enum { fideos_al_pesto, carne_al_horno, pastel_de_papa} tPlatoPrincipal;
typedef enum { rabas, picada, croquetas} tPrimerPlato;
typedef enum { flan_con_crema, helado, ensalada_frutas} tPostre;

string getPrimerPlato (tPrimerPlato entrada);
string getPlatoPrincipal (tPlatoPrincipal plato);
string getPostre (tPostre postre);
char* fechaDeHoy();

int main()
{
    tPlatoPrincipal plato;
    tPrimerPlato entrada;
    tPostre postre;
    int num_mesa,num;
    string nombre_mozo;
    cout << "Ingrese nombre del mozo" << endl;
    cin >> nombre_mozo;
    cout << "Ingrese numero de mesa" << endl;
    cin >> num_mesa;
    cout << "Ingrese codigo de primer plato (0 a 2)" << endl;
    cin >> num;
    entrada = (tPrimerPlato)num;
    cout << "Ingrese codigo de plato principal (0 a 2)" << endl;
    cin >> num;
    plato = (tPlatoPrincipal)num;
    cout << "Ingrese codigo de postre (0 a 2)" << endl;
    cin >> num;
    postre = (tPostre)num;
    cout << "Mozo: " << nombre_mozo << endl;
    cout << "Nro de mesa: " << num_mesa << endl;
    cout << "Fecha: " << fechaDeHoy() << endl;
    cout << "Entrada: " << getPrimerPlato(entrada) << endl;
    cout << "Plato principal: " << getPlatoPrincipal(plato) << endl;
    cout << "Postre: " << getPostre(postre) << endl;
    return 0;
}

string getPrimerPlato(tPrimerPlato entrada)
{
    string respuesta;
    if(entrada == 0)
    {
        respuesta = "rabas";

    } else if(entrada == 1)
        {
         respuesta = "picada";

        } else {

            respuesta = "croquetas";
        }
    return respuesta;
}

string getPlatoPrincipal(tPlatoPrincipal plato)
{
    string respuesta;
    if(plato == 0)
    {
        respuesta = "fideos_al_pesto";

    } else if(plato == 1)
        {
         respuesta = "carne_al_horno";

        } else {

            respuesta = "pastel_de_papa";
        }
    return respuesta;
}
string getPostre(tPostre postre)
{
    string respuesta;
    if(postre == flan_con_crema)
    {
        respuesta = "flan_con_crema";

    } else if(postre == 1)
        {
         respuesta = "helado";

        } else {
            respuesta = "ensalada_de_fruta";
        }
    return respuesta;
}
char* fechaDeHoy()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}

