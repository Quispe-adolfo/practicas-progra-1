#include <iostream>
#include <cmath>

using namespace std;
 
int main() 
{

    double A, B, C, mayor, menor, medio;
    cin >> A >> B >> C;
    mayor = max(A, max(B,C));
    menor = min(A, min(B,C));
    medio = A + B + C - mayor - menor;

    if (mayor >= menor + medio)
    cout << "NAO FORMA TRIANGULO"<< endl;
    else 
    { 
        if (pow(mayor, 2) == pow (menor, 2) + pow(medio,2))
        cout << "TRIANGULO RETANGULO"<< endl;
        if (pow(mayor, 2) > pow (menor, 2) + pow(medio,2))
        cout << "TRIANGULO OBTUSANGULO"<< endl;
        if (pow(mayor, 2) < pow (menor, 2) + pow(medio,2))
        cout << "TRIANGULO ACUTANGULO"<< endl;
        if (mayor == menor && menor == medio)
        cout << "TRIANGULO EQUILATERO" << endl;
        if ((mayor == menor && menor != medio) || (mayor == medio && medio != menor) || (medio == menor && menor != mayor))
        cout << "TRIANGULO ISOSCELES" << endl;

    }
    return 0;
}
