#include <iostream>
 
using namespace std;
 
int main() {

    int horass, minutoss, horasen, minutosen;
    cin >> horass >> minutoss >> horasen >> minutosen;
    if (minutosen < minutoss){
        minutosen = minutosen + 60;
        minutosen = minutosen - minutoss;
        horasen = horasen - 1;
        if (horasen < horass){
            horasen = horasen + 24;
            horasen = horasen - horass;
        }
        else
        {
            horasen = horasen - horass;
        }
        cout << "O JOGO DUROU "<< horasen << " HORA(S) E " << minutosen << " MINUTO(S)" << endl;
    }
    else if (minutosen > minutoss){
        minutosen = minutosen - minutoss;
        if (horasen < horass){
            horasen = horasen + 24;
            horasen = horasen - horass;
        }
        else
        {
            horasen = horasen - horass;
        }
        cout << "O JOGO DUROU "<< horasen << " HORA(S) E " << minutosen << " MINUTO(S)" << endl;
    }
    else 
    {
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    return 0;
}