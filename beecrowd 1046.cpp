#include <iostream>
 
using namespace std;
 
int main() {

    int horas, horaen, diferencia;
    cin >> horaen >> horas;
    if (horaen > horas)
    {
        horas = horas + 24;
        diferencia = horas - horaen;
        cout << "O JOGO DUROU " << diferencia << " HORA(S)"<< endl;
    }
    else if (horaen < horas)
    {
        diferencia = horas - horaen;
        cout << "O JOGO DUROU " << diferencia << " HORA(S)"<< endl;
    }
    else
        cout << "O JOGO DUROU 24 HORA(S)"<< endl;
 
    return 0;
} 
