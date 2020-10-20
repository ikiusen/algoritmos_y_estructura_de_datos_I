#include <iostream>
#include <fstream>
using namespace std;

const int MAXPROD = 20;
typedef struct {
    int id_producto;
    double precio;
    int stock;
} tProducto;
typedef tProducto tArray[MAXPROD];
typedef struct{
    tArray elementos;
    int contador;
} tLista;
int i = 0;


void recuperarStock(tLista &lista);
void mostrarStock(tLista &lista);
void anadirProducto(tLista &lista);
void calcularProdMaxValor(tLista &lista);
void eliminirProducto(int id, tLista &lista);
void guardarStock(tLista &lista);


int main()
{
    tLista lista;
    lista.contador = 0;
    int op,id;
    recuperarStock(lista);
    do {
        cout << "1.- Añadir producto a stock" << endl;
        cout << "2.- Calcular el producto de mayor valor" << endl;
        cout << "3.- Eliminar un producto" << endl;
        cout << "0.- Salir" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            anadirProducto(lista);
            break;
        case 2:
            calcularProdMaxValor(lista);
            break;
        case 3:
            cout << "Ingrese el ID del producto que desee eliminar: ";
            cin >> id;
            eliminirProducto(id, lista);
            break;
        case 0:
            guardarStock(lista);
            break;
        default:
            cout << "Seleccione una operacion valida" << endl;
            break;
        }
    } while(op!=0);
return 0;
}



void recuperarStock(tLista &lista)
{
    ifstream rArchivo;
    rArchivo.open("stock.txt", ios::in);
    if(rArchivo.is_open())
    {
        while (!rArchivo.eof())
        {
            rArchivo >> lista.elementos[lista.contador].id_producto;
            rArchivo.get();
            rArchivo >> lista.elementos[lista.contador].precio;
            rArchivo.get();
            rArchivo >> lista.elementos[lista.contador].stock;

            if((lista.elementos[lista.contador].id_producto != 0)&& (lista.elementos[lista.contador].precio != 0) &&(lista.elementos[lista.contador].stock != 0))
            {
                lista.contador = (lista.contador + 1);
            }
        }
    }
    rArchivo.close();
    if(lista.contador != 0)
    {
        mostrarStock(lista);
    }

}

void mostrarStock(tLista &lista)
{
    cout << "La lista actual de stock es:" << endl;
    for (i =0; i < lista.contador; i++)
    {

        cout << "ID: " << lista.elementos[i].id_producto << endl;
        cout << "Precio de lista: " << lista.elementos[i].precio << endl;
        cout << "Cantidad en stock: " << lista.elementos[i].stock << endl;
        cout << " " << endl;
    }
}

void guardarStock(tLista &lista)
{
    ofstream gArchivo;
    gArchivo.open("stock.txt", ios::out);
    if(gArchivo.is_open())
    {
        for(i = 0; i < lista.contador; i++)
        {
             gArchivo << lista.elementos[i].id_producto<< " " << lista.elementos[i].precio << " " << lista.elementos[i].stock <<endl;
        }
    }
    gArchivo.close();
    cout << "Guardado con exito!" << endl;
}

void anadirProducto(tLista &lista)
{
    if (lista.contador < MAXPROD)
    {
        cout << "Ingrese id del producto (Mayor a 0): ";
        cin >> lista.elementos[lista.contador].id_producto;
        cout << "Ingrese el precio del producto (No nulo): ";
        cin >> lista.elementos[lista.contador].precio;
        cout << "Ingrese la cantidad de stock del producto (No nulo): ";
        cin >> lista.elementos[lista.contador].stock;

        lista.contador = (lista.contador + 1);
    } else cout << "Maximo de productos en el deposito" << endl;
}

void eliminirProducto(int id, tLista &lista)
{
     int pos = 0;
    for(i = 0; i < lista.contador; i++)
    {
        if(lista.elementos[i].id_producto == id)
        {
            pos = i;
            for(i = pos; i < lista.contador - 1; i++)
            {
             lista.elementos[i] = lista.elementos[i+1];
            }
            lista.contador = (lista.contador - 1);
            cout << "Producto eliminado correctamente!" << endl;
        }
    }
}

void calcularProdMaxValor(tLista &lista)
{
    double maximo = 0;
    int id_maximo;
    for (i=0; i< lista.contador; i++)
    {
        if(lista.elementos[i].precio * lista.elementos[i].stock >= maximo)
           {
               maximo = (lista.elementos[i].precio * lista.elementos[i].stock);
               id_maximo = lista.elementos[i].id_producto;
           }
    }
    cout << "El maximo valor en almacen es: " << maximo << endl;
    cout << "Corrsponde al id de producto: " << id_maximo << endl;
}
