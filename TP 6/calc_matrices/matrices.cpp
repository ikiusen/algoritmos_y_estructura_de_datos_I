#include <iostream>

using namespace std;
 const int n = 5;

void cargarMatriz();
void sumarMatriz(int matriz[n][n], int matriz1[n][n]);
void restarMatriz(int matriz[n][n], int matriz1[n][n]);
void multiplicarMatriz(int matriz[n][n], int matriz1[n][n]);
void trasponerMatriz();
void mostrarMatriz(int matriz[n][n]);

int main()
{
    int matriz[n][n];
    int matriz1[n][n];

    sumarMatriz(matriz,matriz1);
    return 0;
}

void cargarMatriz()
{

}
void sumarMatriz(int matriz[n][n], int matriz1[n][n])
{
    int matriz2[n][n];
    for (int i=0; i < n ; i++){
        for(int j=0; j<n; i++)
        {
            matriz2[i][j] = (matriz[i][j] + matriz1[i][j]);
        }
    }

    mostrarMatriz(matriz2);
}
void mostrarMatriz(int matriz[n][n])
{
    for (int i=0; i < n ; i++){
        cout << '{';
        for(int j=0; j<n; i++)
        {
           cout << matriz[i][j] << ' ';
        }
        cout << '}';
    }
}
