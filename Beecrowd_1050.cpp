#include <iostream>
 
using namespace std;
 
int main() 
{
    // en el caso de que se ingrese un nnúmero equivocado
    int ddd;
    cin >> ddd;

    // para los números de marcación telefónica de ciudades
    string ciudad;

    // en el caso de que ingrese el número se dará el nombre de la ciudad
    if (ddd == 61) 
        ciudad = "Brasilia";
    else if (ddd == 71) 
        ciudad = "Salvador";
    else if (ddd == 11)
        ciudad = "Sao Paulo";
    else if (ddd == 21) 
        ciudad = "Rio de Janeiro";
    else if (ddd == 32) 
        ciudad = "Juiz de Fora";
    else if (ddd == 19) 
        ciudad = "Campinas";
    else if (ddd == 27) 
        ciudad = "Vitoria";
    else if (ddd == 31) 
        ciudad = "Belo Horizonte";
    else 
        ciudad = "DDD nao cadastrado";

    cout << ciudad << endl;
    return 0;
}