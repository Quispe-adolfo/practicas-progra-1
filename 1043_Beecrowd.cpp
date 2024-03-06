#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    //definir variables
    float A, B, C;
    
    //ingresar los lados
    cin >> A;
    cin >> B;
    cin >> C;

    //Calcular el perimetro y area

    if (A < (B + C) && B < (A + C) && C < (A + B)) {
        double perimetro = A + B + C;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    } else {
        float area = ((A + B) * C) / 2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

    return 0;
}
