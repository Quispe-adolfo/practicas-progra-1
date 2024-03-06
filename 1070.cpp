#include <iostream>
 
using namespace std;
 
int main(){
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    cin >> n;
    for (int j = n; j <=n+11; j++){
        if (j%2!=0){
            cout << j << endl;
        }
    }

    return 0;
}
