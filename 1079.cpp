#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    cin >> n;
    
    float totales[n];
    for (int i=0; i < n ; i++){
        float dato, sum=0;
        for (int j=1; j<=3;j++){
            cin >> dato;
            if (j == 1){
                sum += dato*2;
            }
            else if (j ==2){
                sum += dato*3;
            }
            else{
                sum += dato*5;
            }
            
        }
        totales[i] = sum/10;
    }
    for (int i=0; i<n; i++){
        cout <<fixed << setprecision(1) << totales[i] << endl;
    }
    return 0;
}

