
#include <iostream>
#include <vector>
#include <random>


using namespace std;

int main () 
{
    srand(time(0));

    int Numero_de_Persona = 50; //ingresar variables

    vector<int> Edades_de_Personas(Numero_de_Persona); //Creacion de vector que contendra las edades de cada persona

    for (int i = 0; i < Numero_de_Persona; i=i+1)
    {
        Edades_de_Personas[i] = rand() % (100 - 1);
    }

    //Creacion de contadores
    int Personas_Menores;
    int Personas_Mayores;

    //calcular la cantidad de personas mayores y menores de edad

    for (int i = 0; i < Numero_de_Persona; ++i) 
    {
        if (Edades_de_Personas[i] >= 18) 
        {
            Personas_Mayores++ ;
        } else 
        {
            Personas_Menores++ ;
        }
    }

    cout << "La cantidad de personas mayores de edad es: " << Personas_Mayores++ << endl;

    cout << "La cantidad de personas menores de edad es: " << Personas_Menores++ << endl;

    //Sacamos el porcentaje
    double Porcentaje_Mayores = (static_cast<double>(Personas_Mayores) / Numero_de_Persona) * 100; // El static_cast realiza verificaciones en tiempo de compilación para garantizar que la conversión sea segura.
    double Porcentaje_Menores = (static_cast<double>(Personas_Menores) / Numero_de_Persona) * 100;  

    cout << "El porcentaje de personas que son mayores de edad es del: " << Porcentaje_Mayores << "%" << endl;

    cout << "El porcentaje de personas que son menores de edad es del: " << Porcentaje_Menores << "%" << endl;  

    return 0;
}
