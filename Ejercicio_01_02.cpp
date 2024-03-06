#include <iostream>

int main() 
{
    // Definir el arreglo constante de 10 elementos
    const int tamano_arreglo = 10;
    int arreglo[tamano_arreglo] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11};

    // Variables para contar los números pares positivos y los impares negativos
    float pares_positivos = 0; // Cambiado a float
    float impares_negativos = 0; // Cambiado a float

    // Iterar sobre el arreglo para contar los números pares positivos e impares negativos
    for (int i = 0; i < tamano_arreglo; ++i) {
        if (arreglo[i] > 0 && arreglo[i] % 2 == 0) {
            pares_positivos++;
        } else if (arreglo[i] < 0 && arreglo[i] % 2 != 0) {
            impares_negativos++;
        }
    }

    // Calcular el porcentaje
    float porcentaje_pares_positivos = (pares_positivos / tamano_arreglo) * 100; // No se necesita static_cast
    float porcentaje_impares_negativos = (impares_negativos / tamano_arreglo) * 100; // No se necesita static_cast

    // Imprimir resultados
    std::cout << "Porcentaje de numeros pares positivos: " << porcentaje_pares_positivos << "%" << std::endl;
    std::cout << "Porcentaje de numeros impares negativos: " << porcentaje_impares_negativos << "%" << std::endl;

    return 0;
}