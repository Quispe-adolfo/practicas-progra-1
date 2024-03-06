#include <iostream>

using namespace std;

int main()
{
    int x, a;
    int Intervalo = 0;
    int FueraDeIntervalo = 0;
    
    cin >> x;
    for(int i = 0; i < x; i++)
    {
            cin >> a;
            if(a >= 10 && a <= 20) Intervalo++;
            else FueraDeIntervalo++;
    }
    cout << Intervalo << " in\n";
    cout << FueraDeIntervalo << " out\n";
    
    return 0;
}
