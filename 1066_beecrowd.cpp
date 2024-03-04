#include<iostream>

using namespace std; 

int main()
{
    int numero;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int  i = 0;   i < 5;   i++)
    {
        cin >> numero;

        if (numero  %  2 == 0)
        {
            pares++;
        } else {
            impares++;
        }     
        if (numero > 0 )
        {
            positivos++;
        } else {
            negativos++;
        }
    }
    cout << pares << " valor(es) par(es) " << endl;
    cout << impares << " valor(es) impar(es)"<< endl;
    cout << positivos << " valor(es) positivo(os)"<<endl;
    cout << negativos << " valor(es) negativo(os)" <<endl;

    return 0;
}