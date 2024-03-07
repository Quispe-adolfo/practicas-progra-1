#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cout << "Ingrese los  numeros primos para  almacenar: ";
    cin >> n;

    vector<int> numerosPrimos;

    int num = 2;                                                            // Comenzamos desde el primer número primo, que es 2
    while (numerosPrimos.size() < n) {
        bool esPrimo = true;
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            numerosPrimos.push_back(num);   //agrega los numeros primos al vector
        }

        ++num;

    }

    // Imprimir los números primos almacenados en el arreglo
    cout << "Todos los primeros " << n << " numeros primos son:" << endl;

    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }

    cout << endl;

    return 0;
}
