#include <iostream>
#include <string>

int main() {
    // Arreglo de población y arreglo de nombres de departamentos
    const int tamano_arreglo = 9;
    int poblacion[tamano_arreglo] = {10000, 20000, 15000, 30000, 25000, 18000, 22000, 27000, 23000};
    std::string nombres[tamano_arreglo] = {"Departamento1", "Departamento2", "Departamento3", "Departamento4",
                                            "Departamento5", "Departamento6", "Departamento7", "Departamento8", "Departamento9"};

    // Encontrar el departamento con la mayor población
    int max_poblacion = poblacion[0];
    std::string dept_mayor_poblacion = nombres[0];
    for (int i = 1; i < tamano_arreglo; ++i) {
        if (poblacion[i] > max_poblacion) {
            max_poblacion = poblacion[i];
            dept_mayor_poblacion = nombres[i];
        }
    }

    // Encontrar el departamento con la menor población
    int min_poblacion = poblacion[0];
    std::string dept_menor_poblacion = nombres[0];
    for (int i = 1; i < tamano_arreglo; ++i) {
        if (poblacion[i] < min_poblacion) {
            min_poblacion = poblacion[i];
            dept_menor_poblacion = nombres[i];
        }
    }

    // Imprimir resultados
    std::cout << "Departamento con la mayor poblacion: " << dept_mayor_poblacion << std::endl;
    std::cout << "Departamento con la menor poblacion: " << dept_menor_poblacion << std::endl;

    return 0;
}