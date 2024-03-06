#include <iostream>
 
using namespace std;

struct Animal 
{
    string palabras;
    string nombre;
};

int main() {
    
    // para indicar que hay 8 combinaciones posibles
    const int numeroCombinaciones = 8;
    Animal tabla[numeroCombinaciones] = 
    {
        {"vertebradoavecarnivoro", "aguia"},
        {"vertebradoaveonivoro", "pomba"},
        {"vertebradomamiferoonivoro", "homem"},
        {"vertebradomamiferoherbivoro", "vaca"},
        {"invertebradoanelideoonivoro", "minhoca"},
        {"invertebradoanelideohematofago", "sanguessuga"},
        {"invertebradoinsetoherbivoro", "lagarta"},
        {"invertebradoinsetohematofago", "pulga"}
    };

    // para generar el animal que salsra dependiendo la combinación
    string palabra1, palabra2, palabra3;
    cin >> palabra1 >> palabra2 >> palabra3;

    string clave = palabra1 + palabra2 + palabra3;
    string animal;

    for (int i = 0; i < numeroCombinaciones; ++i) 
    {
        if (tabla[i].palabras == clave) 
        {
            animal = tabla[i].nombre;
            break;
        }
    }

    cout << animal << endl;
    return 0;
}