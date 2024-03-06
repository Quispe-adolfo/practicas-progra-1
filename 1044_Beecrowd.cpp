#include <iostream>

using namespace std;

int main ()
{
    //Ponemos las variables como entero
    int A, B;

    //Ingresamos los numeros
    cin >> A;
    cin >> B;

    //Verificamos si son multiplos o no
    if (B % A == 0 || A % B == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;

}
