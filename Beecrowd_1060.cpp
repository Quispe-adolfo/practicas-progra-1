#include <iostream>
 
using namespace std;
 
int main() 
{
    // Para limitar el número de números, o sea 6
    int numeros[6];
    int numeroPositivos = 0;

    // Aquí dejará ingresar los 6 números
    for (int i = 0; i < 6; ++i) {
        cin >> numeros[i];

        // Para que no se permita ingresar el número 0
        if (numeros[i] != 0) {
            if (numeros[i] > 0) {
                numeroPositivos++;
            }
        }
    }

    cout << numeroPositivos << " valores positivos" << endl;
    return 0;
}