#include <iostream>
#include <vector>

int main() {
    // Declarar tres vectores de enteros
    std::vector<int> vector1(5);
    std::vector<int> vector2(5);
    std::vector<int> vector3(5);

    // Pedir valores para vector1
    std::cout << "Ingrese 5 valores para el vector1: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> vector1[i];
    }

    // Pedir valores para vector2
    std::cout << "Ingrese 5 valores para el vector2: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> vector2[i];
    }

    // Calcular vector3 = vector1 + vector2
    for (int i = 0; i < 5; ++i) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado en vector3
    std::cout << "El vector3 resultante es: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << vector3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}