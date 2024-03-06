#include <iostream>

using namespace std;

int main() 
{
    // Definir el tamaño del arreglo
    const int TamanioArreglo = 10;
    int Arreglo[TamanioArreglo];
    // Solicitar al usuario que ingrese los valores del arreglo
    cout << "Por favor, ingrese " << TamanioArreglo << " numeros enteros por favor: ";
    for (int i = 0; i < TamanioArreglo; ++i) 
    {
        cin >> Arreglo[i];
    }
    // Variables para contar los números pares positivos y los impares negativos
    float Pares = 0; 
    float Impares = 0; 
    // Iterar sobre el arreglo para contar los números pares positivos e impares negativos
    for (int i = 0; i < TamanioArreglo; ++i) 
    {
        if (Arreglo[i] > 0 && Arreglo[i] % 2 == 0) 
        {
            Pares++;
        } 
        else if (Arreglo[i] < 0 && Arreglo[i] % 2 != 0) 
        {
            Impares++;
        }
    }
    // Calcular el porcentaje
    float PorcentajePares = (Pares / TamanioArreglo) * 100;
    float PorcentajeNegativo = (Impares / TamanioArreglo) * 100;  
    // Imprimir resultados
    cout << "Porcentaje de numeros pares positivos: " << PorcentajePares << "%" << endl;
    cout << "Porcentaje de numeros impares negativos: " << PorcentajeNegativo << "%" << endl;

    return 0;
}
