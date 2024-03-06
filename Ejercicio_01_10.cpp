#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Arreglo de población y arreglo de nombres de departamentos
    const int tamanioArreglo = 9;
    int poblacion[tamanioArreglo];
    string nombres[tamanioArreglo];

    // Solicitar al usuario que ingrese los valores de población y los nombres de los departamentos
    cout << "Por favor, ingrese el nombre correspondiente del departamento y los datos de poblacion:" << endl;
    for (int i = 0; i < tamanioArreglo; ++i) 
    {
        cout << "Nombre: ";
        cin >> nombres[i];
        cout << "Poblacion: ";
        cin >> poblacion[i];
    }
    
    // Encontrar el departamento con la mayor población
    string mayor_poblacion = nombres[0]; // Inicializamos con el primer nombre

    for (int i = 1; i < tamanioArreglo; ++i) 
    {
        if (poblacion[i] > poblacion[0]) // Comparamos con la población del primer departamento
        {
            mayor_poblacion = nombres[i];
            poblacion[0] = poblacion[i]; // Actualizamos la población máxima encontrada
        }
    }

    // Encontrar el departamento con la menor población
    string menor_poblacion = nombres[0]; // Inicializamos con el primer nombre
    int min_poblacion = poblacion[0];

    for (int i = 1; i < tamanioArreglo; ++i) 
    {
        if (poblacion[i] < min_poblacion) // Comparamos con la población mínima actual
        {
            min_poblacion = poblacion[i];
            menor_poblacion = nombres[i]; // Actualizamos el nombre del departamento
        } 
        else if (poblacion[i] == min_poblacion && nombres[i] < menor_poblacion) 
        {
            // Si encontramos un departamento con la misma población mínima pero aparece antes en la lista de nombres
            menor_poblacion = nombres[i];
        }
    }

    // Imprimir resultados
    cout << "Departamento con la mayor poblacion: " << mayor_poblacion << endl;
    cout << "Departamento con la menor poblacion: " << menor_poblacion << endl;
