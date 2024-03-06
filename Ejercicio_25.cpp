
#include <iostream>
#include <cstdlib> 
#include <random>
#include <ctime>   

using namespace std;

int main() 
{
    
    srand(time(0));

    int N;
    
    cout << "Ingrese la cantidad de elementos, por favor: ";
    cin >> N;

    int Elemetos[N];

    // Generar valores aleatorios del 1 al 100
    for (int i = 0; i < N; i++) {
        Elemetos[i] = rand() % (100 - 1); // Rango
    }                           

    // Encontrar Elemento mayor, Elmento menor y el promedio
    int Elemento_Mayor = Elemetos[0];
    int Elemento_Menor = Elemetos[0];
    int Suma_Elementos = Elemetos[0];

    for (int i = 1; i < N; i++) 
    {
        
        Suma_Elementos += Elemetos[i];

        if (Elemetos[i] > Elemento_Mayor) 
        {
            Elemento_Mayor = Elemetos[i];
        }

        if (Elemetos[i] < Elemento_Menor) 
        {
            Elemento_Menor = Elemetos[i];
        }
    }

    // Proceso de calculo de promedio
    float Promedio;
    
    Promedio = (Suma_Elementos) / N;

    
    cout << "El elemento mayor es: " << Elemento_Mayor << endl;
    cout << "El elemento menor es: " << Elemento_Menor << endl;
    cout << "El promedio de los elementos es: " << Promedio << endl;

    return 0;
}